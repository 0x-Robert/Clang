#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    if (a != b && b != c && a != c) {

        return a + b + c;
    } else if ((a == b && c != b) || (a == c && c != b) || (c == b && c != a) ){
        //a와 b가 같고 c와 다르다.
        //a와 c가 같고 b와 다르다.
        //c와 b가 같고 a와 다르다.
       // printf("%d\n",(a + b + c) * (a*a + b*b + c*c));
        return (a + b + c) * (a*a + b*b + c*c);
    } else {
        return (a+b+c) * (a * a + b * b + c * c ) * (a * a * a + b * b * b + c * c * c );
    }
   
}


int solution0(int a, int b, int c) {
    int answer = 0;
    answer = a + b + c;
    if(a == b || a == c || b == c)
    {
        answer *= a*a + b*b + c*c;
        if(a == b && a == c) answer *= a*a*a + b*b*b + c*c*c;
    }
    return answer;
}

int main(){
    int a,b,c;
    a = 5;
    b = 3;
    c = 3;
    solution(a,b,c);
}
