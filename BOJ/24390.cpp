#include <bits/stdc++.h>

using namespace std;
 
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(0);

    string inputStr;
    cin >> inputStr;

    int M, S;
	std::stringstream tempM(inputStr.substr(0, 2));
	tempM >> M;
    std::stringstream tempS(inputStr.substr(3, 2));
	tempS >> S;

    int count = 0;
    int isStart = 0;
    while(M != 0 || S != 0){
        if(M == 0){
            if(S >= 30){
                count++;
                S -= 30;
                isStart = 1;
            }

            while(S > 0){
                count++;
                S -= 10;
            }
        }else if(M < 10){
            count += M;
            M = 0;
        }else{
            while(M >= 10){
                count++;
                M -= 10;
            }
        }
    }

    if(!isStart){
        count++;
    }

    cout << count;
}