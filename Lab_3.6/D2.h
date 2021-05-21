//D2.h
#pragma once
#include "B1.h"
#include <iostream>
#include <Windows.h>

using namespace std;

class D2 : public B1
{
private:
	int d2;

public:
	D2(int d2, int b1);
	void show_D2();
};

