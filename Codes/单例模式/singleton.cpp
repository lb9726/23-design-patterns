#include "singleton.h"

singleton* singleton:: _instance = NULL;

singleton::singleton()
{
	cout << "*singleton..." << endl;
}

singleton* singleton::Instance()
{
	if (NULL == _instance)
	{
		_instance = new singleton();
	}
	return _instance;
}

int singleton::getnumber() const
{
	return a;
}

void singleton::setnumber(int num)
{
	a = num;
}
	
