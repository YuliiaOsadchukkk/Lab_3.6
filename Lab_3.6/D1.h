//D1.h
#pragma once
#include "B1.h"
#include <iostream>
#include <Windows.h>

using namespace std;

class D1 : protected B1
{
private:
	int d1;

public:
	D1(int d1, int b1);
	void show_D1();
};


