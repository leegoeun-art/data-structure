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



test. 탈출조건과 실행되는 조건에다가 블랭크를 걸어서 어떤게 들어가야되는지 쓰세요 고ㅡ르세요.

break point 걸어서 f11 f10 한번씩 올려놓고
조사식에 올려놓고 어느 순간에 바뀌는지 보ㅕㅁㄴ 
recursive call 이 어떻게 동작되는지 볼수잇음.



과제 4 ---------------------------
	#include <stdio.h>

long int fact(int);

void main() {
	int n, result;
	printf("\n 정수를 입력하세요: ");
	scanf("%d", &n);
	result = fact(n);
	printf("\n\n %d 팩토리얼 값은 %ld입니다.\n", n, result);
	getchar(); getchar();
}

long int fact(int n) {
	int value;
	if (n <= 1) 
		printf("\n fact(1) 함수 호출!");
		printf("\n fact(1) 값 1 반환!");
		return 1;
	}
	else {
		printf("\n fact(%d) 함수 호출!", n);
		value = (n * fact(n - 1));
		printf("\n fact(1) 함수 호출!");
		return value;
	}
}

	
