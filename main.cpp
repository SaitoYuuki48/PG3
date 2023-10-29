#include<stdio.h>
#include "Box.h"

int main() {
	Box<int>n1(10, 5);
	Box<float>n2(3.5f, 2.4f);
	Box<double>n3(7.5, 9.9);

	printf("%d\n", n1.Min());
	printf("%f\n", n2.Min());
	printf("%lf\n", n3.Min());

	return 0;
}