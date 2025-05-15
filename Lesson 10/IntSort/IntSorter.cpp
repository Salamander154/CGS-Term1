#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int value) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

int main() {
    vector<int> arr = { 5, 3, 7, 1, 9 };
    int target = 7;

    int index = linearSearch(arr, target);
    if (index != -1)
        cout << "Value found at index " << index << endl;
    else
        cout << "Value not found." << endl;

    return 0;
}
