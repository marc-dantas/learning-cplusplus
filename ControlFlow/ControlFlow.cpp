#include <iostream>

int main() {
    // Control flow
	
    // if statement
	std::cout << "If Statement" << std::endl;
	int a = 5, b = 10;
	if (a > b) {
		printf("a (%d) is greater than b (%d)\n", a, b);
	}
	// else if
	else if (a < b) {
		printf("a (%d) is less than b (%d)\n", a, b);
	}
	// else
	else {
		printf("else branch: a (%d) and b (%d)\n", a, b);
	}
	// While loop
	std::cout << "While Loop" << std::endl;
	int counter = 0;
	while (counter < 10) {
		std::cout << "counter: " << counter << std::endl;
		counter++; // Equivalent to `counter = counter + 1;`
	}
	// For loop
	std::cout << "For Loop" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "i: " << i << std::endl;
	}
}