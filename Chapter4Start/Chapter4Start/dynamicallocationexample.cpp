class Vector {
public:
	Vector(int s) :elem{ new double[s] }, sz{ s } {
		for (int i = 0; i != s; i++) {
			elem[i] = 0;
		}
	}

	~Vector() {
		delete[] elem;
	}

	double& operator[](int i);
	int size() const;
private:
	double* elem;
	int sz;
};


int main() {
	Vector v(5);
	return 0;
}