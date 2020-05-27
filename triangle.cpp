#include <iostream>

int main() {
	int row;
	std::cout << "Enter number of rows = " ;
	std::cin >> row;
	for(int i = 0; i <= row; ++i) {
		for(int j = 0; j <= i; ++j) {
			std::cout << " * ";
		}
		std::cout << std::endl;
	}
	for(int i = row; i > 0; i--) {
                for(int j = 0; j < i; ++j) {
                        std::cout << " * ";
                }
		std::cout << std::endl;
	}
	return 0;
}
