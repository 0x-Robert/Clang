#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(int a, int b) {
   char s1[11], s2[11];
   int num1, num2; 
   
   sprintf(s1, "%d",a); sprintf(s2, "%d", b);
   strcat(s1,s2);
   num1 = atoi(s1);
   sprintf(s1, "%d",a);
   strcat(s2,s1);
   num2 = atoi(s2);
   

    printf("%d\n",num1);
    printf("%d\n",num2);

    if (num1 > num2 ){
        return num1; 
    } else if (num2 > num1) {
        return num2; 
    } else {
        return num1;
    }
}


int solution1(int a, int b) {
    int ans1, ans2;
    char temp1[11], temp2[11];
    sprintf(temp1, "%d", a); sprintf(temp2, "%d", b);
    strcat(temp1, temp2);
    ans1=atoi(temp1);
    sprintf(temp1, "%d", a);
    strcat(temp2, temp1);
    ans2=atoi(temp2);
    return ans1>ans2?ans1:ans2;
}
int main(){
    int a = 12;
    int b = 3; 
    solution(a,b);
}