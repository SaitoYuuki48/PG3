#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	void Size();

	void Draw();

private:
	//”¼Œa
	float radius = 5;
	//“š‚¦
	float answer = 0;
};

