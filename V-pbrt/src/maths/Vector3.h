#pragma once

class Vector3
{
	public:
		//Constructors
		Vector3() : 
				x(0.0f), y(0.0f), z(0.0f) {}
		Vector3(float p_x, float p_y, float p_z) :
				x(p_x), y(p_y), z(p_z) {}

		//Addition
		Vector3 operator+(const Vector3& p_v) const;
		Vector3& operator+=(const Vector3& p_v);

		//Subtraction
		Vector3 operator-(const Vector3& p_v) const;
		Vector3& operator-=(const Vector3& p_v);

		//Scaling
		Vector3 operator*(float p_f) const;
		Vector3& operator*=(float p_f);

		//Division
		Vector3 operator/(float p_f) const;
		Vector3& operator/=(float p_f);

		//Unary Negation
		Vector3 operator-() const;

		//Component Access
		float operator[](int p_i) const;
		float& operator[](int p_i);

		//Public member data
		float x, y, z;
};

//Geometrical Scaling
inline Vector3 operator*(float p_f, const Vector3& p_v);

//Geometrical Dividing
inline Vector3 operator/(float p_f, const Vector3& p_v);

//Dot Product
inline float Dot(const Vector3& p_v1, const Vector3& p_v2);
inline float AbsDot(const Vector3& p_v1, const Vector3& p_v2);

//Cross Product
inline Vector3 Cross(const Vector3& p_v1, const Vector3 p_v2);

