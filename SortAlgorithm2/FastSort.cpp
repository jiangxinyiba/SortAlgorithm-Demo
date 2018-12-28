#include <stdio.h>
#include <iostream>
#include "FastSort.h"
using namespace std;
#define size 8
int flag = 0;

// ��������[����]
void Fast_Sort(int A[],int low,int high)
{
	if(low<high)
	{
		int pivotloc = Partition(A,low,high);
		flag += 1;
		cout<< "��" << flag << "�������Ľ����";
		for(int k=0;k<size;k++ )
			cout << A[k] <<" " ;
		cout <<endl;
		// ��ȷ��������λ֮ǰ�����ݽ�������
		Fast_Sort(A,low,pivotloc-1);
		// ��ȷ��������λ֮������ݽ�������
		Fast_Sort(A,pivotloc+1,high);
	}
};


int Partition(int A[],int low,int high)
{
	//int i=0;
	int k;
	int temp;
	temp = A[low];
	int pivotkey = A[low];
	while(low<high)
	{
		while (low<high && A[high]>=pivotkey)
		{
			--high;
		}
		A[low] = A[high];
		while (low<high && A[low]<=pivotkey)
		{
			++low;
		}
		A[high] = A[low];
	}
	A[low] = temp ;
	return low;
};