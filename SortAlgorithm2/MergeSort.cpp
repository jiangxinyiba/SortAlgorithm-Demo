///////////////////////////////////////////////////////////////////
/* ����ο��˲��� https://www.cnblogs.com/chengxiao/p/6194356.html */
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <iostream>
#include "MergeSort.h"
using namespace std;
#define size 8
int nMerge = 0;

// �鲢����[����]
void Merge_sort(int A[])
{
	int *temp = new int[size](); //������ǰ���Ƚ���һ�����ȵ���ԭ���鳤�ȵ���ʱ���飬����ݹ���Ƶ�����ٿռ�
    sort(A,0,size-1,temp);
}

void sort(int A[],int left,int right,int temp[])
{
	
    if(left<right){
        int mid = (left+right)/2;
        sort(A,left,mid,temp);//��߹鲢����ʹ��������������
        sort(A,mid+1,right,temp);//�ұ߹鲢����ʹ��������������
		merge(A,left,mid,right,temp);//����������������ϲ�����
		
		cout<< "��" << nMerge << "�κϲ���Ľ����";
		for(int k=0;k<size;k++ )
			cout << A[k] <<" " ;
		cout <<endl;
    }
	
}

void merge(int A[],int left,int mid,int right,int temp[])
{
    int i = left;//������ָ��
    int j = mid+1;//������ָ��
    int t = 0;//��ʱ����ָ��
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
	{//�����ʣ��Ԫ������temp��
        temp[t++] = A[i++];
    }
    while(j<=right)
	{//��������ʣ��Ԫ������temp��
        temp[t++] = A[j++];
    }
    t = 0;
    //��temp�е�Ԫ��ȫ��������ԭ������
    while(left <= right)
	{
        A[left++] = temp[t++];
    }
	nMerge++;
}
