#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*, int*);

void DispResult(int* dice, int* num) {
	if (*dice == 0) {
		if (*num == 0) {
			printf("��!�@������!\n");
		}
		else {
			printf("��!�@�c�O...\n");
		}
	}

	if (*dice == 1) {
		if (*num == 1) {
			printf("��!�@������!\n");
		}
		else {
			printf("��!�@�c�O...\n");
		}
	}
	
}

void setTimeout(PFunc p, int second, int select, int num) {
	Sleep(second * 1000);

	p(&select, &num);
}

int main() {

	unsigned int  currentTime = time(nullptr);
	srand(currentTime);

	PFunc p;

	int r = rand();
	int dice;
	int number = 0;
	
	printf("��(0)����(1)��I��ł�������\n");
	scanf_s("%d", &number);
	printf("�I�񂾐��� : %d\n", number);

	dice = r % 2 + 0;

	p = DispResult;
	setTimeout(p, 3, number, dice);

	return 0;
}