#include <stdio.h>
#include <string.h>
#include <iostream>
#include "StraightInsertSort1.h"
#include "StraightInsertSort2.h"
#include "BubbleSort.h"
#include "FastSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
using namespace std;
// �������򷽷�����
int main()
{
	int Array[] = {49,38,65,97,76,13,27,49};

	// ֱ������
	cout<< "ֱ������"<<endl;
	int A1[sizeof(Array)];
	memcpy(A1,Array,sizeof(Array));
	Straight_Insert_Sort1(A1);

	// ֱ������-ʡ�ڴ棬ֱ����
	cout<< "ֱ�����򷨡���ʡ�ڴ��"<<endl;
	int A2[sizeof(Array)];
	memcpy(A2,Array,sizeof(Array));
	Straight_Insert_Sort2(A2); 

	// ��������-ð������
	cout<< "ð������"<<endl;
	int A3[sizeof(Array)];
	memcpy(A3,Array,sizeof(Array));
	Bubble_Sort(A3); 

	// ��������
	cout<< "��������" <<endl;
	int A4[sizeof(Array)];
	memcpy(A4,Array,sizeof(Array));
	int high = sizeof(Array)/sizeof(Array[0])-1;
	Fast_Sort(A4,0,high); 
	cout<<""<<endl;

	// ������
	cout<< "������"<<endl;
	int A5[sizeof(Array)];
	memcpy(A5,Array,sizeof(Array));
	Heap_Sort(A5); 
	cout<<""<<endl;

	// �鲢����
	cout<< "�鲢����"<<endl;
	int A6[sizeof(Array)];
	memcpy(A6,Array,sizeof(Array));
	Merge_sort(A6); 

	getchar();
	return 0;
}

