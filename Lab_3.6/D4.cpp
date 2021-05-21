// D4.cpp
#include "D4.h"

D4::D4(int x, int y, int z, int m, int i, int j)
	: D1(i, x), D3(j, y, z, x)
{
	d4 = m;
}

void D4::show_D4()
{
	cout << "class D4:" << endl;
	show_D1();
	show_D3();
	cout << "show_D4()" << endl
		<< "D4::d4 = " << d4 << endl << endl;
}

