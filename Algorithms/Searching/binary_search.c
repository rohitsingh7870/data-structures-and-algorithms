#include <stdio.h>
#include <cs50.h>

int main()
{
	int n = 10;
	int values[n];
	int left_bound = 0;
    int right_bound = n - 1;
    
    printf("Enter Elements in the Array.\n");
    for (int i = 0; i < n; ++i)
    {
    	scanf("%i", &values[i]);
    }

    printf("Enter value to be found.\n");
    int value = get_int();

    for (int i = 0; i < n - 1; i++)
    {
    	int middle = (left_bound + right_bound) / 2;
    	
    	if (value > values[middle])
    		left_bound = middle + 1;
    	
    	if (value < values[middle])
    		right_bound = middle - 1;
    		
        if (value == values[middle])
        	return true;
    	
    }
    
    		return false;

	
}