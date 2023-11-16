#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//折半查找算法（二分法）
int main()
{
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left, right, k, x;
	left = 0;
	right = sz - 1;
	scanf("%d", &k);
	while (left <= right)
	{
		x = (left + right) / 2;//循环体
		if (k < arr[x])
			right = x - 1;
		else if (k > arr[x])
			left = x + 1;
		else
		{
			printf("找到了，下标是%d", x);
			break;
		}
	}
	if (left > right)
		printf("没找到");
	return 0;
}