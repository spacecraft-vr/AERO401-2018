
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

// Main function, one of these per program
int main()
{
	// Declaration of variables 
	string make, model, fuel_type;
	int    year;

	// Assignment of variables
	make = "Chevrolet";
	model = "Camaro";
	fuel_type = "gasoline";
	year = 1990;

	// Declaration of camaro of type Car
	Car camaro(make, model, year, fuel_type, 4, 1, 3405, false);
	
	// Assignment of class variables outside the scope of the class
	camaro.Set_Color("black");
	camaro.miles_travelled = 315.6;		//miles
	camaro.fuel_used = 22.4;			//gallons

	// Showing how to access class variables and functions
	cout << "The color of the car is: " << camaro.color << endl;
	cout << "The fuel mileage is: " << camaro.Fuel_Mileage() << endl;

	// Using basic if loop for assignment
	string inspace;
	if (camaro.in_space) {
		inspace = "in space";
	}
	else {
		inspace = "not in space";
	}

	// Showing how to output to the "console"
	cout << "The car is " << inspace << "!" << endl;

	// Creating a pointer to the camaro
	Car* mycar = &camaro;

	// Accessing pointer values
	cout << "My car has an mpg of: " << mycar->Fuel_Mileage() << endl;

	// Showing how changing the pointer, changes the pointed to class
	mycar->miles_travelled = 200;

	cout << "Now my car has an mpg of: " << mycar->Fuel_Mileage() << endl;
	cout << "Camaro also has an mpg of: " << camaro.Fuel_Mileage() << endl;

	// Creating a new instance of Car
	Car mynewcar = camaro;
	mynewcar.color = "red";
	
	// Changing the new car does not affect the camaro
	cout << "My new car is: " << mynewcar.color << endl;
	cout << "The camaro's color is: " << camaro.color << endl;

	// Ending the function
    return 0;
}

