#include<stdio.h>

int Recursive(int n, int o, int p) {
	if (n <= 0) {
		return o;
	}
	return Recursive(n - 1, o += p, p * 2 - 50);
}

int main() {
	int n = 3;  //ŠKæ‚·‚é’lA“­‚¢‚½ŽžŠÔ
	int o = 0;
	int p = 100; //Å‰‚ÌŽž‹‹
	int normal = 1072;

	int result;
	result = Recursive(n, o, p);

	printf("Ä‹A“I‚È’À‹à‘ÌŒn %d\n", result);
	printf("3ŽžŠÔ“­‚¢‚½ˆê”Ê’À‹à‘ÌŒn %d\n", normal * n);

	return 0;
}