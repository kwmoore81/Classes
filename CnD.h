#pragma once
class vec2;

vec2 operator+(const vec2 &lhs, const vec2 &rhs);
vec2 operator-(const vec2 &lhs, const vec2 &rhs);


class vec2
{
public:
	int x, y;
	vec2() : x(0), y(0) {}
	vec2(float m_x, float m_y) :x(m_x), y(m_y) {}

	void setX(float a_x);
	float getX();
	void setY(float a_y);
	float getY();

	vec2 &operator-=(const vec2 &lhs) { return *this = *this - lhs;}
	vec2 &operator+=(const vec2 &lhs) { return *this = *this + lhs;}
	
	bool operator==(const vec2 &lhs)  { return x == lhs.x && y == lhs.y; }
};

