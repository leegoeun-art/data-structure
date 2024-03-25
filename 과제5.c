#include <stdio.h>

void hanoi(int n, char start, char end, char auxiliary) {
    if (n == 1) {
        printf("%c에서 원반 1을 %c로 옮김\n", start, end);
    }
    else {
        hanoi(n - 1, start, auxiliary, end);
        printf("%c에서 원반 %d을 %c로 옮김\n", start, n, end);
        hanoi(n - 1, auxiliary, end, start);
    }
}

int main() {
    int n = 3; 
    char start = 'A', end = 'C', auxiliary = 'B'; 

    hanoi(n, start, end, auxiliary);

    return 0;
}
