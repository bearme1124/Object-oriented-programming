#include<iostream>
using namespace std;

//�ٵ� ������� ��??

void fun(int arr[], unsigned int n) // SAME AS void fun(int *arr)
{
	cout << "Array size inside fun() is :" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << arr[0] << endl;
	arr[0] = 9;
}

int main()
{
	//double�� ��� 8byte�� ������
	double arr[3];
	double* ptr;
	ptr = arr;
	cout << &arr[0] << endl;
	cout << arr << endl;
	cout << ptr << endl;
	cout << endl;

	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	unsigned int n = sizeof(arr2) / sizeof(arr2[0]);
	cout << "Array size inside main() is :" << n << endl;

	//�Ѱ��� �� �����ͷ� �ѱ�ٴ� �� ���ص�
	//���� �� arr[]�ε� ��� �����͸� �޴´ٴ� ����????
	//A. �� ������ ������ ��ü�� �迭�� ����Ű��, �� ������ �迭�� �Է��ϸ� �迭 ��ü�� �Ű����� ��.
	fun(arr2, n);
	cout << arr2[0] << endl;

	return 0;
}