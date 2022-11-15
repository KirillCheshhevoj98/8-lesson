#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>

int main()
{
	/*
	Заполнить массив из n случайных чисел таким образом, чтобы значения элементов при просмотре массива слева направо образовывали:
	а) возрастающую последовательность;
	б) убывающую последовательность.
	*/
	const int MAX_SIZE = 100;
	int arr[MAX_SIZE];
	int size;

	printf("Enter size array[1...%d]: ", MAX_SIZE);
	scanf("%d", &size);

	while (size < 1 || size > 100)
	{
		printf("Incorrect input\n");
		printf("Enter size array[1...%d]: ", MAX_SIZE);
		fflush(stdin);
		scanf("%d", &size);
	}

	srand(time(0));
	int startRange = 0, endRange = 100;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (endRange - startRange + 1) + startRange;
	}
	

	printf("Increment array: \n");
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d element %d\n", i + 1, arr[i]);
	}

	printf("Decreasing array: \n");
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (arr[j] > arr[i])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d element %d\n", i + 1, arr[i]);
	}
	getchar();
	return 0;
}
