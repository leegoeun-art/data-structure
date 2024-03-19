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
