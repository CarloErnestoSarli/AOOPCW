#include <iostream>
#include <string>

#include "Van.h"

using namespace std;

int main()
{
	//initialise objects Vans
	Van Van1("large", 200, 1.0);
	Van Van2(200, 1.0);
	Van Van3;

	//Print details of initialised objects
	Van1.printDetails();
	Van2.printDetails();
	Van3.printDetails();

	//repeat with pointers
	//create pointers
	Van* vanPtr1;
	Van* vanPtr2;
	Van* vanPtr3;

	//allocate in memory heap
	vanPtr1 = new Van(Van1);
	vanPtr2 = new Van(Van2);
	vanPtr3 = new Van(Van3);

	//assign memory address
	//vanPtr1 = &Van1;
	//vanPtr2 = &Van2;
	//vanPtr3 = &Van3;

	//print with pointers
	vanPtr1 -> printDetails();
	vanPtr2 -> printDetails();
	vanPtr3 -> printDetails();

	//delete pointers
	delete vanPtr1;
	delete vanPtr2;
	delete vanPtr3;

	//Wait for user input to close console
	system("PAUSE");

	return 0;
}