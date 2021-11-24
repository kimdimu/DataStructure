#include <stdio.h>

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int FindNumInListByBS(int l, int list[])
{
	int findNum;
	printf("찾을 숫자를 입력하세요: ");
	scanf_s("%d", &findNum);

	return BinarySearch(l, findNum, list);
}

int BinarySearch(int l, int findNum, int  list[])
{
	int left, right, middle;
	left = 0;
	right = l;
	middle = (left + right) / 2;
	int result;
	int count = 0;

	while (true)
	{
		count++;
		if (findNum == list[middle])
		{
			result = list[middle];
			break;
		}
		else if (findNum > list[middle]) left = middle + 1;
		else right = middle - 1;//if (findNum < list[middle]) 

		middle = (left + right) / 2;
		if (left > right)
		{
			printf("No result");
			break;
		}
	}
}

void Sort(int l, int  list[])
{
	for (int i = 0; i < l - 1; ++i)
	{
		int min = i;
		for (int j = i; j < l - 1; ++j)
		{
			if (list[j + 1] < list[min])
			{
				min = j + 1;
			}
		}
		Swap(&list[i], &list[min]);
	}
}

void PrintList(int l, int  list[])
{
	for (int i = 0; i < l; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}

int main()
{
	int list[7] = { 8,7,2,6,4,1,3 };
	int l = 7;

	Sort(l, list);
	PrintList(l, list);
	printf("%d", FindNumInListByBS(l, list));

	return 0;
}