#include <stdio.h>

int main() {
    int input;
    int sum = 0;

    scanf("%d", &input);

    for(int i = 0; i <= input; i++){
        sum += i;
    }

    printf("%d", sum);

    return 0;
}