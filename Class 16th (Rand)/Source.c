#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Add(int x, int y)
{
    return x + y;
}

int Substract(int x, int y)
{
    return x - y;
}

int Multiply(int x, int y)
{
    return x * y;
}

int Divide(int x, int y)
{
    return x / y;
}

int Calculator(int x, int y, int (*fptr)(int, int))
{
    return fptr(x, y);
}

int MAX_LIFE = 5;

void print_life(int life)
{
    for (int i = 0; i < MAX_LIFE; i++)
    {
        if (i < life)
        {
            printf("♥");
        }
        else
        {
            printf("♡");
        }
    }
    printf("\n");
}

int main()
{
#pragma region 함수 포인터
    // 함수의 주소값을 저장하고 가리킬 수 있는
    // 변수입니다.

    // int (*fptr)(int, int);
    // 
    // fptr = Add;
    // 
    // printf("fptr로 호출한 값 : %d\n", fptr(10, 20));
    // 
    // fptr = Substract;
    // 
    // printf("fptr로 호출한 값 : %d\n", fptr(10, 20));

    // 함수의 포인터는 함수의 반환형과 매개 변수의 타입이
    // 일치해야 하며, 함수 포인터를 사용하여 동적으로
    // 메모리를 할당할 수 있습니다.

    // printf("Calculator의 값 : %d\n", Calculator(5,5,Multiply));

    // 함수의 호출은 컴파일 시점에 결정되지만, 함수 포인터로
    // 함수를 호출하게 되면 프로그램이 실행되는 시점에 함수의
    // 이름을 운영체제에 전달하여 함수를 호출할 수 있습니다.

#pragma endregion

#pragma region rand 함수
    // 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.


    // UTC 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된
    // 시간을 초(sec)로 반환하는 함수입니다.
    // srand(time(NULL));
    // 
    // int random = rand() % 10 + 1;
    // 
    // printf("random 변수의 값 : %d\n", random);

#pragma endregion

#pragma region UP - DOWN 게임

    int computer;
    int player;
    int life = MAX_LIFE;

    srand(time(NULL));
    computer = rand() % 50 + 1;

    printf("Computer가 숫자를 선택했습니다.\n");

    while (life > 0)
    {
        printf("현재 목숨: ");
        print_life(life);

        printf("숫자를 입력하세요 (1~50): ");
        scanf_s("%d", &player);
        printf("\n");

        if (player < computer) {
            printf("Up!\n");
            printf("\n");
            life--;
        }
        else if (player > computer) {
            printf("Down!\n");
            printf("\n");
            life--;
        }
        else
        {
            printf("Victory! 정답입니다.\n");
            break;
        }

        if (life == 0) {
            printf("Defeat. 모든 목숨을 잃었습니다.\n");
        }
    }

    return 0;


#pragma endregion


    return 0;
}