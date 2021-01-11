#include <iostream>
#include <string>
using namespace std;

class Country {
public:
	Country(string Capital, double Population, double Area) {
		this->Population = Population;
		this->Area = Area;		
		this->Capital = Capital;
	}
	Country(string Capital) : Country(Capital, 0, 0) {}

	void set_population(double Population) {
		this->Population = Population;
	}
	void set_area(double Area) {
		this->Area = Area;
	}
	double get_population() {
		return this->Population;
	}
	double get_area() {
		return this->Area;
	}
	string get_capital() {
		return this->Capital;
	}
private:
	string Capital;
	double Population;
	double Area;
};

int main() {
	Country Russia("Moscow");
	Russia.set_population(146.74);
	Russia.set_area(17.125);
	Country Finland("Helsinki");
	Finland.set_population(5.571);
	Finland.set_area(0.338);
	Country Brazil("Brasilia");
	Brazil.set_population(210.147);
	Brazil.set_area(8.515);
	
	cout << "Russia:\n" << "\tCapital: " << Russia.get_capital() << "\n\tPopulation: " << Russia.get_population()<< " million" << "\n\tArea: " << Russia.get_area() << " million km^2" << endl;
	cout << "Finland:\n" << "\tCapital: " << Finland.get_capital() << "\n\tPopulation: " << Finland.get_population() << " million" << "\n\tArea: " << Finland.get_area() << " million km^2" << endl;
	cout << "Brazil:\n" << "\tCapital: " << Brazil.get_capital() << "\n\tPopulation: " << Brazil.get_population() << " million" << "\n\tArea: " << Brazil.get_area() << " million km^2" << endl;
	
	return 0;

}