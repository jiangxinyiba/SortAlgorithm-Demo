#include <stdio.h>
#include <iostream>
#include "BubbleSort.h"
using namespace std;
#define size 8
#define TRUE 1
#define FALSE 0

// ð������[����]
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
		flag = FALSE;    //���ڲ�û�л�λ�����ʾ���꣬�ڲ��������ѭ��
		// ��������Ƚϣ���������
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
		// ���ÿ�������Ľ��
		cout<< "��" << i0 << "�������Ľ����";
		for(k=0; k<size; k++ )
			cout << A[k] <<" " ;
		cout <<endl;
	}
	cout<<""<<endl;
	//return 0;
};