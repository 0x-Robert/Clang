#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int*)*num_list_len);
    int odd = 0, even = 0;

    for (int i=0; i < num_list_len; i++ ){
        if ( num_list[i] % 2 == 0 ){
            even++; 
        } else {
            odd++;
        }
    }
    answer[0] = even;
    answer[1] = odd; 
    

    return answer;
}


// num_list_len은 배열 num_list의 길이입니다.
int* solution0(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // 동적할당되는 메모리는 힙 영역에 생성된다. 컴파일 타임에 메모리의 크기가 결정되는
    //데이터 영역이나 스택 영역의 정적 메모리 할당과는 대조적인 개념
    int* answer = (int*)malloc(sizeof(int*)*num_list_len);

    //malloc으로 메모리 할당하는 경우 해당 지점에 쓰레기 값이 포함되어있을 수 있다.
    //이 때 사칙연산을하면 원하는 값이 안 나올수도 있기 때문에 memset을 한다.
    //void* memset(세팅하고자 하는 메모리 시작주소, 메모리에 세팅하고자 하는 값, 길이)
    //memset은 메모리의 내용을 원하는 크기만큼 특정값으로 세팅할 수 있는 함수
    memset(answer,0,sizeof(answer));

    for(int i =0;i<num_list_len;i++)
    {
        if(num_list[i]%2==0)
            answer[0]++;
        else
            answer[1]++;
    }

    return answer;
}


int main() {
    int num_list[] = {1,2,3,4,5};
    solution(num_list, sizeof(num_list));
}