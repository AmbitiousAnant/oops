#include <iostream>
using namespace std;

class Distance
{
	int metres;

public:
	Distance(int value)
	{
		metres = value;
	}

	operator int() const
	{
		return metres;
	}
};

int main()
{
	int value = 25;
	Distance distance = value;
	int convertedMetres = distance;

	cout << "Distance: " << convertedMetres << " metres" << endl;

	return 0;
}
