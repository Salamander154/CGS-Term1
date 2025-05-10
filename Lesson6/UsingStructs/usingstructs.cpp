#include <iostream>
#include <string>

using namespace std;

struct Car 
{
    string make;
    string model;
    int year;
};

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << a;
}

void swap3(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main() 
{
    int a = 10;
    int b = 20;
    int* bpointer = &b;
    cout << a << b << "\n";
    swap2(a, b);

    cout << a << b << "\n";
    swap3(a, b);
    cout << a << b << "\n";
    //swap(&a, bpointer);
    //cout << *bpointer;

    /*
    int arr[3] { 10, 20, 30 };
    cout << arr[0] << arr[1] << arr[2] << "\n";
    int* pointer = arr;
    cout << pointer[0] << pointer[1] << pointer[2] << "\n";
    cout << *pointer << "\n";
    cout << *(pointer+1) << "\n";
    cout << *arr << "\n";
    cout << *(arr + 1) << "\n";

   
    Car* myCar = new Car;
    Car car2 = *myCar;
    cout << "Enter the car make: ";
    getline(cin, myCar->make);

    cout << "Enter the car model: ";
    getline(cin, myCar->model);

    cout << "Enter the car year: ";
    cin >> myCar->year;

    cout << "Car Information:\n";
    cout << "Make: " << myCar->make << "\n";
    cout << "Enter the car make: ";
    cin >> car2.make;
    cout << car2.make << "\n";
    cout << "Make: " << myCar->make << "\n";
    cout << "Model: " << myCar->model << "\n";
    cout << "Year: " << myCar->year << "\n";

    delete myCar;

    return 0;
    */
}
