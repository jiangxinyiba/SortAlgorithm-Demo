#include <stdio.h>
#include <iostream>
#include "StraightInsertSort2.h"
using namespace std;
#define size 8
#define TRUE 1
#define FALSE 0

// 直接插入排序法，省内存版[升序]
void Straight_Insert_Sort2(int A[])
{
	int i;
	int j;
	int k;

	for(i=1; i<size; i++ )
	{
		int temp = A[i];        // 每次插入的项表示为temp
		// 插入的项与已排序数组的最后一位比较
		for(j=i-1; temp<A[j]; j-- )
		{
			A[j+1] = A[j];	    // 若小于，则将A0[j]置于最后		 
		}	
		A[j+1] = temp;          // 若大于，则将temp置于最后，内层循环结束；
		// 输出每次排序后的结果
		cout<< "第" << i << "次排序后的结果：";
		for(k=0; k<size; k++ )
			cout << A[k] <<" " ;
		cout <<endl;
	}
	cout<<""<<endl;
	//return 0;
};