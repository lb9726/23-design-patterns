#ifndef __SINGLEON_H__
#define __SINGLEON_H__
#include<iostream>
using namespace std;

class singleton
{
public:
	static singleton* Instance();
	int getnumber() const;
	void setnumber(int num);
protected:
	singleton();
private:
	static singleton* _instance;
    static int a;
};

#endif //__SINGLEON_H__
