//排序优化
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int temp;
	int arr[10] = { 1,23,89,4,28,7,260,99,6,48 };

	for (int i = 0; i < 10; i++)
	{
		int idx = i;
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[idx] > arr[j])
			{
				idx = i;
			}
		}
		if (idx != i)
		{
			temp = arr[i];
			arr[i] = arr[idx];
			arr[idx] = temp;
		}
	}
		
}

