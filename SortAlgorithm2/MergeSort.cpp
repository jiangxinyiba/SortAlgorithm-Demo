///////////////////////////////////////////////////////////////////
/* 代码参考此博客 https://www.cnblogs.com/chengxiao/p/6194356.html */
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <iostream>
#include "MergeSort.h"
using namespace std;
#define size 8
int nMerge = 0;

// 归并排序[升序]
void Merge_sort(int A[])
{
	int *temp = new int[size](); //在排序前，先建好一个长度等于原数组长度的临时数组，避免递归中频繁开辟空间
    sort(A,0,size-1,temp);
}

void sort(int A[],int left,int right,int temp[])
{
	
    if(left<right){
        int mid = (left+right)/2;
        sort(A,left,mid,temp);//左边归并排序，使得左子序列有序
        sort(A,mid+1,right,temp);//右边归并排序，使得右子序列有序
		merge(A,left,mid,right,temp);//将两个有序子数组合并操作
		
		cout<< "第" << nMerge << "次合并后的结果：";
		for(int k=0;k<size;k++ )
			cout << A[k] <<" " ;
		cout <<endl;
    }
	
}

void merge(int A[],int left,int mid,int right,int temp[])
{
    int i = left;//左序列指针
    int j = mid+1;//右序列指针
    int t = 0;//临时数组指针
    while (i<=mid && j<=right)
	{
        if(A[i]<=A[j])
		{
            temp[t++] = A[i++];
        }
		else 
		{
            temp[t++] = A[j++];
        }
    }
    while(i<=mid)
	{//将左边剩余元素填充进temp中
        temp[t++] = A[i++];
    }
    while(j<=right)
	{//将右序列剩余元素填充进temp中
        temp[t++] = A[j++];
    }
    t = 0;
    //将temp中的元素全部拷贝到原数组中
    while(left <= right)
	{
        A[left++] = temp[t++];
    }
	nMerge++;
}
