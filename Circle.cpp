#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	answer = radius * radius * 3.14;
}

void Circle::Draw()
{
	printf("ƒT[ƒNƒ‹‚Ì–ÊÏ = %f\n", answer);
}
