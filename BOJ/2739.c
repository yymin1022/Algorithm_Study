#include <stdio.h>

int main() {
    int input, i;
    scanf("%d", &input);

    for(i = 1; i <= 9; i++){
        printf("%d * %d = %d\n", input, i, input * i);
    }

    return 0;
}