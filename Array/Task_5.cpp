#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>

int main()
{
	/*
	Заполнить массив из двенадцати элементов так, как показано ниже:
	1,2..12
	*/
	int array[12];
	for (int i = 1; i <= 12; i++)
	{
		array[i] = i;
		printf("%d, ", array[i]);
	}
	getchar();
	return 0;
}
