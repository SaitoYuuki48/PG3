#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	answer = radius * radius * 3.14;
}

void Circle::Draw()
{
	printf("サークルの面積 = %f\n", answer);
}
