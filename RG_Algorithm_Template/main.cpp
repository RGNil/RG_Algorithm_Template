#pragma warning(disable : 4996) // ����VS�İ�ȫ��ʩ��ʹscanf��ԭ��C��������
#include<cstdio>
#include "RG_Algorithm.h"

void selectSortTest() {
	int a[7] = { 7,131,1445,132,90,99,1 };
	selectSort(a, 7);
	showArray(a, 7);
}

int main() {
	selectSortTest();
	return 0;
}