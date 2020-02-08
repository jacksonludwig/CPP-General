#include "Vector.h"

template<typename T>
Vector<T>::Vector(int s) {
	if (s < 0) {
		throw Negative_size{};
	}
	arrayElems = new T[s];
	sz = s;
}

template<typename T>
Vector<T>::~Vector() {
	delete[] arrayElems;
}

template<typename T>
Vector<T>::Vector(const Vector& a) {
	arrayElems = new T[a.sz];
	sz = a.sz;
	for (int i = 0; i < sz; i++) {
		arrayElems[i] = a.arrayElems[i];
	}
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
	if (i < 0 || size() <= i) {
		throw out_of_range{ "Vector::operator[]" };
	}
	return elem[i];
}

template<typename T>
int Vector<T>::size() const
{
	return sz;
}

template<typename T>
T* begin(Vector<T>& x) {
	return x.size() ? &x[0] : nullptr; //pointer to first element or nullptr
}

template<typename T>
T* end(Vector<T>& x) {
	return x.size() ? &x[0] + x.size(): nullptr; //pointer to one-past-last element or nullptr
}

