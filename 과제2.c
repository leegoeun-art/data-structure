
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int length;

    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", input); 

    length = strlen(input);

    printf("�Էµ� ���ڿ���\n");
    printf("\"%s\"\n�Դϴ�.\n", input); 
    printf("\n");
    printf("�Էµ� ���ڿ��� ���� = %d\n", length); 

    return 0;
}



