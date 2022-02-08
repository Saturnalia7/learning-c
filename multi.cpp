#include <iostream>

int main(){
	std::cout << "Enter an int: ";
	int i{};
	std::cin >> i;

	std::cout << "Double that int is: " <<  i * 2 << "\n";

	std::cout << "Triple that int is: " << i * 3;
	return 0;
}