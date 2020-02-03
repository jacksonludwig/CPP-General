// classes with at least one pure virtual is an abstract class
class Container {
public:
	virtual double& operator[](int) = 0; // "=0" means pure virtual and must be overwritten
	virtual int size() const = 0; // "=0" means pure virtual and must be overwritten, const member.
	virtual ~Container() {} // destructor
};

// no constructor