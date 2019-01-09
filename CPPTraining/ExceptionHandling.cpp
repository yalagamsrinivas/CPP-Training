#include <iostream>
#include <exception>

using namespace std;


void XHandler(int nData)
{
	try
	{
		if (nData)
		{
			throw nData;
		}
		else
		{
			throw (double)nData;
		}
	}
	catch (int nTempData)
	{
		cout << "Caught a int exception!!" << endl;

	}
	catch (...)
	{
		cout << "Caught an exception!!" << endl;
		//throw nTempData;
	}
}
class CBase
{
	
};

class CDerived : public CBase
{
	
};

int main()
{

	try
	{
		CDerived Obj;
		throw Obj;
	}
	catch (CDerived ob)
	{
		cout << "Caught an exception of derived class!!" << endl;
	}
	catch (CBase ob)
	{
		cout << "Caught an exception of base class!!" << endl;
		
	}
	/*class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;*/
  /*try
  {
    throw myex;
  }
  catch (exception& e)
  {
    cout << e.what() << '\n';
  }*/

	system("pause");
	return EXIT_SUCCESS;
}