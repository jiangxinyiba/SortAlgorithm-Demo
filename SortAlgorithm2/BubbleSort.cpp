#include <stdio.h>
#include <iostream>
#include "BubbleSort.h"
using namespace std;
#define size 8
#define TRUE 1
#define FALSE 0

// 冒泡排序[升序]
void Bubble_Sort(int A[])
{
	int i;
	int j;
	int k;
	int temp;
	int i0 = 0;
	bool flag = TRUE;

	for(i=size-1; i>=1&&flag; --i )
	{
		i0 += 1;
		flag = FALSE;    //若内部没有换位，则表示排完，内部无需继续循环
		// 相邻两项比较，大的往后放
		for(j=0; j<i; j++)
		{
			if(A[j]>A[j+1])
			{
				temp = A[j];   
				A[j] = A[j+1];
				A[j+1] = temp;
				flag = TRUE;
			}
		}
		// 输出每次排序后的结果
		cout<< "第" << i0 << "次排序后的结果：";
		for(k=0; k<size; k++ )
			cout << A[k] <<" " ;
		cout <<endl;
	}
	cout<<""<<endl;
	//return 0;
};