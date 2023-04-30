#pragma once

#include <iostream>
#include "Print.h"

using namespace std;

class Vector:public Print
{
	Print** beg;
	int size;
	int cur;
public:
	Vector();
	void print() override;
	void SetVectorSize(int);
	void SetVectorBeg();
	void Add(Print*);
	friend ostream& operator << (ostream&, const Vector&);
	~Vector() {};
};