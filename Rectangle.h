#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	void Size();

	void Draw();

private:
	//c
	int height = 5;
	//‰¡
	int width = 10;

	//“š‚¦
	int answer = 0;
};

