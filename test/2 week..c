#include <stdio.h>

int main(void)
{
	char string[3][10] = { "Dreams", "come", "true!" };
	const char *ptr[3] = { "Dreams", "come", "true!" };

	return 0;
}



3.19 화 자료구조 실습 2
#include <stdio.h>

void main() {
	int array[2][3][4];
	int i, j, k, value = 1;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 4; k++) {
				array[i][j][k] = value;
				printf("\n array[%d][%d][%d] = %d", i, j, k, array[i][j][k]);
				value++;
			}
		}
	}
	getchar();
}

자료구조 실습 3

	#include <stdio.h>

void main() {
	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++) {
		printf("\n 학생 %d의 이름 : ", i + 1);
		gets_s(student[i][0]);
		printf(" 학생 %d의 학과 : ", i + 1);
		gets_s(student[i][1]);
		printf(" 학생 %d의 학번 : ", i + 1);
		gets_s(student[i][2]);
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n 학생%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0'; k++) {
				printf("%c", student[i][j][k]);
			}
		}
	}
	getchar();
}

실습 6 구조체 변수 확인하기
	#include <stdio.h>

void main() {

	struct employee {
		char name[10];
		int year;
		int pay;
	};

	struct employee Lee = { "Ann", 2022, 5200 };

	return 0;
}
