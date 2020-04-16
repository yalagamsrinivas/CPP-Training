#include <iostream>

using namespace std;

class Box
{
private:
	double width;
	double setWidth(double wid);


public:

	double getWidth(double wid);
};

// Member functions definitions
double Box::getWidth(double wid)
{
	//Box B;
	//B.setWidth(12.0);
	return Box::setWidth(11.0);

	/* double length;
	length= setWidth(wid );
	return length;*/
}

double Box::setWidth(double wid)
{
	width = wid;
	return width;
}

// Main function for the program
int main()
{
	Box box;


	//box.getWidth(10.0);  // Use member function to set it.
	cout << "Width of box : " << box.getWidth(10.0) << endl;

	return 0;
}