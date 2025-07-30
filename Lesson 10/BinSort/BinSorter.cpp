#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int value) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == value)
            return mid;
        else if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
int secondBinarySearch(const vector<int>& arr, int value)
{
    return binarySearchHelper(arr, 0, arr.size() - 1, value);
}
int binarySearchHelper(const vector<int>& arr, int left, int right, int value){
    int mid = left + (right - left) / 2;

    if (arr[mid] == value)      return mid;
    else if (arr[mid] < value)  return binarySearchHelper(arr, mid + 1, right, value);
    else if (left > right)      return -1;
    else                        return binarySearchHelper(arr, left, mid - 1, value); 
}



int main() {
    vector<int> arr = { 1, 3, 5, 7, 9, 11 };
    int target = 7;

    int index = binarySearch(arr, target);
    if (index != -1)
        cout << "Value found at index " << index << endl;
    else
        cout << "Value not found." << endl;

    return 0;
}
