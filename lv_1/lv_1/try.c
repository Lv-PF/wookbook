#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void meums()
{
	printf("*********************\n");
	printf("*****  1. play  *****\n");
	printf("*****  0. exti  *****\n");
	printf("*********************\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand()%100+1;
	while (1)
	{
		printf("������µ����֣�\n");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("�´���\n");
		}
		else if (ret>guess)
		{
			printf("��С��\n");
		}
		else
		{
			printf("С����������\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meums();//�˵�Ӧ�÷���ѭ���� ��ѡ�� ������Ϸ����ʱ ��һ��ѡ��Ļ���
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			game();
			break;
		case 0 :
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ��Ƿ���������ѡ��\n");
			break;
		}

	}while(input);
	return 0;
}