#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	answer = height * width;
}

void Rectangle::Draw()
{
	printf("��`�̖ʐ� = %d\n", answer);
}
