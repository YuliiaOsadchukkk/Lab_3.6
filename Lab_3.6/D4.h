//D4.h
#pragma once
#include "D1.h"
#include "D3.h"

class D4 : public D1, public D3 
{
private:
	int d4;

public:
	D4(int d1, int d2, int d3, int d4, int b1, int b2);
	void show_D4();
};



