#pragma once

#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

#include<stdlib.h>

/**
 *  @name        : void insertSort(int *a,int n);
 *  @description : 插入排序算法
 *  @param       : 数组指针 a, 数组长度 n
 */
void insertSort(int* a, int n)
{
	int i ;
	int j ;
	int flag;
	for (i = 0; i < n; i++)
	{
		while (*(a + i) > 0 && *(a+i)>flag)		 //排好序的数组大于我们要排的那个数
		{
			*(a + i+1) = *(a + i);		//数组往后移一个
		}
		flag = *(a + i);				//找到自己的位置，进入位置
	}
}


/**
 *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
 *  @description : 归并排序（合并数组）
 *  @param       : 数组指针a，数组起点begin，数组中点mid，数组终点end，承载数组指针temp
 */
void MergeArray(int* a, int begin, int mid, int end, int* temp)
{
	begin = *a;
	temp = (int*)malloc(n * sizeof(int));
	if (temp)							//分配成功
	{

	}
}


/**
 *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
 *  @description : 归并排序
 *  @param       : 数组指针a，数组起点begin，数组终点end，承载数组指针temp
 */
void MergeSort(int* a, int begin, int end, int* temp)
{


}


/**
 *  @name        : void QuickSort(int *a, int begin, int end);
 *  @description : 快速排序（递归版）
 *  @param       : 数组指针a，数组起点begin，数组终点end
 */
void QuickSort_Recursion(int* a, int begin, int end)
{
	int i = 0;
	int len = begin - end;						//数组长度
	for (i = 0; *(a + i); i++)
	{
		begin  =  (int*) malloc(int);				//给左边开辟一个空间
		end =  (int*) malloc(int);					//给右边开辟一个空间
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
 *  @description : 快速排序（非递归版）
 *  @param       : 数组指针a，数组长度size
 */
void QuickSort(int* a, int size)
{

}


/**
 *  @name        : void QuickSort(int *a, int begin, int end)
 *  @description : 快速排序（枢轴存放）
 *  @param       : 数组指针a，数组起点begin，数组终点end
 */
int Partition(int* a, int begin, int end);


/**
 *  @name        : void CountSort(int *a, int size , int max)
 *  @description : 计数排序
 *  @param       : 数组指针a，数组长度size，数组最大值max
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
	//使用临时数组记录原始数组中每个数的个数
	for (int i = 0; i < size; i++)
	{
		//原始数组数值上减去min才不会出现越界问题
		b[a[i] - min] += 1;
	}
	int j = 0;
	//根据统计结果，重新对元素进行回收
	for (int i = 0; i < range; i++)
	{
		while (b[i]--)
		{
			//将i的值加上min才能还原到原始数据
			a[j++] = i + min;
		}
	}
}

/**
 *  @name        : void RadixCountSort(int *a,int size)
 *  @description : 基数计数排序
 *  @param       : 数组指针a，数组长度size
 */
void RadixCountSort(int* a, int size)
{

}


/**
 *  @name        : void ColorSort(int *a,int size)
 *  @description : 颜色排序
 *  @param       : 数组指针a（只含0，1，2元素），数组长度size
 */
void ColorSort(int* a, int size)
{

}


/**
 *  @name        : 自拟
 *  @description : 在一个无序序列中找到第K大/小的数
 *  @param       : 数组指针a，数组长度size
 */

#endif
