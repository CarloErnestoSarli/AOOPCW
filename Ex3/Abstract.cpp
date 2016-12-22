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
	virtual void print() = 0;
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

	ManVanIn(string driverName, long int dlNo, string capacity, int rentMin, float rentRate)
	{
		DriverName = driverName;
		DLno = dlNo;
		VanIn(capacity, rentMin, rentRate);

	}

	void print()
	{
		cout << "Driver Name: " << DriverName << "License Number: " << DLno << endl;
		VanIn::print();
	}

	ManVanIn operator=(ManVanIn &vi) 
	{
		return true;
	}

};

int main()
{
	AbstractVan *vanPtr1 = new VanIn("large", 200, 1.0);
	vanPtr1->print();
	delete vanPtr1;

	ManVanIn* vanPtr2 = new ManVanIn("Abc", 999, "medium", 100, 1.0);
	vanPtr2->print();

	VanIn Van7("Large", 200, 2.0);
	ManVanIn ManVan8("ABC", 99999, "Medium", 100, 1.0);
	ManVan8 = Van7;
	ManVan8.print();

	/*
	VanIn Van1("large", 200, 1.0);
	AbstractVan *vanPtr1 = &Van1;
	vanPtr1->print();
	*/

	system("PAUSE");

	return 0;

	//Smart pointers differ from normal pointers because they offer "automated" memory managing

}