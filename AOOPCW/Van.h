#pragma once
#include <string>

using  namespace std;

class Van
{

private:
	
	string Capacity;
	int RentMin;
	float RentRate;

public:

	Van(); 

	Van(int rentMin, float rentRtae);

	Van(string capacity, int rentMin, float rentRate);

	void setCapacity(string capacity);
	string getCapacity();

	void setRentMin(int rent);
	int getRentMin();

	void setRentRate(float rate);
	float getRentRate();

	void printDetails();

};

