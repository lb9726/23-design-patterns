#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

class Shape
{
	public:
		virtual void display()
		{
			cout << "is Shape" << endl;
		}
};

class XCircle
{
	public :
		void DisplayIt()
		{
			cout << "is XCircle" << endl;
		}
};

class point:public Shape
{
};

class Rectangle:public Shape
{
};

class line:public Shape
{
};

class Circle:public Shape 
{
	private:
		XCircle m_circle;
	public:
		void display()
		{
			m_circle.DisplayIt();
		}
};

class Factory
{
	public:
		Shape * getShapeInstance (int type)
		{
			switch(type)
			 {
				case 0:  return new point;
				case 1:  return new Rectangle;
				case 2:  return new line;
				case 3:  return new Circle;
				default:  return NULL;
			}
		}
};

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "error parameters!" <<endl;
		return  -1;
	}
	int type = atoi(argv[1]);
	Factory factory;
	Shape *s;
	s = factory.getShapeInstance(type);
	if (NULL == s)
	{
		cout << "Eorror get the instance !" << endl;
		return  -2;
	}
	s->display();
	delete s;
	return 0 ;
}
