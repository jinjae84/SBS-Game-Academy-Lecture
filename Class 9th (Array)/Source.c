#include <stdio.h>

void main()
{
#pragma region ��� ���� ������
	// ����� ������ �����ʹ� �ش� ������ ����
	// ������ �� ������, �ٸ� ������ �ּҴ�
	// ����ų �� �ֽ��ϴ�.

	// int a = 10;
	// int b = 20;
	// 
	// const int * ptr = NULL;
	// 
	// ptr = &a;
	// 
	// // *ptr = 99;
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	// 
	// ptr = &b;
	// 
	// printf("ptr�� ����Ű�� �� : %d\n", *ptr);
#pragma endregion

#pragma region ������ ���
	// �����͸� ����� �����Ͽ�, ������ ������
	// ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������
	// �� ������ ������ �� �ֽ��ϴ�.

	// int x = 10;
	// int y = 20;
	// 
	// int * const cptr = &x;
	// 
	// *cptr = 99;
	// 
	// printf("x������ �� : %d\n", x);

	// // cptr = &y;

#pragma endregion

#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	// int array[5];
	// 
	// // �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.
	// 
	// array[0] = 10;

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	// ������ ������ �˴ϴ�.

	// printf("array[0] �� ���� : %d\n", array[0]);

	// int array[10];
	// 
	// int size = sizeof(array) / sizeof(int);
	// 
	// for (int i = 0; i < size; i++ )
	// {
	// 	array[i] = (i + 1) * 10;
	// 
	// 	printf("array[%d] = %d\n", i, array[i]);
	// }

	// int list[ ] = {1, 2, 3, 4, 5};
	// 
	// for (int i = 0; i < sizeof(list) / sizeof(int); i++)
	// {
	// 	printf("list[%d] = %d\n", i, list[i]);
	// }

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ���
	// ������ ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.

	// int table[] = { 1, 2, 3 };
	// 
	// printf("table�� �ּ� : %p\n", table);
	// printf("table[0]�� �ּ� : %p\n", &table[0]);
	// 
	// int* p = NULL;
	// 
	// p = table;
	// 
	// p = p + 1;
	// 
	// *p = 135;
	// 
	// printf("table[1]�� �� : %d\n", *table);

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� ����ŵ�ϴ�.

#pragma endregion


}