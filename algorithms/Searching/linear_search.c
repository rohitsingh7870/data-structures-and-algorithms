/*
* Author:- Rishav Pandey
* WAP to implement Linear Search in an Array of independent size .
*/

#include <stdio.h>
#include <cs50.h> // this is the library function made by harvard university

int main(void)
{
	printf("Enter the Size for the Array:\n");
	int s = get_int(); // this function is defined in cs50
	printf("Enter the values for creating a list: \n");
	int array[s], loc = 0;
	for (int i = 0; i < s; ++i)
	{
		scanf("%d", &array[i]);
	}
	printf("Enter any value to be checked:- \n");
	int search;
	scanf("%i", &search);

	for (int i = 0; i < s; i++)
	{
		if (search == array[i])
		{

			loc = i+1;
		}
		
	}

	if (loc != 0)
	{
		printf("Value you searched is found in the list at the location of %i in the Array. :)\n", loc);
	}

	else
		printf("Value doesn't Exist in the list. :(\n");
}

