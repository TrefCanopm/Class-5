#pragma once

#include <iostream>
#include "Print.h"

using namespace std;

class Triad:public Print
{
protected:
	int first;
	int second;
	int third;
public:
	void print() override;

	Triad();
	Triad(int first, int second, int third);
	Triad(const Triad&);

	void setFirst(int f);
	void setSecond(int s);
	void setThird(int t);
	void setTriad(int f, int s, int t);

	friend std::istream& operator >> (std::istream& in, Triad&);

	void plus();

	~Triad() {};
};