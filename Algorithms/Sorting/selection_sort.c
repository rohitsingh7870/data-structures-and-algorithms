/*
* Author: Rishav Pandey.
* WAP for sorting of elements in an Array.
*/

#include <stdio.h>

int main()
{
	printf("Enter the Elements in an Array:\n");
	int array[5];
	for (int i = 0; i < 5; ++i)
	{
		scanf("%i", &array[i]);
	}

	int min = 0;
	for (int i = 0; i < 5; ++i)
	{
		min = array[i];
		if (array[i + 1] < min)
		{
			min = array[i + 1];
		}

		if (min != i)
		{
			int swap = min;
			min = array[i];
			array[i] = swap;
		}
	}

	printf("Array after sorting:\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%i\n", array[i]);
	}


	
}