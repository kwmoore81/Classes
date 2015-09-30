#include "CnD.h"

vec2 operator+(const vec2 &lhs, const vec2 &rhs)
{
	return vec2(lhs.x + rhs.x, lhs.y + rhs.y);
}

vec2 operator-(const vec2 &lhs, const vec2 &rhs)
{
	return vec2(lhs.x - rhs.x, lhs.y - rhs.y);
}
vec2 operator==(const vec2 &lhs, const vec2 &rhs)
{
	return vec2(lhs.x == rhs.x, lhs.y == rhs.y);
}

void vec2::setX(float a_x)
{

	x = a_x;

}

float vec2::getX()
{
	return x;
}

void vec2::setY(float a_y)
{

	y = a_y;

}

float vec2::getY()
{
	return y;
}