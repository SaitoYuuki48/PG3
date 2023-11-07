#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	answer = height * width;
}

void Rectangle::Draw()
{
	printf("‹éŒ`‚Ì–ÊÏ = %d\n", answer);
}
