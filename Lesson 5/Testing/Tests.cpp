#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <deque>

// Function declarations
void ProfileBackInsertVector(std::vector<int>& vec, int numElements);
void ProfileFrontInsertVector(std::vector<int>& vec, int numElements);
void RandomAccessVector(std::vector<int>& vec, int numElements);
void ProfileBackInsertList(std::list<int>& vec, int numElements);
void ProfileFrontInsertList(std::list<int>& vec, int numElements);
void RandomAccessList(std::list<int>& vec, int numElements);
void ProfileBackInsertDeque(std::deque<int>& vec, int numElements);
void ProfileFrontInsertDeque(std::deque<int>& vec, int numElements);
void RandomAccessDeque(std::deque<int>& vec, int numElements);

int main() {
    std::cout << "This program benchmarks the performance of std::vector, std::list, and std::deque "
        "for inserting elements at the front, back, and accessing them randomly.\n"
        "It helps compare their strengths and weaknesses.\n\n";

    int NUM_ELEMENTS;
    std::cout << "How many elements should be tested? (At least 100,000 is recommended): ";
    std::cin >> NUM_ELEMENTS;

    // Vectors
    std::vector<int> vec, vec2;
    ProfileBackInsertVector(vec, NUM_ELEMENTS);
    ProfileFrontInsertVector(vec2, NUM_ELEMENTS);
    RandomAccessVector(vec, NUM_ELEMENTS);

    // Lists
    std::list<int> lis, lis2;
    ProfileBackInsertList(lis, NUM_ELEMENTS);
    ProfileFrontInsertList(lis2, NUM_ELEMENTS);
    RandomAccessList(lis, NUM_ELEMENTS);

    // Deques
    std::deque<int> deq, deq2;
    ProfileBackInsertDeque(deq, NUM_ELEMENTS);
    ProfileFrontInsertDeque(deq2, NUM_ELEMENTS);
    RandomAccessDeque(deq, NUM_ELEMENTS);

    return 0;
}

void ProfileBackInsertVector(std::vector<int>& vec, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        vec.push_back(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Vector (Back Insert): " << duration.count() << " ms. "
        << "Fast due to contiguous memory allocation.\n";
}

void ProfileFrontInsertVector(std::vector<int>& vec, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        vec.insert(vec.begin(), i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Vector (Front Insert): " << duration.count() << " ms. "
        << "Slow due to shifting all elements with every insert.\n";
}

void RandomAccessVector(std::vector<int>& vec, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < numElements; ++i) {
        int index = rand() % numElements;
        int value = vec[index];
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Vector (Random Access): " << duration.count() << " ms. "
        << "Fast because vectors support direct indexing.\n";
}

void ProfileBackInsertList(std::list<int>& lis, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        lis.push_back(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "List (Back Insert): " << duration.count() << " ms. "
        << "Efficient due to linked list structure.\n";
}

void ProfileFrontInsertList(std::list<int>& lis, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        lis.push_front(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "List (Front Insert): " << duration.count() << " ms. "
        << "Fast because linked lists efficiently insert at the front.\n";
}

void RandomAccessList(std::list<int>& lis, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < numElements; ++i) {
        int index = rand() % numElements;
        auto it = lis.begin();
        std::advance(it, index);
        int value = *it;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "List (Random Access): " << duration.count() << " ms. "
        << "Slow because lists require sequential traversal.\n";
}

void ProfileBackInsertDeque(std::deque<int>& deq, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        deq.push_back(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Deque (Back Insert): " << duration.count() << " ms. "
        << "Similar to vector but more flexible.\n";
}

void ProfileFrontInsertDeque(std::deque<int>& deq, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < numElements; ++i) {
        deq.push_front(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Deque (Front Insert): " << duration.count() << " ms. "
        << "Faster than vector but slower than list.\n";
}

void RandomAccessDeque(std::deque<int>& deq, int numElements) {
    auto start = std::chrono::high_resolution_clock::now();
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < numElements; ++i) {
        int index = rand() % numElements;
        int value = deq[index];
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Deque (Random Access): " << duration.count() << " ms. "
        << "Almost as fast as vector but with more overhead.\n";
}
