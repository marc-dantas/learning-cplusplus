#include <iostream>

class Car {
public:
	int year;
	std::string model;
	
	Car(int year, std::string model) { // default constructor
		this->year = year;
		this->model = model;
	};
	
	void printValues() {
		int y = this->getYear();
		std::string m = this->getModel();
		std::cout << "<Car>.year: " << y << std::endl;
		std::cout << "<Car>.model: " << m << std::endl;
	}
private:
	int getYear() {
		return this->year;
	};

	std::string getModel() {
		return this->model;
	};
};

int main() {
	Car roadster(2008, "Tesla Roadster");
	Car fit(2016, "Honda Fit");
	std::cout << "----------------------" << std::endl;
	roadster.printValues();
	std::cout << "----------------------" << std::endl;
	fit.printValues();
	std::cout << "----------------------" << std::endl;
	return 0;
}