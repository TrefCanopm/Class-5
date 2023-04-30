#include <iostream>
#include "Print.h"
#include "Vector.h"

using namespace std;

Vector::Vector()
{
	cur = 0;
	size = 0;
	beg = 0;
}

void Vector::print()
{
	cout << " Vector " << endl;
}

void Vector::SetVectorSize(int a)
{
	size = a;
}

void Vector::SetVectorBeg()
{
	beg = new Print * [size];
}

void Vector::Add(Print* p)
{
	if (cur < size)
	{
		beg[cur] = p;
		cur++;
	}
}

ostream& operator<<(ostream& out, const Vector& v)
{
	if (v.size == 0) { out << "" << endl; return out; }
	Print** p = v.beg;
	for (int i = 0; i < v.cur; i++)
	{
		(*p)->print();
		p++;
	}
	return out;
}
