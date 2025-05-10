#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <deque>

// Constants
int NUM_ELEMENTS;

// Functions declarations
void ProfileBackInsertVector(std::vector<int>& vec);
void RandomAccessVector(std::vector<int>& vec);
void ProfilFrontInsertVector(std::vector<int>& vec);
void ProfileBackInsertList(std::list<int>& vec);
void ProfilFrontInsertList(std::list<int>& vec);
void RandomAccessList(std::list<int>& vec);
void ProfileBackInsertDeque(std::deque<int>& vec);
void ProfilFrontInsertDeque(std::deque<int>& vec);
void RandomAccessDeque(std::deque<int>& vec);

// Functions Definitions
int main()
{
    std::cout << "How many tests would you like to run? (You should use at least 100,000):";
    std::cin >> NUM_ELEMENTS;
    std::vector<int> vec, vec2;
    ProfileBackInsertVector(vec);
    ProfilFrontInsertVector(vec2);
    RandomAccessVector(vec);

    std::list<int> lis, lis2;
    ProfileBackInsertList(lis);
    ProfilFrontInsertList(lis2);
    RandomAccessList(lis);
    
    std::deque<int> deq, deq2;
    ProfileBackInsertDeque(deq);
    ProfilFrontInsertDeque(deq2);
    RandomAccessDeque(deq);

    return 0;
}

void ProfileBackInsertVector(std::vector<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the back for std::vector: " << duration.count() << " ms\n";
}
void ProfilFrontInsertVector(std::vector<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.insert(vec.begin(), i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::vector: " << duration.count() << " ms\n";
}
void RandomAccessVector(std::vector<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    srand(static_cast<unsigned int>(time(nullptr)));
    int min = 0;
    int max = NUM_ELEMENTS;
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        int number = min + rand() % (max - min + 1);
        int answer = vec[number];
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken for random access for std::vector: " << duration.count() << " ms\n";
}
void ProfileBackInsertList(std::list<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the back for std::list: " << duration.count() << " ms\n";
}
void ProfilFrontInsertList(std::list<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.push_front(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::list: " << duration.count() << " ms\n";
}
void RandomAccessList(std::list<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    srand(static_cast<unsigned int>(time(nullptr)));
    int min = 0;
    int max = NUM_ELEMENTS;
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        int number = min + rand() % (max - min + 1);
        std::list<int>::iterator it = vec.begin();
        std::advance(it, number);
        int ans = *it;
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken for random access for std::list: " << duration.count() << " ms\n";
}
void ProfileBackInsertDeque(std::deque<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.push_back(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the back for std::deque: " << duration.count() << " ms\n";
}
void ProfilFrontInsertDeque(std::deque<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        vec.push_front(i);
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken to insert at the front for std::deque: " << duration.count() << " ms\n";
}
void RandomAccessDeque(std::deque<int>& vec)
{
    // Start time
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    // Insert elements at the back
    srand(static_cast<unsigned int>(time(nullptr)));
    int min = 0;
    int max = NUM_ELEMENTS;
    for (int i = 0; i < NUM_ELEMENTS; ++i)
    {
        int number = min + rand() % (max - min + 1);
        int answer = vec[number];
    }

    // End time
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();

    // Duration
    std::chrono::duration<double> duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time taken for random access for std::deque: " << duration.count() << " ms\n";
}