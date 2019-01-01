///////////////////////////////////////////////////////////////////
/* 代码参考此博客 https://www.cnblogs.com/chengxiao/p/6129630.html */
///////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <iostream>
#include "HeapSort.h"
using namespace std;
#define size 8
int flg = 0;
// 堆排序[升序]
void Heap_Sort(int A[]){
	//1.构建大顶堆
	for(int i=size/2-1;i>=0;i--)
	{//从第一个非叶子结点从下至上，从右至左调整结构
		adjustHeap(A,i,size);
	}
	//2.调整堆结构+交换堆顶元素与末尾元素
	for(int j=size-1;j>0;j--)
	{
		swap(A,0,j);//将堆顶元素与末尾元素进行交换
		adjustHeap(A,0,j);//重新对堆进行调整

		flg += 1;
		cout<< "第" << flg << "次排序后的结果：";
		for(int k=0;k<size;k++ )
			cout << A[k] <<" " ;
		cout <<endl;
	}
}

// 调整大顶堆（仅是调整过程，建立在大顶堆已构建的基础上）
void adjustHeap(int A[],int i,int length){
    int temp = A[i];//先取出当前元素i
    for(int k=i*2+1;k<length;k=k*2+1)
	{//从i结点的左子结点开始，也就是2i+1处开始
        if(k+1<length && A[k]<A[k+1])
		{//如果左子结点小于右子结点，k指向右子结点
            k++;
        }
        if(A[k] >temp)
		{//如果子节点大于父节点，将子节点值赋给父节点（不用进行交换）
            A[i] = A[k];
            i = k;
        }
		else
		{
            break;
        }
    }
    A[i] = temp;//将temp值放到最终的位置
}

// 交换元素
void swap(int A[],int a ,int b)
{
	int temp=A[a];
	A[a] = A[b];
	A[b] = temp;
}