#include<stdio.h>

template <typename Type1, typename Type2>

Type1 Min(Type1 a, Type2 b) {
	if (a < b) {
		return a;
	}

	if (a > b) {
		return b;
	}
}

int main() {


	printf("%d\n", Min<float, int>(12.1f, 11));

	//printf("�����ȊO�͑���o���܂���\n");

	return 0;
}