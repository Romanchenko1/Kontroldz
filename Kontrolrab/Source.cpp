#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void task1() {
//1.Напишите функцию int f(int h, int m, int s), которая принимает три целых аргумента(часы h, минуты m и секунды s) и возвращает количество секунд, прошедших с начала дня.
	int h, m, s, r;
	printf("Часы: \n");
	scanf_s("%d", &h);
	printf("Минуты: \n");
	scanf_s("%d", &m);
	printf("Секунды: \n");
	scanf_s("%d", &s);
	r = (h * 3600) + (m * 60) + s;
	printf("Результат: %d Секунд \n",r);
}

void task2() {
//2.Напишите функцию int f(int m, int d), которая принимает два целых аргумента(месяц m и день d) и возвращает количество дней, прошедших с начала года.Считаем, что в каждом месяце 30 дней.
	srand(time(NULL));
	int m = 0 + rand() % 12;
	int d = 0 + rand() % 30;
	int r;
	r = m * 30 + d;
	printf("Результат: %d Дней \n", r);
}

void task3() {
//3.Напишите функцию int f(int m, int d), которая принимает два целых аргумента(месяц m и день d) и возвращает количество дней, прошедших с начала года.Считаем, что в каждом месяце 30 или 31дней, а год не високосный.
	int m, d, r;
	printf("Месяц: ");
	scanf_s("%d", &m);
	printf("Дней: ");
	scanf_s("%d", &d);
	if (m<=12 && d<=30 && d<=31)
	{
		int r = (m * 30) + d;
		printf("Результат: %d Дней \n", r);
	}
	else
	{
		printf("Введенные данные не верны! \n");
	}
}

void task5() {
//5.Напишите функцию int f(int m1, int m2, int m3), которая находит наименьшее число из заданного набора трех целых чисел.Используйте условный оператор if
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
//6.Напишите функцию f(int m, int n), которая определяет для пары целых чисел m и n, кратно ли второе число первому
	srand(time(NULL));
	int m = 0 + rand() % 25;
	int n = 0 + rand() & 50;
	if (n%m == 0)
	{
		printf("Кратное\n");
	}
	else
		printf("Не кратное \n");
}

int main()
{
	setlocale(LC_ALL, "");
	int task;
	int flag;
start:
	printf("Введите номер задания:");
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
	printf("Чтобы продолжить нажмите 1! \n");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}