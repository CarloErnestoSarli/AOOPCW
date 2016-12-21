#include "Van.h"
#include <iostream>

//Accessors Methods
void Van::setCapacity(string capacity) {
	string Capacity = capacity;
}

string Van::getCapacity() {
	return Capacity;
}

void Van::setRentMin(int rent) {
	RentMin = rent;
}

int Van::getRentMin() {
	return RentMin;
}

void Van::setRentRate(float rent) {
	RentRate = rent;
}

float Van::getRentRate() {
	return RentRate;
}

//Constructors 
Van::Van()
{
}

Van::Van(int rentMin, float rentRate)
{
	RentMin = rentMin;
	RentRate = rentRate;
}

Van::Van(string capacity, int rentMin, float rentRate)
{
	Capacity = capacity;
	RentMin = rentMin;
	RentRate = rentRate;
}

//Print the details of the van object
void Van::printDetails()
{
	cout << "Capacity: " << Capacity <<  endl << "Minimum Rent: " << RentMin << endl << "Rent Rate: " << RentRate << endl ;
}


