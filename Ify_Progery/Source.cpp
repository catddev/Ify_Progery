#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int n = 0;

start:
	printf("Старт! \nЗачем вы хотите изучить программирование?\n 1 - Для детей;\n 2 - Я не знаю выбери за меня;\n 3 - Поразвлечься;\n 4 - Интересно;\n 5 - Саморазвитие;\n 6 - Заработать.\n ");
	scanf("%d", &n);
	if (n == 1)
	{
		printf("Начните со Scratch, затем...\n");
		SetConsoleTextAttribute(hConsole, 11);
		printf("Python!\n\n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (n == 2)
	{
		SetConsoleTextAttribute(hConsole, 11);
		printf("Python!\n\n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (n == 3)
	{
	next2:
		printf("Уже есть идея на миллион? 1 - Нет. Просто хочу начать; 2 - Да\n");
		scanf("%d", &n);
		if (n == 1)
		{
			printf("Мне нравится учиться.\n 1 - Простым способом.\n 2 - Лучшим способом.\n 3 - Трудненьким способом.\n 4 - Очень сложный путь (но потом будет легче)\n");
			scanf("%d", &n);
			if (n == 1)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("Python!\n\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (n == 2)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("Python!\n\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (n == 3)
			{
				printf("Какая коробка передач.\n 1 - Автомат.\n 2 - Ручная.\n ");
				scanf("%d", &n);
				if (n == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Java!\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("C!\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (n == 4)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("C!\n\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
		else if (n == 2)
		{
		next3:

			printf("Какая платформа/сфера.\n 1 - Веб.\n 2 - Корп.софт.\n 3 - Мобильная.\n 4 - 3D игры.\n");
			scanf("%d", &n);
			if (n == 1)
			{
				printf("Ваш сервис будет работать в реальном времени, как twitter.\n 1 - Да.\n 2 - Нет.\n ");
				scanf("%d", &n);
				if (n == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JavaScript!\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 2)
				{
				next6:
					printf("Хотите попробовать что-то новое, но не очень трудоемкое.\n 1 - Да.\n 2 - Нет.\n 3 - Не знаю \n ");
					scanf("%d", &n);
					if (n == 1)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("JavaScript!\n\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else if (n == 2)
					{
					next1:
						printf("Какая у вас любимая игрушка.\n 1 - Lego.\n 2 - Пластилин.\n 3 - Старенький, но любимый мишка \n ");
						scanf("%d", &n);
						if (n == 1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("Python!\n\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (n == 2)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("Ruby!\n\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else if (n == 3)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("Php!\n\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
					else if (n == 3) goto next1;
				}
			}
			else if (n == 2)
			{
			next5:
				printf("Что скажете о Microsoft?\n 1 - Люблю его.\n 2 - Неплохо.\n 3 - Фуу.\n ");
				scanf("%d", &n);
				if (n == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("C#!\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Java!\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 3)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Java!\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (n == 3)
			{
			next4:
				printf("Какая OS?\n 1 - iOS.\n 2 - Android.\n ");
				scanf("%d", &n);
				if (n == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Objective-C!\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Java!\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else if (n == 4)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("С++\n\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
	}
	else if (n == 4) goto next2;
	else if (n == 5) goto next2;
	else if (n == 6)
	{
		printf("1 - У меня есть идея для стартапа\n2 - Найти работу\n");
		scanf("%d", &n);
		if (n == 1) goto next3;

		else if (n == 2)
		{
			printf("Какая платформа/сфера? \n 1 - 3D Игры \n 2 - Мобильная\n 3 - Корп.софт\n 4 - Веб\n 5 - Я просто хочу $$$\n 6 - Я хочу работать в крупной IT-компании.\n  ");
			scanf("%d", &n);
			if (n == 1)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("С++\n\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (n == 2) goto next4;
			else if (n == 3) goto next5;
			else if (n == 4)
			{
				printf(" 1 - Фронтенд (веб-нтерфейс) \n 2 - Бэкенд (то, что за вебсайтом)\n");
				scanf("%d", &n);
				if (n == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("JavaScript\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 2)
				{
					printf("Хочу работать на... \n 1 - Корпрорацию\n 2 - Стартап\n");
					scanf("%d", &n);

					if (n == 1) goto next5;
					else if (n == 2) goto next6;
				}
			}
			else if (n == 5)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("Java\n\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
			else if (n == 6)
			{
				printf("1 - Microsoft\n2 - Apple\n3 - Google\n4 - Facebook\n");
				scanf("%d", &n);
				if (n == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("C#\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 2)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Objective - C\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 3)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Python\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else if (n == 4)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("Python\n\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
		}
	}
	goto start;
}