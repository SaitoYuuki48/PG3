#include<stdio.h>

template <typename Type1, typename Type2>

//�������l��Ԃ�
Type1 Min(Type1 a, Type2 b) {
	if (a < b) {
		return static_cast<Type1> (a);
	}

	if (a > b) {
		return static_cast<Type2> (b);
	}
}

template <>
char Min<char>(char a, char b) {
	return printf("�����ȊO�͑���o���܂���\n");
}

int main() {

	char a = 'A';
	char b = 'B';

	printf("%d\n", Min<int>(12, 10));
	printf("%f\n", Min<float>(12.1f, 10.5f));
	printf("%lf\n", Min<double>(12.1, 10.5));
	printf("\n", Min<char>(a, b));

	return 0;
}