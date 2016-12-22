#include <iostream>
#include <string>

using namespace std;

class AbstractVan 
{
public:
	AbstractVan() 
	{
	}

	virtual ~AbstractVan()
	{

	}
	virtual void print()=0;
};

class VanIn : public AbstractVan
{
public:
	VanIn()
	{
		Capacity = "small";
		RentMin = 100;
		RentRate = 2.0;

	}

	VanIn(int rentMin, float rentRate)
	{
		RentMin = rentMin;
		RentRate = rentRate;
	}

	VanIn(string capacity, int rentMin, float rentRate)
	{
		Capacity = capacity;
		RentMin = rentMin;
		RentRate = rentRate;
	}

	void print()
	{
		cout << "Capacity: " << Capacity << endl << "Minimum Rent: " << RentMin << endl << "Rent Rate: " << RentRate << endl;
	}
private:
	string Capacity;
	int RentMin;
	float RentRate;
};

class ManVanIn : public VanIn 
{
private:
	string DriverName;
	long int DLno;

public:
	ManVanIn()
	{
		DriverName = "john";
		DLno = 000;
	}

	ManVanIn(string driverName, long int dlNo)
	{
		DriverName = driverName;
		DLno = dlNo;
	}
	ManVanIn(long int dlNo, string driverName)
	{
		DriverName = driverName;
		DLno = dlNo;
	}
	ManVanIn(string driverName)
	{
		DriverName = driverName;
	}
	ManVanIn(long int dlNo)
	{
		DLno = dlNo;
	}

	ManVanIn(string driverName, long int dlNo, string capacity, int rentMin, float rentRate) : VanIn(capacity, rentMin, rentRate)
	{
		DriverName = driverName;
		DLno = dlNo;
		//VanIn::VanIn(capacity, rentMin, rentRate);

	}

	void print()
	{
		cout << "Driver Name: " << DriverName << endl << "License Number: " << DLno << endl;
		VanIn::print();
	}

};

int main()
{
	AbstractVan *vanPtr1 = new VanIn("large", 200, 1.0);
	vanPtr1->print();
	delete vanPtr1;

	ManVanIn* vanPtr2 = new ManVanIn("Abc", 999, "medium",100, 1.0);
	vanPtr2->print();
	
	
	
	/*
	VanIn Van1("large", 200, 1.0);
	AbstractVan *vanPtr1 = &Van1;
	vanPtr1->print();
	*/
	
	system("PAUSE");

	return 0;

}