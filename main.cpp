#include<stdio.h>

int Recursive(int n) {
	if (n <= 1) {
		return (1);
	}

	return (n * Recursive(n - 1));
}


int main() {
	int n = 10; //�K�悷��l
	int result; //�v�Z����

	result = Recursive(n);
	printf("%d�̊K�� = %d\n", n, result);

	return 0;
}