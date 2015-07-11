#include "Vector3.h"
#include <assert.h>
#include <cmath>

//Addition
Vector3 Vector3::operator+(const Vector3& p_v) const  
{
	return Vector3(	x + p_v.x, 
					y + p_v.y,
					z + p_v.z);
}

Vector3& Vector3::operator+=(const Vector3& p_v)
{
	x += p_v.x;
	y += p_v.y;
	z += p_v.z;

	return *this;
}

//Subtraction
Vector3 Vector3::operator-(const Vector3& p_v) const
{
	return Vector3(x - p_v.x,
				   y - p_v.y,
				   z - p_v.z);
}

Vector3& Vector3::operator-=(const Vector3& p_v)
{
	x -= p_v.x;
	y -= p_v.y;
	z -= p_v.z;

	return *this;
}

//Scaling
Vector3 Vector3::operator*(float p_f) const
{
	return Vector3(p_f * x, p_f * y, p_f * z);
}

Vector3& Vector3::operator*=(float p_f)
{
	x *= p_f;
	y *= p_f;
	z *= p_f;
	return *this;
}

inline Vector3 operator*(float p_f, const Vector3& p_v)
{
	return p_v * p_f;
}

//Division
Vector3 Vector3::operator/(float p_f) const
{
	assert(p_f != 0);
	float inv = 1.0f / p_f;
	return Vector3(x * inv, y * inv, z * inv);
}

Vector3& Vector3::operator/=(float p_f)
{
	assert(p_f != 0);
	float inv = 1.0f / p_f;
	x *= inv;
	y *= inv;
	z *= inv;
	return *this;
}

inline Vector3 operator*(float p_f, const Vector3& p_v)
{
	return p_v / p_f;
}

//Unary Negation
Vector3 Vector3::operator-() const
{
	return Vector3(-x, -y, -z);
}

//Component Access
float Vector3::operator[](int p_i) const
{
	assert(p_i >= 0 && p_i <= 2);
	return (&x)[p_i];
}

float& Vector3::operator[](int p_i)
{
	assert(p_i >= 0 && p_i <= 2);
	return (&x)[p_i];
}

//Dot Product
inline float Dot(const Vector3& p_v1, const Vector3& p_v2)
{
	return	p_v1.x * p_v2.x + 
			p_v1.y * p_v2.y + 
			p_v1.z * p_v2.z;
}

inline float AbsDot(const Vector3& p_v1, const Vector3& p_v2)
{
	return fabsf(Dot(p_v1, p_v2));
}