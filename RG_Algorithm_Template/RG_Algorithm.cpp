#include "RG_Algorithm.h"

void showArray(int a[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = a;
}

void swap(float& a, float& b)
{
	float tmp = a;
	a = b;
	b = a;
}

void swap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = a;
}

void selectSort(int a[], int len, bool reverse = false) {// reverseĬ��Ϊfalse����������
	for (int i = 0; i < len; i++) {// len�˲���
		int k = i;// k��¼iλ�ú��������е�maxֵ�±꣬��ʼ��Ϊi
		for (int j = i; j < len; j++) {
			if (reverse) {// ����
				if (a[k] < a[j])
					k = j;
			}
			else {
				if (a[k] > a[j])
					k = j;
			}
		}
		swap(a[i], a[k]);
	}

}