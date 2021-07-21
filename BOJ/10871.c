#include <stdio.h>

int main(){
    int N, X;
    scanf("%d %d", &N, &X);
    
    for(int i = 0; i < N; i++){
        int input;
        scanf("%d", &input);
        
        if(input < X){
            printf("%d ", input);
        }
    }

    return 0;
}