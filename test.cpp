#include <iostream>


int main(int argc, char **argv) {
	std::cout << "Test print\n";
	std::cout << argc << "\n";
	std::cout << argv[0] << "\n";
	int i{};
	std::cout << i << "\n";
	std::cin >> i; // put input into i
	std::cout << i; // print i
	return 0;
}

