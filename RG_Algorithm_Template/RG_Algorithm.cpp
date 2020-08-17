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
	b = tmp;
}

void mySwap(float& a, float& b)
{
	float tmp = a;
	a = b;
	b = tmp;
}

void mySwap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
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
		swap(a[i], a[k]);// ����������������ԭ��Ӧ���Ǻ�c++�Դ���ͬ������ײ��
		// Ŷ�������ԭ����д��swapд�����ˡ�����
		/*int tmp = a;
		a = b;
		b = a;*/
		//mySwap(a[i], a[k]);
		//int tmp = a[i];
		//a[i] = a[k];
		//a[k] = tmp;
	}

}

void insertSort(int a[], int len, bool reverse)
{
	for (int i = 1; i < len; i++) {
		int j = i + 1, tmp = a[i]; // ��i+1��Ϊ�� ��--j
		if (reverse) {
			while (--j && tmp > a[j - 1]) {
				a[j] = a[j - 1]; // iǰ��ģ�j������������
			}
		}
		else {
			while (--j && tmp < a[j - 1]) {
				a[j] = a[j - 1];
			}
		}
		a[j] = tmp;
	}
}

void generateP(int index, int n, int p[], bool hashTabe[], int &count)
{// �ݹ麯��������ÿһ��������
	if (index == n + 1) {
		for (int i = 1; i <= n; i++) {
			printf("%d", p[i]);
		}
		printf("\n");
		count++;
		return;
	}
	for (int x = 1; x <= n; x++) {
		if (hashTabe[x] == false) {
			p[index] = x;
			hashTabe[x] = true;
			generateP(index + 1, n, p, hashTabe, count); // �������ݹ�
			hashTabe[x] = false; // ������ p[index]�������⣬��ԭhash��
		}
	}
}

int showFullPermutation(int n) // ���� ���� ����
{
	int* p = (int*)malloc(n+1 * sizeof(int)); // ��ΪҪȡ��n���±�
	bool* hashTabe = (bool*)malloc(n+1 * sizeof(bool));// ��ΪҪȡ��n���±�
	for (int i = 0; i <= n + 1; i++) {
		hashTabe[i] = false;
		p[i] = 0;//˳��Ҳ������������Ϊ0��
	}
	int count = 0;// ��ʼҪ��Ϊ0������1����Ϊѭ�����һ�� ��ʹ��������һ�����У���Ҫ����count++
	generateP(1, n, p, hashTabe, count);// ���� �ݹ麯��
	return count;
}

int binarySearch(int a[], int n, int element)
// n Ϊ����Ԫ�ظ�����elementΪ�����ҵ�Ԫ�أ��ҵ��򷵻����������򷵻�-1
// a[]Ҫ�������������
{
	int left = 0, right = n - 1;
	while (left <= right) {
		int mid = (right - left) / 2;
		if (element < a[mid])
			right = mid - 1;
		else if (element > a[mid])
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}
