#include <iostream>

int i{ 5 };

int main(int argc, char **argv) {
	std::cout << "Test print\n";
	std::cout << argc << "\n";
	std::cout << argv[0] << "\n";
	std::cout << i << "\n";
	std::cin >> i; // put input into i
	std::cout << i; // print i
	return 0;
}

