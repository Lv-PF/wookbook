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
		printf("请输入猜的数字：\n");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("猜大了\n");
		}
		else if (ret>guess)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("小伙子真厉害\n");
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
		meums();//菜单应该放在循环内 给选错 或者游戏结束时 再一次选择的机会
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			game();
			break;
		case 0 :
			printf("退出游戏\n");
			break;
		default:
			printf("选择非法，请重新选择\n");
			break;
		}

	}while(input);
	return 0;
}