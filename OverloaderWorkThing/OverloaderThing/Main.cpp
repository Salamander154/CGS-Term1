#include <iostream>
#include "Vector2D.h"
using namespace std;

int main() 
{
    Vector2D vec1(5.4f, 17.9f);
    Vector2D vec2(111.7f, 45.0f);

    cout << "ResultA (using operator+): " << (vec1 + vec2) << "\n";
    cout << "ResultB (using add method): " << vec1.add(vec2) << "\n";
}
