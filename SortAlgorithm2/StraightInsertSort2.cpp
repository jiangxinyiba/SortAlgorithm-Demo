#include <stdio.h>
#include <iostream>
#include "StraightInsertSort2.h"
using namespace std;
#define size 8
#define TRUE 1
#define FALSE 0

// ֱ�Ӳ������򷨣�ʡ�ڴ��[����]
void Straight_Insert_Sort2(int A[])
{
	int i;
	int j;
	int k;

	for(i=1; i<size; i++ )
	{
		int temp = A[i];        // ÿ�β�������ʾΪtemp
		// �����������������������һλ�Ƚ�
		for(j=i-1; temp<A[j]; j-- )
		{
			A[j+1] = A[j];	    // ��С�ڣ���A0[j]�������		 
		}	
		A[j+1] = temp;          // �����ڣ���temp��������ڲ�ѭ��������
		// ���ÿ�������Ľ��
		cout<< "��" << i << "�������Ľ����";
		for(k=0; k<size; k++ )
			cout << A[k] <<" " ;
		cout <<endl;
	}
	cout<<""<<endl;
	//return 0;
};