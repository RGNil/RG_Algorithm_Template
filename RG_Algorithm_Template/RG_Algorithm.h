#pragma once
#include<cstdio>
#include<cstdlib>

void showArray(int a[], int len);

void mySwap(int& a, int& b);
void mySwap(float& a, float& b);
void mySwap(double& a, double& b);

void selectSort(int a[], int len, bool reverse = false);
void insertSort(int a[], int len, bool reverse = false);

// �㷨�ʼ� ���ϸ��� ����ȫ���� ��ʵ�ַ���
void generateP(int index, int n, int p[], int hashTabe[], int &count);
int showFullPermutation(int n);
