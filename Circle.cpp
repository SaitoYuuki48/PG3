#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	answer = radius * radius * 3.14;
}

void Circle::Draw()
{
	printf("�T�[�N���̖ʐ� = %f\n", answer);
}
