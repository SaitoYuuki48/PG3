#include<stdio.h>

int Recursive(int n, int o, int p) {
	if (n <= 0) {
		return o;
	}
	return Recursive(n - 1, o += p, p * 2 - 50);
}

int main() {
	int n = 8;  //�K�悷��l�A����������
	int o = 0;
	int p = 100; //�ŏ��̎���
	int normal = 1072;

	int result;
	result = Recursive(n, o, p);

	printf("%d���ԓ������ċA�I�Ȓ����̌n %d\n", n, result);
	printf("%d���ԓ�������ʒ����̌n %d\n", n, normal * n);

	return 0;
}