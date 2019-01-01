///////////////////////////////////////////////////////////////////
/* ����ο��˲��� https://www.cnblogs.com/chengxiao/p/6129630.html */
///////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <iostream>
#include "HeapSort.h"
using namespace std;
#define size 8
int flg = 0;
// ������[����]
void Heap_Sort(int A[]){
	//1.�����󶥶�
	for(int i=size/2-1;i>=0;i--)
	{//�ӵ�һ����Ҷ�ӽ��������ϣ�������������ṹ
		adjustHeap(A,i,size);
	}
	//2.�����ѽṹ+�����Ѷ�Ԫ����ĩβԪ��
	for(int j=size-1;j>0;j--)
	{
		swap(A,0,j);//���Ѷ�Ԫ����ĩβԪ�ؽ��н���
		adjustHeap(A,0,j);//���¶Զѽ��е���

		flg += 1;
		cout<< "��" << flg << "�������Ľ����";
		for(int k=0;k<size;k++ )
			cout << A[k] <<" " ;
		cout <<endl;
	}
}

// �����󶥶ѣ����ǵ������̣������ڴ󶥶��ѹ����Ļ����ϣ�
void adjustHeap(int A[],int i,int length){
    int temp = A[i];//��ȡ����ǰԪ��i
    for(int k=i*2+1;k<length;k=k*2+1)
	{//��i�������ӽ�㿪ʼ��Ҳ����2i+1����ʼ
        if(k+1<length && A[k]<A[k+1])
		{//������ӽ��С�����ӽ�㣬kָ�����ӽ��
            k++;
        }
        if(A[k] >temp)
		{//����ӽڵ���ڸ��ڵ㣬���ӽڵ�ֵ�������ڵ㣨���ý��н�����
            A[i] = A[k];
            i = k;
        }
		else
		{
            break;
        }
    }
    A[i] = temp;//��tempֵ�ŵ����յ�λ��
}

// ����Ԫ��
void swap(int A[],int a ,int b)
{
	int temp=A[a];
	A[a] = A[b];
	A[b] = temp;
}