#include <stdio.h>
#include <iostream>
#include "StraightInsertSort1.h"

using namespace std;
#define size 8
#define TRUE 1
#define FALSE 0

void Straight_Insert_Sort1(int A[])
{
	int i;
	int j;
	int k;
	int *A_sort = new int[size]();
	A_sort[0] = A[0];		
	for(i=1; i<size; i++)
	{
		bool Flag = FALSE;
		int temp = A[i];
		for(j=i-1; j>=0; j--)
		{// �����������������������һλ�Ƚ�
			// �����ڣ������������С�������ڵ����ڶ�λ�����һλ���ƣ��Դ�����
			if(Flag)
			{
				break;
			}
			if(A_sort[j]<temp)
			{
				A_sort[j+1] = temp;
				Flag = TRUE;
			}
			else
			{
				A_sort[j+1] = A_sort[j];
				A_sort[j] = temp;
			}
		}
		// ���ÿ�������Ľ��
		cout<< "��" << i << "�������Ľ����";
		for(k=0;k<size;k++ )
			cout << A_sort[k] <<" " ;
		cout <<endl;
	}
	cout<<""<<endl;
	//return 0;
};