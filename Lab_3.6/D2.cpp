//D2.cpp
#include "D2.h"

D2::D2(int x, int i)
	: B1(i)
{
	d2 = x;
}

void D2::show_D2()
{
	cout << "class D2:" << endl;
	show_B1();
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}
