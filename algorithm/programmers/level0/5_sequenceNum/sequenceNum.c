#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 등차수열의 특정한 항만 더하기
// 등차수열 an = dn + a 
// included_len은 배열 included의 길이입니다.
int arithprogress (int a, int d, int n){
    return d * n + a;
}

int solution(int a, int d, bool included[], size_t included_len) {
    int  sum = 0;
    for (int i =0; i < included_len; i++){
        if (included[i]){
             sum += arithprogress(a,d,i);
        }
       
        
    }
    

    return sum;
}




int main() {
    int a,d; 

    a = 3; 
    d = 4; 
    bool included[5] = {true,false,false,true,true};
    solution(a,d,included, sizeof(included));
}