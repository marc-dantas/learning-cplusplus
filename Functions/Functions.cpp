#include <iostream>

void someFunction() {
	std::cout << "Hello World!" << std::endl;
}

void someFunctionWithArgs(int a, int b) {
	printf("Param 0: %d\nParam 1: %d\n", a, b);
}

int someFunctionWithReturn() {
	return 0;
}

int main() { // Entry point of the program
	printf("--------------------------\n");
	someFunction();
	printf("--------------------------\n");
	someFunctionWithArgs(6, 10);
	printf("--------------------------\n");
	someFunctionWithArgs(8, 17);
	printf("--------------------------\n");
	someFunctionWithArgs(12, 5);
	printf("--------------------------\n");
	printf("Some function with return: %d\n", someFunctionWithReturn());
	printf("--------------------------\n");
	return 0;
}