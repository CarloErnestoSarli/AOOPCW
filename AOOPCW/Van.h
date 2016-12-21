
#include <string>
using  namespace std;

class Van
{

private:
	typedef struct 
	{
		string large, medium, small;
	}Capacity;

	int RentMin;
	float RentRate;

public:
	Van();
	~Van();

	void setCapacity(Capacity capacity);
	Capacity getCapacity();

	void setRentMin(int rent);
	int getRentMin();

	void setRentRate(float rate);
	float getRentRate();


};

Van::Van()
{
}

Van::~Van()
{
}
