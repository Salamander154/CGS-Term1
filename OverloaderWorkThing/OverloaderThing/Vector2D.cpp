#include "Vector2D.h"

Vector2D::Vector2D() : X(0), Y(0) {}

Vector2D::Vector2D(float inX, float inY) : X(inX), Y(inY) {}

Vector2D::~Vector2D() {}

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Vector2D(X + other.X, Y + other.Y);
}
ostream& operator<<(ostream& left, const Vector2D& right)
{
	left << "(" << right.X <<"," << right.Y << ")";
    return left;
}

Vector2D Vector2D::add(const Vector2D& other) const {
    return Vector2D(X + other.X, Y + other.Y);
}
