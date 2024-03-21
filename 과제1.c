#include <stdio.h>

int main(void)
{
    char* ptr[4] = { "Korea", "Seoul", "Mapo", "152번지2/3" };
    char* ptr_2[4] = { "Korea", "Seoul", "Jongno", "152번지2/3" };

    printf("%s\n%s\n%s\n%s\n", ptr[0], ptr[1], ptr[2], ptr[3]);
    printf("\n");
    printf("\n");
    printf("%s\n%s\n%s\n%s\n", ptr_2[0], ptr_2[1], ptr_2[2], ptr_2[3]);

    return 0;
}