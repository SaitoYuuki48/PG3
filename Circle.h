#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	void Size();

	void Draw();

private:
	//���a
	float radius = 5;
	//����
	float answer = 0;
};

