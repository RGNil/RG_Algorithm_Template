#pragma warning(disable : 4996) // ����VS�İ�ȫ��ʩ��ʹscanf��ԭ��C��������
#include<cstdio>
#include<iostream>
using namespace std;
#include "RG_Algorithm.h"

void selectSortTest() {
	int a[7] = { 7,131,1445,132,90,99,1 };
	selectSort(a, 7);
	showArray(a, 7);
}

void insertSortTest() {
	int a[7] = { 7,131,1445,132,90,99,1 };
	insertSort(a, 7, true);
	showArray(a, 7);
}

void bubbleSortTest() {
	int  a[7] = { 7,131,1445,132,90,99,1 };
}

int main() {
	//selectSort();
	insertSortTest();

	return 0;
}