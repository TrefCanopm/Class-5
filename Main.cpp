#include <iostream>
#include "Triad.h"
#include "Data.h"
#include "Print.h"
#include "Vector.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");

	Data d;
	Triad t;

	/*bool f = 1;
	int n, x, y, z;
	while (f)
	{
		cout << "��������� ������� Triad" << endl;
		cout << "1) �������� ���� first" << endl;
		cout << "2) �������� ���� second" << endl;
		cout << "3) �������� ���� third" << endl;
		cout << "4) �������� ��� ��� ����" << endl;
		cout << "5) �� ���� �� ��������" << endl;
		cout << "" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			cout << "������� ����� �� ������� ����������� �������� ������ �������� ����" << endl;
			cin >> x;
			t.setFirst(x);
		}
		case 2:
		{
			cout << "������� ����� �� ������� ����������� �������� ������ �������� ����" << endl;
			cin >> x;
			t.setSecond(x);
		}
		case 3:
		{
			cout << "������� ����� �� ������� ����������� �������� ������ �������� ����" << endl;
			cin >> x;
			t.setThird(x);
		}
		case 4:
		{
			cout << "������� ����� �� ������� ����������� �������� ������ � ���� first" << endl;
			cin >> x;
			cout << "������� ����� �� ������� ����������� �������� ������ � ���� second" << endl;
			cin >> y;
			cout << "������� ����� �� ������� ����������� �������� ������ � ���� third" << endl;
			cin >> z;
			t.setTriad(x, y, z);
		}
		case 5:
		{
			f = 0;
		}
		}
	}
	t.print();
	d.plus();
	d.print();
	cout << "������� ���� ���������� ���������" << endl;
	cin >> x;
	d.plusD(x);
	d.print();*/
	Vector v;
	v.SetVectorSize(5);
	v.SetVectorBeg();
	Print* p = &t;
	v.Add(p);
	p = &d;
	v.Add(p);
	Triad l;
	p = &l;
	v.Add(p);
	cout << v;
}