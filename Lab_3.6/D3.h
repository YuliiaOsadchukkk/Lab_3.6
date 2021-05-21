//D3.h
#pragma once
#include "B2.h"
#include "D2.h"

class D3 : protected B2, protected D2
{
private:
	int d3;

public:
	D3(int d3, int b2, int d2, int b1);
	void show_D3();
};


