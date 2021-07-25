#include <stdio.h>

int main() {
    char input[1000000];
    int count[26] = {0,};

    scanf("%s", input);

    for(int i = 0; i < 1000001; i++){
        if((int)*(input + i) == 0){
            break;
        }

        if((int)*(input + i) > 96 && (int)*(input + i) < 123){
            count[(int)*(input + i) - 97]++;
        }else if((int)*(input + i) > 64 && (int)*(input + i) < 91){
            count[(int)*(input + i) - 65]++;
        }
    }

    int max = 0;
    for(int i = 0; i < 26; i++){
        if(count[i] == 0){
            continue;
        }
        if(count[max] < count[i]){
            max = i;
        }
    }

    for(int i = 0; i < 26; i++){
        if(count[i] == 0){
            continue;
        }
        if(count[max] == count[i] && max != i){
            max = -2;
        }
    }
    

    printf("%c", max + 65);
    
    return 0;
}