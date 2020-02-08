#pragma once
template<typename T>
class Vector
{
private:
	T* arrayElems;
	int sz;
public:
	explicit Vector(int s); // constructor
	~Vector(); // destructor

	Vector(const Vector& a); // copy constructor
	Vector& operator=(const Vector& a); // copy assignment

	Vector(Vector&& a); // move constructor
	Vector& operator=(Vector&& a); // move assignment

	T& operator[](int i); // for non const vectors
	const T& operator[](int i) const; // for const vectors
	int size() const;

	T* begin(Vector<T>& x);
	T* end(Vector<T>& x);
};

