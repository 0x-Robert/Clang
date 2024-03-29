// 포인터와 메모리

// 포인터는 메모리의 특정 위치를 가리킬 때 사용하며, 정수형으로 된 메모리 주소가 저장되어 있습니다. 포인터는 *를 사용하여 선언하며, 이미 선언된 포인터에 *를 사용하면 포인터에 저장된 메모리 주소에 접근(역참조)하여 값을 가져오거나 저장할 수 있습니다.

// 자료형 *포인터이름;    // 포인터 선언

// *포인터;         // 포인터를 역참조하여 값을 가져옴
// *포인터 = 값;    // 포인터를 역참조하여 값을 저장
// 변수의 메모리 주소를 구할 때는 주소 연산자 &를 사용합니다. &로 구한 주소는 포인터에 할당할 수 있습니다. 즉, 포인터와 변수의 메모리 주소는 자료형이 같습니다.

// 포인터 = &변수;    // 변수의 메모리 주소를 포인터에 저장
// 포인터와 역참조 연산자 *, 주소 연산자 &의 관계를 그림으로 표현하면 다음과 같은 모양이 됩니다.

// & = 주소
// * = 값
// pointer = 주소
 
#include <stdio.h>

int main(){
    //포인터에 변수의 메모리 주소를 저장하고, 포인터를 역참조하여 값을 출력하는 예제입니다.
    int age = 20;
    int *pointer = &age;
    printf("%d\n", *pointer); //20 

    char *cPtr1;          // char형 포인터 선언
    char c = 'a';         // char형 변수를 선언하고 값을 할당
    cPtr1 = &c;           // cPtr1이 c 변수의 메모리 주소를 가리키도록 함
    printf("%c\n", *cPtr1); // 'a' 출력

    short *numPtr1;       // short형 포인터 선언
    short num1 = 100;     // short형 변수를 선언하고 값을 할당
    numPtr1 = &num1;      // numPtr1이 num1 변수의 메모리 주소를 가리키도록 함
    printf("%d\n", *numPtr1);

    int *numPtr2;         // int형 포인터 선언
    int num2 = 100;       // int형 변수를 선언하고 값을 할당
    numPtr2 = &num2;      // numPtr2가 num2 변수의 메

    long long *numPtr3;   // long long형 포인터 선언
    *numPtr3 = 100;       // long long의 크기 8바이트만큼 역참조하여 값을 저장

    printf("%d\n", *cPtr1);
    printf("%d\n", *numPtr1);
    printf("%d\n", *numPtr2); 
    printf("%lld\n", *numPtr3); 


    return 0; 
}

// 포인터와 주소의 자료형

// int *a;는 pointer to int라고 읽으며, *a와 같이 변수를 역참조하면 pointer to를 제거하여 int로 만듭니다.



// void 포인터

// void 포인터는 어떤 자료형으로 된 포인터든 모두 저장할 수 있습니다. 반대로 다양한 자료형으로 된 포인터에도 void 포인터를 저장할 수 있습니다. 이런 특성 때문에 void 포인터는 범용 포인터라고 합니다. 단, 자료형의 크기가 정해지지 않았으므로 역참조는 할 수 없습니다.

// 이중 포인터

// 포인터도 일반 변수이므로 다른 포인터의 메모리 주소를 저장할 수 있습니다. 이때 포인터의 메모리 주소를 담고 있는 포인터를 이중 포인터라고 합니다. 이중 포인터를 선언할 때는 *를 두 개 사용하며, 역참조할 때도 *를 두 개 사용합니다.

// 자료형 **포인터이름;    // 이중 포인터 선언

// **포인터;        // 이중 포인터를 역참조하여 값을 가져옴
// **포인터 = 값;    // 이중 포인터를 역참조하여 값을 저장
// 예를 들어 int **a;는 pointer to pointer to int 입니다.

// 메모리 할당하기

// malloc 함수를 사용하면 메모리를 바이트 단위로 할당할 수 있습니다. 단, 메모리를 할당했으면 반드시 free 함수로 메모리를 해제해야 합니다.

// 자료형 *포인터이름 = malloc(크기);    // 일정 크기만큼 동적 메모리 할당

// free(포인터);    // 동적 메모리 해제
// 메모리를 특정 값으로 설정하기

// memset 함수를 사용하면 메모리의 내용을 한꺼번에 특정 값으로 설정할 수 있습니다. 값을 설정하는 단위는 바이트 단위입니다.

// memset(포인터, 설정할값, 크기);
// 널 포인터

// 포인터가 아무것도 가리키고 있지 않는 상태를 널 포인터(null pointer)라고 하며 포인터에 NULL을 할당하면 됩니다.

// 자료형 *포인터이름 = NULL;    // 포인터에 NULL 할당
// 잘못된 포인터 사용

// 포인터에는 임의의 값을 할당하면 안 됩니다. 반드시 이미 있는 변수의 메모리 주소를 구해서 할당하거나, malloc 함수로 메모리를 할당해야 합니다.

// int *numPtr = 0x100;    // 잘못된 포인터 사용, 임의의 값을 할당하면 안 됨

// int num1;
// int *numPtr = &num1;    // 변수 num1의 메모리 주소를 포인터 변수에 저장

// int *numPtr = malloc(sizeof(int));    // int의 크기만큼 동적 메모리 할당