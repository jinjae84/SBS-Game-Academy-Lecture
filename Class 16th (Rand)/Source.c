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
            printf("��");
        }
        else
        {
            printf("��");
        }
    }
    printf("\n");
}

int main()
{
#pragma region �Լ� ������
    // �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ�
    // �����Դϴ�.

    // int (*fptr)(int, int);
    // 
    // fptr = Add;
    // 
    // printf("fptr�� ȣ���� �� : %d\n", fptr(10, 20));
    // 
    // fptr = Substract;
    // 
    // printf("fptr�� ȣ���� �� : %d\n", fptr(10, 20));

    // �Լ��� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ Ÿ����
    // ��ġ�ؾ� �ϸ�, �Լ� �����͸� ����Ͽ� ��������
    // �޸𸮸� �Ҵ��� �� �ֽ��ϴ�.

    // printf("Calculator�� �� : %d\n", Calculator(5,5,Multiply));

    // �Լ��� ȣ���� ������ ������ ����������, �Լ� �����ͷ�
    // �Լ��� ȣ���ϰ� �Ǹ� ���α׷��� ����Ǵ� ������ �Լ���
    // �̸��� �ü���� �����Ͽ� �Լ��� ȣ���� �� �ֽ��ϴ�.

#pragma endregion

#pragma region rand �Լ�
    // 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.


    // UTC �������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����
    // �ð��� ��(sec)�� ��ȯ�ϴ� �Լ��Դϴ�.
    // srand(time(NULL));
    // 
    // int random = rand() % 10 + 1;
    // 
    // printf("random ������ �� : %d\n", random);

#pragma endregion

#pragma region UP - DOWN ����

    int computer;
    int player;
    int life = MAX_LIFE;

    srand(time(NULL));
    computer = rand() % 50 + 1;

    printf("Computer�� ���ڸ� �����߽��ϴ�.\n");

    while (life > 0)
    {
        printf("���� ���: ");
        print_life(life);

        printf("���ڸ� �Է��ϼ��� (1~50): ");
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
            printf("Victory! �����Դϴ�.\n");
            break;
        }

        if (life == 0) {
            printf("Defeat. ��� ����� �Ҿ����ϴ�.\n");
        }
    }

    return 0;


#pragma endregion


    return 0;
}