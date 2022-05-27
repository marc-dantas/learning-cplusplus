#include <iostream>

int main() {
    // Variables
    
	// Integer variable
    int ivalue = 10;
	
	// Float variable
	float fvalue = 10.5;
	
	// Double variable
	double dvalue = 3452866735979.5666666666666666666666666;
	
	// Character variable
	char cvalue = 'A';
	
	// String variable
	std::string svalue = "Hello";
	
	// Boolean variable
	bool bvalue = true;
	
	
	// Pointers
	
	// * is the "pointer operator", & is the "address operator"
	int *pvalue = &ivalue;
	
	// Pointer to a pointer
	int **ppvalue = &pvalue;
	
	
	// Printing
	std::cout << "(ivalue) Integer: " << ivalue << std::endl;
	std::cout << "(fvalue) Float: " << fvalue << std::endl;
	std::cout << "(dvalue) Double: " << dvalue << std::endl;
	std::cout << "(cvalue) Character: " << cvalue << std::endl;
	std::cout << "(svalue) String: " << svalue << std::endl;
	std::cout << "(bvalue) Boolean: " << bvalue << std::endl;
	std::cout << "(pvalue) Pointer: " << pvalue << std::endl;
	std::cout << "(*pvalue) Value that the pointer is pointing: " << *pvalue << std::endl;
	std::cout << "(&pvalue or pvalue) The address of the pointer: " << &pvalue << std::endl;
	std::cout << "(&*pvalue) The address of the value that the pointer is pointing: " << &*pvalue << std::endl;
	std::cout << "(ppvalue) Pointer to a pointer: " << ppvalue << std::endl;
	std::cout << "(*ppvalue) Value that the pointer to a pointer is pointing: " << *ppvalue << std::endl;
	std::cout << "(**ppvalue) The value of the pointer that the pointer to a pointer is pointing: " << **ppvalue << std::endl;
	std::cout << "(&**ppvalue) The address of the value of the pointer that the pointer to a pointer is pointing: " << &**ppvalue << std::endl;
}