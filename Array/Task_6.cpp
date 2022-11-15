#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>

int main()
{
	/*
	Заполнить массив из двадцати элементов так, как представлено ниже.
	20,19..1
	*/
	int array[20];
	for (int i = 20; i > 0; i--)
	{
		array[i] = i;
		printf("%d, ", array[i]);
	}
	getchar();
	return 0;
}
