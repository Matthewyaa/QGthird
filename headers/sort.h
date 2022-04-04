#pragma once

#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include<stdlib.h>

/**
 *  @name        : void insertSort(int *a,int n);
 *  @description : ���������㷨
 *  @param       : ����ָ�� a, ���鳤�� n
 */
void insertSort(int* a, int n)
{
	int i ;
	int j ;
	int flag;
	for (i = 0; i < n; i++)
	{
		while (*(a + i) > 0 && *(a+i)>flag)		 //�ź���������������Ҫ�ŵ��Ǹ���
		{
			*(a + i+1) = *(a + i);		//����������һ��
		}
		flag = *(a + i);				//�ҵ��Լ���λ�ã�����λ��
	}
}


/**
 *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
 *  @description : �鲢���򣨺ϲ����飩
 *  @param       : ����ָ��a���������begin�������е�mid�������յ�end����������ָ��temp
 */
void MergeArray(int* a, int begin, int mid, int end, int* temp)
{
	begin = *a;
	temp = (int*)malloc(n * sizeof(int));
	if (temp)							//����ɹ�
	{

	}
}


/**
 *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
 *  @description : �鲢����
 *  @param       : ����ָ��a���������begin�������յ�end����������ָ��temp
 */
void MergeSort(int* a, int begin, int end, int* temp)
{


}


/**
 *  @name        : void QuickSort(int *a, int begin, int end);
 *  @description : �������򣨵ݹ�棩
 *  @param       : ����ָ��a���������begin�������յ�end
 */
void QuickSort_Recursion(int* a, int begin, int end)
{
	int i = 0;
	int len = begin - end;						//���鳤��
	for (i = 0; *(a + i); i++)
	{
		begin  =  (int*) malloc(int);				//����߿���һ���ռ�
		end =  (int*) malloc(int);					//���ұ߿���һ���ռ�
		if (begin > *(a + i))
		{
			begin = *(a + i);
		}
		else
		{
			end = *(a + i);
		}
	}
	QuickSort_Recursion( a, begin, end);

}


/**
 *  @name        : void QuickSort(int *a,int size)
 *  @description : �������򣨷ǵݹ�棩
 *  @param       : ����ָ��a�����鳤��size
 */
void QuickSort(int* a, int size)
{

}


/**
 *  @name        : void QuickSort(int *a, int begin, int end)
 *  @description : �������������ţ�
 *  @param       : ����ָ��a���������begin�������յ�end
 */
int Partition(int* a, int begin, int end);


/**
 *  @name        : void CountSort(int *a, int size , int max)
 *  @description : ��������
 *  @param       : ����ָ��a�����鳤��size���������ֵmax
 */
void CountSort(int* a, int size, int max)
{
	int max = *a, min = *a;
	for (int i = 0; i < size; i++)
	{
		if (*(a + i) > max)
			max = *(a + i);
		if (*(a + i) < min)
			min = *(a + i);
	}
	int range = max - min + 1;
	int* b = (int*)malloc(range,sizeof(int));
	//ʹ����ʱ�����¼ԭʼ������ÿ�����ĸ���
	for (int i = 0; i < size; i++)
	{
		//ԭʼ������ֵ�ϼ�ȥmin�Ų������Խ������
		b[a[i] - min] += 1;
	}
	int j = 0;
	//����ͳ�ƽ�������¶�Ԫ�ؽ��л���
	for (int i = 0; i < range; i++)
	{
		while (b[i]--)
		{
			//��i��ֵ����min���ܻ�ԭ��ԭʼ����
			a[j++] = i + min;
		}
	}
}

/**
 *  @name        : void RadixCountSort(int *a,int size)
 *  @description : ������������
 *  @param       : ����ָ��a�����鳤��size
 */
void RadixCountSort(int* a, int size)
{

}


/**
 *  @name        : void ColorSort(int *a,int size)
 *  @description : ��ɫ����
 *  @param       : ����ָ��a��ֻ��0��1��2Ԫ�أ������鳤��size
 */
void ColorSort(int* a, int size)
{

}


/**
 *  @name        : ����
 *  @description : ��һ�������������ҵ���K��/С����
 *  @param       : ����ָ��a�����鳤��size
 */

#endif
