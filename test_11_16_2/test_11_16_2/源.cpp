#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�۰�����㷨�����ַ���
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
		x = (left + right) / 2;//ѭ����
		if (k < arr[x])
			right = x - 1;
		else if (k > arr[x])
			left = x + 1;
		else
		{
			printf("�ҵ��ˣ��±���%d", x);
			break;
		}
	}
	if (left > right)
		printf("û�ҵ�");
	return 0;
}