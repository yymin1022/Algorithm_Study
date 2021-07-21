#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    for(int i = input; i > 0; i--){
        for(int j = 0; j < i - 1; j++){
            printf(" ");
        }
        for(int k = 0; k < input - i + 1; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}