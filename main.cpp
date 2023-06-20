#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
	public:
		string brand;
		string model;
		int max_speed;
		void drive()
		{
			cout << "Driving a vehicle!\n";
		}		
};

// Derived classes 
class Car : public Vehicle
{
	public:
		Car(string x, string y, int z) // Constructor fx
		{
			brand = x;
			model = y;
			max_speed = z;
		}
		void drive() // Polymorphism
		{
			cout << "Driving a car!\n"; 
		}
};

class Bike : public Vehicle
{
	public:
		Bike(string x, string y, int z)
		{
			brand = x;
			model = y;
			max_speed = z;
		}
		void drive()
		{
			cout << "Riding a bike!\n";
		}
};


int main() 
{
	Car my_car("Tesla", "Model 3", 162);
	Bike my_bike("Aventon", "PACE 500", 31);
	
	cout << my_car.brand << " " << my_car.model << " " << my_car.max_speed << endl;
	my_car.drive();
	cout << my_bike.brand << " " << my_bike.model << " " << my_bike.max_speed << endl;
	my_bike.drive();
	
	return 0;
}
