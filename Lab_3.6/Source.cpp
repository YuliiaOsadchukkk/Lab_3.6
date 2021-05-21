//Source.cpp
#include "D4.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	B1 o1(777);
	cout << "B1 o1(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "�������� ����� B1: " << endl;
	o1.show_B1();
	cout << "------------------------------------------" << endl << endl;


	B2 o2(888);
	cout << "B2 o2(888);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "�������� ����� B2: " << endl;
	o2.show_B2();
	cout << "------------------------------------------" << endl << endl;


	D1 n1(1000, 2000);
	cout << "D1 n1(1000, 2000);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "�������� ����� D1: " << endl;
	n1.show_D1();
	cout << "------------------------------------------" << endl << endl;


	D2 n2(10, 20);
	cout << "D2 n2(10, 20);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "�������� ����� D2: " << endl;
	n2.show_D2();
	cout << "------------------------------------------" << endl << endl;


	D3 n3(100, 200, 300, 400);
	cout << "D3 n3(100, 200, 300, 400);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "�������� ����� D3: " << endl;
	n3.show_D3();
	cout << "------------------------------------------" << endl << endl;


	D4 n4(1, 2, 3, 4, 5, 6);
	cout << "D4 n4(1, 2, 3, 4, 5, 6);" << endl;
	cout << "sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << "�������� ����� D4: " << endl;
	n4.show_D4();
	cout << "------------------------------------------" << endl << endl;
}

