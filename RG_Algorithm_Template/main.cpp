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

void isInArray(int ele, int result) {
	if (result == -1)
		printf("element %d is not in the array!\n", ele);
	else
		printf("element %d is in the array, index is %d !\n", ele, result);
	return;
}

void binarySearchTest() {
	int a[7] = { 7,131,1445,132,90,99,1 };
	insertSort(a, 7); //Ĭ���������дtrue���ǽ��򣬽���Ļ�binarySearch�ͻ����Ĭ����Ҫһ���������飩
	isInArray(99, binarySearch(a, 7, 99));
	isInArray(999, binarySearch(a, 7, 999));

	
}

int main() {
	//selectSort();
	//insertSortTest();
	//showFullPermutation(3);
	//printf("\n%d", showFullPermutation(5));
	binarySearchTest();
	return 0;
}