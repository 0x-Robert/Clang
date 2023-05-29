#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    if (n % 2 == 1) {
        for (int  i = 0; i <= n; i++){
            if (i % 2 == 1) {
                answer +=i;
            } 
        }

    } else {
        for (int i = 0; i <= n; i++ ){
            if (i % 2 == 0 ){
                answer += i * i;
        }
        }
        
    }
    printf("%d",answer);
    return answer;

}

//best practice
int solution0(int n) {
    int half = n / 2;
    if(n & 1) return (half + 1) * (half + 1);
    return 2 * half * (half + 1) * (2 * half + 1) / 3;
}

int main(){
    int n;
    //n = 7;
    n = 10;
    solution(n);
}