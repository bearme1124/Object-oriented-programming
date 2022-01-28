#include<iostream>
using namespace std;

//���α׷��� ���� �߿� �������� �޸𸮸� �Ҵ��ϴ� ����� �˾ƺ���.

//stack�� compile time�� �Ҵ� - �Լ��� ȣ��
//heap�� run-time�� �Ҵ� - �������� �Ҵ��� ��

int foo()
{
	return 5; 
}
double goo()
{
	return 60.1;
}
int hoo(int n)
{
	return n;
}

int main()
{
	int* ptr;
	ptr = new int; //new�� �̿��� �Ҵ�
	//�� 4byte�� heap�� �Ҵ�ǰ�, �� �Ҵ�� ���� 123�� ����.
	*ptr = 123;
	cout << "value of *ptr : " << *ptr << endl;
	delete ptr; //delete�� �̿��� ����

	/*
	int x;
	int* ptr1 = &x;
	delete ptr1; 
	compile time���� ����X, runtime�� ���� �߻�
	*/

	int* ptr2;
	ptr2 = new int[10];
	//ptr2[0] = 0;
	for (int i = 0; i < 10; i++)
		*(ptr2 + i) = i;
	for (int i = 0; i < 10; i++)
		cout << ptr2[i] << " ";
	//delete ptr2;
	delete[] ptr2;
	cout << endl;

	//memory leaking
	//���� �������� ������, ������� �ʴ� memory�� ��ƸԴ´�.
	//Dangling pointer
	//������ �Ŀ� �����͸� �ҷ�����, run time ������ �߻��Ѵ�.
	int* ptr3 = new int{ 40 };
	delete ptr3;
	// *ptr3 = 10;
	// ��, �߿��� ���� �Ҵ��� ������ ���Ÿ� �ؾ� �Ѵ�!!!!!!!
	cout << endl;
	//---------pointer ��--------------
	
	//Reference Type
	//� ������ �����ϸ�, �ٸ� ������ ���� ������ ������ �� �ִ�.
	int iNum = 10;
	int& rNum = iNum; //�����Ϳ� ����� ����, �׷��� ������ �ٸ�.
	int* pNum = &iNum;
	cout << "value:" << iNum << " address:" << &iNum << endl;
	cout << "value:" << rNum << " address:" << &rNum << endl;
	cout << "value:" << *pNum << " address:" << pNum << endl;
	cout << endl;

	//Function Pointer - �Լ� ������. �Լ��� �ּҸ� �����´�.
	int(*ifcnPtr)() { &foo }; // function pointer to foo
	double(*dfcnPtr)() { &goo };
	int(*pfcnPtr)(int);
	pfcnPtr = &hoo;
	cout << ifcnPtr() << endl;
	cout << dfcnPtr() << endl;
	cout << pfcnPtr(8) << endl;
	//���� ��� ���ϱ�? �ý��ۿ��� �̺�Ʈ�� ���� ��ƾ�� ������ ��.


	//������ �������� ������ �ּҰ� ���� �Ѵ�!! &A
	//const�� ����� ����, ������ ������ ������ �����Ѵ�.
	//r side�� ������ �ʴ� const char* s = ('dkd')�� ����
	return 0;
}