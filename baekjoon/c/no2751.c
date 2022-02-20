#pragma warning(disable:4996)
#include<stdio.h>
#define MAX 1000000    // ������ ������ MAX ����
#define qSWAP(x, y) { int t = x; x = y; y = t; }  // ������ SWAP �Լ�
int N, arr[MAX]; // ������ ������ ������ �迭

void qSort(int* array, int left, int right) {
	int mLeft = left, mRight = right;
	int pivot = array[(left + right) / 2];

	while (mLeft <= mRight) {
		while (pivot > array[mLeft]) mLeft++;
		while (pivot < array[mRight]) mRight--;

		if (mLeft <= mRight) {
			qSWAP(array[mLeft], array[mRight]);
			mLeft++, mRight--;
		}
	}

	if (left < mRight) qSort(arr, left, mRight);
	if (mLeft < right) qSort(arr, mLeft, right);
}

int main() {
	int idx;

	// �Է�    
	scanf("%d", &N);
	for (idx = 0; idx < N; idx++) {
		scanf("%d", &arr[idx]);
	}

	qSort(arr, 0, N - 1);    // �迭 �ε��� 0 ~ N-1 ���� ����Ʈ


	// ���
	for (idx = 0; idx < N; idx++) {
		printf("%d ", arr[idx]);
	}

	return 0;
}