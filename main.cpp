#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <functional>

int main() {

	unsigned int  currentTime = time(nullptr);
	srand(currentTime);

	int r = rand();
	int dice = r % 2 + 0;
	int number = 0;

	printf("��(0)����(1)��I��ł�������\n");
	scanf_s("%d", &number);
	printf("�I�񂾐��� : %d\n", number);

	std::function<void(void)> dispResult = [=]() {
		if (dice == 0) {
			if (number == 0) {
				printf("��!�@������!\n");
			}
			else {
				printf("��!�@�c�O...\n");
			}
		}

		if (dice == 1) {
			if (number == 1) {
				printf("��!�@������!\n");
			}
			else {
				printf("��!�@�c�O...\n");
			}
		}
	};

	std::function<void(int)> setTimeout = [=](int second) {

		Sleep(second * 1000);

		dispResult();
	};

	setTimeout(3);

	return 0;
}