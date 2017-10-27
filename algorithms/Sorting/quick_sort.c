#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int quick[10] = {87, 45, 36, 55, 12, 20, 35, 57, 99, 65};
	int beg = 0, end = 8, temp;
	int center = quick[9];
	printf("Elements before Sorting:\n");
	for (int i = 0; i < 10; ++i)
		printf("%d\n", quick[i]);
	while(beg < end)
	{
		while(quick[beg] < center)
		{
			beg++;
		}
		while(quick[end] > center && end > 0)
		{
			end--;
		}
		if (beg < end)
		{
			temp = quick[beg];
			quick[beg] = quick[end];
			quick[end] = temp;
		}
			temp = quick[beg];
			quick[beg] = quick[end];
			quick[end] = temp;
	}

	printf("Quick Sort After Sorting:\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", quick[i]);
	}
	return 0;
}

void quick(int arr)
{

}