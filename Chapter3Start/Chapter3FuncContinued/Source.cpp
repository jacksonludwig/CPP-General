#include <string>
#include <istream>
#include <iostream>

struct Entry
{
	std::string name;
	int value;
};

Entry read_entry(std::istream& is) {
	std::string s;
	int i;
	is >> s >> i;
	return { s, i };
}

int main() {
	auto e = read_entry(std::cin);
	std::cout << "{" << e.name << ", " << e.value << "}\n";
	int n;
	int v;
	auto [n,v] = read_entry(std::cin); // structured binding
	return 0;
}
