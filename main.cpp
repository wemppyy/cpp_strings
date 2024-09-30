#include <iostream>

template <typename T>
T sum(T a, T b) {
	return a + b;
}


int main() {
	
	std::cout << sum(1, 2) << std::endl;

	return 0;
}