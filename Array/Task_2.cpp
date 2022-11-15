#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>

int main()
{
	/*
		Заполнить массив из n элементов значениями, вводимыми с клавиатуры
		в ходе выполнения программы.
	*/

	const int MAX_SIZE = 100;
	int size_array = 0;
	int array[MAX_SIZE];
	printf("Enter length array[0...100]: ");
	scanf("%d", &size_array);
	if (size_array > 0 || size_array <= 100)
	{
		for (int i = 0; i < size_array; i++)
		{
			printf("Enter %d element: ", i + 1);
			scanf("%d", &array[i]);
		}

		for (int i = 0; i < size_array; i++)
		{
			printf("%d element = %d\n", i + 1, array[i]);
		}
	}
	else
	{
		printf("Error");
	}
	getchar();
	return 0;
}