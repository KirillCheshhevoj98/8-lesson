#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<math.h >
#include<time.h>

int main()
{
	/*
		��������� ������ �� ������ ��������� ���������� ����������:
		������ ������� ������� ����� 37, ������ � 0, ������ � 50, ��������� � 46, 
		����� � 34, ������ � 46, ������� � 0, ������� �13.
	*/

	int array[8] = { 37, 0, 50, 46, 34, 46, 0, -13 };

	for (int i = 0; i < 8; i++)
	{
		printf("%d element = %d\n", i + 1, array[i]);
	}
	getchar();
	return 0;
}