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

	int life = 5;

	srand(time(NULL));

	int radom = rand() % 50 + 1;

	while (scanf_s != srand)
	{
		for (int i = 0; i < 5; i++)
		{
			printf("��");
		}
	}

#pragma endregion


	return 0;
}