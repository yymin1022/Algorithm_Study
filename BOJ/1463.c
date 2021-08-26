#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int* arr;
 
    scanf("%d",&N);
 
    arr = (int*)malloc(sizeof(int)*(N + 1));
 
    arr[1]=0;
 
    for(int i = 2; i <= N; i++){
        arr[i] = arr[i - 1] + 1;
 
        if(arr[i] % 2 == 0){
            int temp = arr[i / 2] + 1;
            if(temp < arr[i]){
                arr[i] = temp;
            }
        }

        if(arr[i] % 3 == 0){
            int temp = arr[i / 3] + 1;
            if(temp < arr[i]){
                arr[i] = temp;
            }
        }
    }
 
    printf("%d", arr[N]);

    return 0;
}