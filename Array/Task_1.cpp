#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>

int main()
{
	/*
		«аполнить массив из восьми элементов следующими значени€ми:
		первый элемент массива равен 37, второй Ч 0, третий Ч 50, четвертый Ч 46, 
		п€тый Ч 34, шестой Ч 46, седьмой Ч 0, восьмой Ч13.
	*/

	int array[8] = { 37, 0, 50, 46, 34, 46, 0, -13 };

	for (int i = 0; i < 8; i++)
	{
		printf("%d element = %d\n", i + 1, array[i]);
	}
	getchar();
	return 0;
}