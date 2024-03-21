
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int length;

    printf("문자열을 입력하세요: ");
    scanf("%s", input); 

    length = strlen(input);

    printf("입력된 문자열은\n");
    printf("\"%s\"\n입니다.\n", input); 
    printf("\n");
    printf("입력된 문자열의 길이 = %d\n", length); 

    return 0;
}



