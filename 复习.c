
#include<stdio.h>
int erfen(int arr[], int len, int num);

int main()

{
	int arr[7] = { 2,23,31,55,76,84,88 };
	int len = sizeof(arr) / sizeof(int);
	int num = 85;
	int suoyin = erfen(arr, len, num);
	if (suoyin != -1)
	{
		printf("索引为%d\n", suoyin);

	}
	else
	{
		printf("没有目标数字");
	}

}

int erfen(int arr[], int len, int num)
{
	int min = 0;
	int max = len - 1;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if (arr[mid] > num)
		{
			max = mid - 1;
		}
		else if (arr[mid] < num)
		{
			min = mid + 1;

		}
		else
		{
			return mid;
		}

	}

	return -1;

}