#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task1() {
//1.�������� ������� int f(int h, int m, int s), ������� ��������� ��� ����� ���������(���� h, ������ m � ������� s) � ���������� ���������� ������, ��������� � ������ ���.
	int h, m, s, r;
	printf("����: \n");
	scanf_s("%d", &h);
	printf("������: \n");
	scanf_s("%d", &m);
	printf("�������: \n");
	scanf_s("%d", &s);
	r = (h * 3600) + (m * 60) + s;
	printf("���������: %d ������ \n",r);
}

void task2() {
//2.�������� ������� int f(int m, int d), ������� ��������� ��� ����� ���������(����� m � ���� d) � ���������� ���������� ����, ��������� � ������ ����.�������, ��� � ������ ������ 30 ����.
	srand(time(NULL));
	int m = 0 + rand() % 12;
	int d = 0 + rand() % 30;
	int r;
	r = m * 30 + d;
	printf("���������: %d ���� \n", r);
}

void task3() {
//3.�������� ������� int f(int m, int d), ������� ��������� ��� ����� ���������(����� m � ���� d) � ���������� ���������� ����, ��������� � ������ ����.�������, ��� � ������ ������ 30 ��� 31����, � ��� �� ����������.
	int m, d, r;
	printf("�����: ");
	scanf_s("%d", &m);
	printf("����: ");
	scanf_s("%d", &d);
	if (m<=12 && d<=30 && d<=31)
	{
		int r = (m * 30) + d;
		printf("���������: %d ���� \n", r);
	}
	else
	{
		printf("��������� ������ �� �����! \n");
	}
}

void task5() {
//5.�������� ������� int f(int m1, int m2, int m3), ������� ������� ���������� ����� �� ��������� ������ ���� ����� �����.����������� �������� �������� if
	srand(time(NULL));
	int m1 = 0 + rand() % 44;
	int m2 = 0 + rand() % 44;
	int m3 = 0 + rand() % 44;
	if(m1>=0 && m1<=m2 && m1<=m3)
	{
		printf("m1 %d\n",m1);
	}
	else if(m2>=0 && m2<=m1 && m2<=m3)
	{
		printf("m2 %d\n",m2);
	} 
	else if(m3>=0 && m3<=m2 && m3<=m1)
	{
		printf("m3 %d\n",m3);
	}
}

void task6() {
//6.�������� ������� f(int m, int n), ������� ���������� ��� ���� ����� ����� m � n, ������ �� ������ ����� �������
	srand(time(NULL));
	int m = 0 + rand() % 25;
	int n = 0 + rand() & 50;
	if (n%m == 0)
	{
		printf("�������\n");
	}
	else
		printf("�� ������� \n");
}

int main()
{
	setlocale(LC_ALL, "");
	int task;
	int flag;
start:
	printf("������� ����� �������:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {
		task1();
	}break;
	{case 2:
		task2();
	}break;
	{
	case 3:
		task3();
	}break;
	
	{
	case 5:
		task5;
	}break;
	{
	case 6:
		task6();
	}break;
	default:
		break;
	}
	printf("����� ���������� ������� 1! \n");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}