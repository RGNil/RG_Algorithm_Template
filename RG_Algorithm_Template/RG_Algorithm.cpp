#include "RG_Algorithm.h"

void showArray(int a[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void mySwap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = a;
}

void mySwap(float& a, float& b)
{
	float tmp = a;
	a = b;
	b = a;
}

void mySwap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = a;
}

// �������¶���Ĭ�ϲ����� �����Ҫ����������ֵ����Ӧ��Ĭ�ϲ������ա�
// Ҳ������ ͷ�ļ��� ������Ĭ�ϲ�����ʵ���ļ��� ��Ĭ�ϲ�������
void selectSort(int a[], int len, bool reverse) {// reverseĬ��Ϊfalse����������
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
		//swap(a[i], a[k]);// ����������������ԭ������Ǻ�c++�Դ���ͬ������ײ��
		mySwap(a[i], a[k]);
		//int tmp = a[i];
		//a[i] = a[k];
		//a[k] = tmp;
	}

}

void insertSort(int a[], int len, bool reverse)
{

}
