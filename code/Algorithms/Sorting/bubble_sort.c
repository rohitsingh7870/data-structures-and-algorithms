#include <stdio.h>
#include <cs50.h>

int main()
{
	printf("Enter the elements in the array:\n");
	int array[5];
	for (int i = 0; i < 5; ++i)
	{
		scanf("%i", &array[i]);
	}
	printf("Array Before Sorting:\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%i\n", array[i]);
	}

	bool iter;
	do
	{
		iter = false;
		for (int i = 0; i < 5; ++i)
		{
			if (array[i] > array[i+1])
			{
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				iter = true;
			}
		}	
	} while(iter);

	printf("Array After Sorting:\n");

	for (int i = 0; i < 5; ++i)
	{
		printf("%i\n", array[i]);
	}
	
}