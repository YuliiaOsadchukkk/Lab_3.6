//D1.cpp
#include "D1.h"

D1::D1(int x, int i)
	: B1(i)
{
	d1 = x;
}

void D1::show_D1()
{
	cout << "class D1:" << endl;
	show_B1();
	cout << "show_D1()" << endl
		<< "D1::d1 = " << d1 << endl << endl;
}
