#include <stdio.h>

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	//int l;
	//scanf_s("%d",&l);
	//int list[] = (int*)malloc(sizeof(int));// { 8,7,2,6,4,7 }
	int list[6] = { 8,7,2,6,4,1 }; 
		int l = 6;

	for (int i = 0; i < l - 1; ++i)
	{
		int min = i;
		for (int j = i; j < 6 - 1; ++j)
		{
			if (list[j + 1] < list[min])
			{
				min = j + 1;
			}
		}
		Swap(&list[i], &list[min]);
	}

	for (int i = 0; i < l; i++)
	{
	printf("%d ", list[i]);
	}
	return 0;
}