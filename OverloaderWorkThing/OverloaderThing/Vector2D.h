#pragma once
#include <string>
#include <iostream>

using namespace std;

class Vector2D 
{
    float X;
    float Y;
public:
    Vector2D();
    Vector2D(float inX, float inY);
    ~Vector2D();

    Vector2D operator+(const Vector2D& other) const;
    friend ostream& operator<<(ostream& left, const Vector2D& right);
    Vector2D add(const Vector2D& other) const;
};