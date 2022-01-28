#include<iostream>
using namespace std;

int main()
{
	char c = 'A';
	char* ptr_c = &c;
	cout << "ptr_c : " << ptr_c << endl;
	//�ּҴ� ��Ȳ�� ���� �����Ϸ� ������ �˾Ƽ� ������.

	//pointer �� array ���� ����;
	char str[] = "Hello";
	char* ptr_str = str;
	cout << "ptr_str : " << ptr_str << endl; //�ּҰ� �ƴ� ���ڿ�
	cout << "*ptr_str : " << *ptr_str << endl; //�迭�� ù���� element
	cout << endl;

	int studentID[][3] = { {1 }, {4, 5, 6} };
	cout << studentID[0][0] << endl;
	cout << studentID[0][1] << endl;
	cout << studentID[0][2] << endl;
	cout << studentID[1][0] << endl;
	cout << studentID[1][1] << endl;
	cout << studentID[1][2] << endl;
	//char = 1byte, int = 4byte
	cout << sizeof(studentID) << endl;
	cout << sizeof(studentID[0]) << endl;
	cout << endl;

	//!!!!!!!!!!!!!!!!!
	//array�̸��� �����ͷ� ���� �� �ִ�.
	int iNum = 0;
	int iNums[3] = { 1, 2, 3 };
	
	int* pNum = &iNum;
	int* pNums1 = &iNums[0];
	int* pNums2 = iNums; //�̷��� �迭�� �̸��� �����ͷ� ���� �� �ִ�.
	cout << pNums1 << endl << pNums2 << endl;
	cout << *pNums1 << endl << *pNums2 << endl;
	cout << iNums[1] << endl << pNums1[1] << endl << pNums2[1] << endl;
	//pNums1�� pNums2�� �������ε�, �̸� *�����ʰ� ���� ������ �� �ִ�.
	cout << endl;
	//!!!!!!!!!!!!!!!!!!!
	//�������� ����
	cout << pNums2 << endl; //&iNums[0]
	cout << pNums2 + 1 << endl; //&iNums[1]
	cout << pNums2 + 2 << endl; //&iNums[2]
	//�޸� ������� int 4byte�� ���̳�.

	//���� �� ���� ���ٴ� ��!!!!!!!!!!!!!!!!!!!
	cout << *pNums2 << " " << * (pNums2 + 1) << endl; //iNums[0] iNums[1]
	cout << pNums2[0] << " " << pNums2[1] << endl;
	cout << endl;

	// row: 2, col : 3
	cout << "****2-dim array and pointer****" << endl;
	cout << "�������� ���, �迭�� ġȯ�ϸ� ����!" << endl;
	int n[2][3] = { 1, 2, 3, 4, 5, 6 };
	cout << n << endl;
	cout << *n << endl;
	cout << n[0] << endl;
	cout << &n[0][0] << endl << endl;

	cout << n + 1 << endl; // ������ �ּ� + 1�� ����row + 1 �̴�.
	cout << n[1] << endl << endl;

	cout << *n + 1 << endl; //n[0][0]�� �ּ� + 1 = n[0][1]
	cout << &(n[0][1]) << endl << endl;

	cout << **n << endl;
	cout << n[0][0] << endl << endl;

	cout << **(n + 1) << endl;
	cout << n[1][0] << endl << endl;

	cout << *((*n) + 1) << endl;
	cout << n[0][1] << endl << endl;

	cout << *((*(n + 1)) + 1) << endl;
	cout << n[1][1] << endl << endl;

	return 0;
}