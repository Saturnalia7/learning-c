#include <iostream>

int i{ 5 };

int main(int argc, char **argv) {
	std::cout << "Test print\n";
	std::cout << argc << std::endl;
	std::cout << argv[0] << std::endl;
	std::cout << i;
	return 0;
}

