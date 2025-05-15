#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

vector<int> generateRandomList(int size) {
    vector<int> arr(size);
    for (int i = 0; i < size; ++i)
        arr[i] = rand() % 10000;
    return arr;
}

int main() {
    srand(time(0));

    int size1 = 1000;
    int size2 = 2 * size1;

    vector<int> arr1 = generateRandomList(size1);
    vector<int> arr2 = generateRandomList(size2);

    clock_t start = clock();
    bubbleSort(arr1);
    clock_t end = clock();
    double time1 = double(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken to sort " << size1 << " elements: " << time1 << " seconds" << endl;

    start = clock();
    bubbleSort(arr2);
    end = clock();
    double time2 = double(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken to sort " << size2 << " elements: " << time2 << " seconds" << endl;

    cout << "Time ratio (larger/smaller): " << (time2 / time1) << endl;
    cout << "Expected time complexity: O(n^2)" << endl;

    return 0;
}
