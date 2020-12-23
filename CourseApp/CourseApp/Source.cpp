#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
	Car()
	{
		set_name();
		set_speed();
	}
	~Car()
	{

	}
	void get_info()
	{
		get_name();
		get_speed();
	}
private:
	double speed;
	string name;
	void set_name()
	{
		cout << " Enter name : "; cin >> name;
	}
	void set_speed()
	{
		cout << " Enter speed : "; cin >> speed;
		while (speed < 0)
		{
			cout << " Enter speed : "; cin >> speed;
		}
	}
	void get_name()
	{
		cout << " Car name is : " << name << endl;
	}
	void get_speed()
	{
		cout << " Car speed is : " << speed << " km/h" << endl;
	}
};

int main()
{
	Car car;
	car.get_info();
	return 0;
}