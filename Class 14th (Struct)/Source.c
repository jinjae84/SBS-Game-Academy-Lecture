#include <stdio.h>
#include <math.h>

struct Unit
{
	char grade;
	int health;
	float attack;
	float defense;
	double experience;
};

struct Vector2
{
	int x;
	int y;
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Unit unit;
	// 
	// unit.grade = 'B';
	// unit.health = 100;
	// unit.attack = 32.5f;
	// unit.experience = 1075.75;
	// 
	// printf("unit�� grade �� : %c\n", unit.grade);
	// printf("unit�� health �� : %d\n", unit.health);
	// printf("unit�� attack �� : %f\n", unit.attack);
	// printf("unit�� experience �� : %lf\n", unit.experience);

	// ����ü�� �ִ� �����͸� �ʱ�ȭ�� �� ���ʿ� �ִ� �����ͺ���
	// ����ü�� �ִ� ��� ������ ������ �ʱ�ȭ�� �����մϴ�.
	// struct Unit marine = {'A', 60, 6.5f, 36.5};
	// {
	// 	   printf("marine�� grade �� : %c\n", marine.grade);
	//     printf("marine�� health �� : %d\n", marine.health);
	//     printf("marine�� attack �� : %f\n", marine.attack);
	//     printf("marine�� experience �� : %lf\n", marine.experience);
	// };

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.

	// struct Unit tank = {'S', 375, 40.5f, 420.5};
	// {
	// 	printf("tank�� grade �� : %c\n", tank.grade);
	// 	printf("tank�� health �� : %d\n", tank.health);
	// 	printf("tank�� attack �� : %f\n", tank.attack);
	// 	printf("tank�� experience �� : %lf\n", tank.experience);
	// };
	// 
	// struct Unit scv = { 'C', 40, 5.5f, 12.5 };
	// {
	// 	printf("scv�� grade �� : %c\n", scv.grade);
	// 	printf("scv�� health �� : %d\n", scv.health);
	// 	printf("scv�� attack �� : %f\n", scv.attack);
	// 	printf("scv�� experience �� : %lf\n", scv.experience);
	// }

	// struct Unit cat = { 'SSS', 9999, 999.9f, 999.9f, 999.9 };
	// {
	// 	printf("cat�� grade �� : %c\n", cat.grade);
	// 	printf("cat�� health �� : %d\n", cat.health);
	// 	printf("cat�� attack �� : %f\n", cat.attack);
	// 	printf("cat�� attack �� : %f\n", cat.defense);
	// 	printf("cat�� experience �� : %lf\n", cat.experience);
	// }

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// printf("100�� ������ : %lf\n", sqrt(100));
	// printf("2��: %lf\n", pow(2,3));

	// struct Vector2 player = { 0, 0 };
	// 
	// struct Vector2 enemy = { 2, 3 };
	// 
	// int x = player.x - enemy.x;
	// int y = player.y - enemy.y;
	// 
	// double distance = sqrt(pow(x,2) + pow(y,2));
	// 
	// printf("distance ������ �� : %lf\n", distance);
	// 
	// if (distance < 5)
	// {
	// 	printf("���� ������ ���Խ��ϴ�.");
	// }
	// else
	// {
	// 	printf("���� �������� ������ϴ�.");
	// }

#pragma endregion


	return 0;
}