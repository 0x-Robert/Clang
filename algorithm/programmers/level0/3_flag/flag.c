#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, bool flag)   {
    int answer = 0;
    if  (flag == true) {
        printf("%d\n",a+b);
        return a + b; 
    } else {
        printf("%d\n",a+b);
        return a - b; 
    }


}

int main() {
    int a, b;
    bool flag;

    a = -4; 
    b = 7;
    flag = true; 
    solution(a,b,flag);


}