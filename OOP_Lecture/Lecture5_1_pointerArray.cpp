//�޸� ������ ���� ������ ���̴�.
//�����Ϳ� ������ ������ �ּ�(adress)�� ������.

//variable ������ �����͸� �����ϴ� �ڽ�
//pointer �����ʹ� �����ε�, �޸� �ּҸ� �����ϴ� �ڽ��̴�.

#include<iostream>
using namespace std;

int main()
{
	//&�� ������ '�ּ�'�� ������
	//*�� �� �ּ��� '��'�� ������
	int studentID = 201811020;
	cout << "adress of ID : " << &studentID << endl;
	cout << "value at " << &studentID << " : " << *(&studentID) << endl;
	cout << endl;

	//�����ʹ� �ּҸ� �����ϴ� '����'�̴�.
	//!!!!!!!!!!null pointer ����!!!!!!!!!!!!!!!!! nullptr
	char* name{ 0 }; //charŸ���� �ּҸ� ����Ű�� ������ �����̸�, null�����̴�.
	//null pointer��  ����ϸ� error
	int iNum1 = 10;
	int* pNum1 = &iNum1;

	cout << "value:" << iNum1 << endl;
	cout << "its address : " << pNum1 << endl;
	*pNum1 = 20; //pNum1�� �ּ��� '��' ��, iNum1�� 20���� �ٲٰڴ�.
	cout << "Pointer Value : " << *pNum1 << endl;
	cout << "Pointer Value : " << iNum1 << endl;
	cout << "adress of Pnum1 : " << &pNum1 << endl;
	//������ ���� �����̸�, �� ������ ����Ű�� '�ּ�'�� �ִ�!
	cout << endl;

	//char�� �����ʹ�, 'char ����'�� �ּҸ��� ������ �� �ִ�.,
	char a = 'A';
	name = &a;
	cout << "adress of name : " << name << endl;
	cout << "value of name : " << *name << endl;
	cout << endl;

	//array
	//charŸ���� ���, ���� �������� "\0"�� �־�� �����ٰ� �ν�.
	char n[10];
	n[0] = 'J';
	n[1] = 'o';
	n[2] = 'h';
	n[3] = 'n';
	cout << n << endl;
	//��� 1
	n[4] = '\0';
	cout << n << endl;
	cout << endl;

	//��� 2 : ������ �� element���� �������� ������, �������� \0�Ҵ�. 
	//End Of String
	char m[] = "John";
	cout << m[3] << endl;
	cout << m << endl;
	//�׷��� ������ �� �迭�� ������ = 5
	cout << sizeof(m) << endl;

	return 0;
}

//Swap Operation
//���� ����, ��num1num2�� ī�Ǹ� �Լ� ������ �ٲ�� ��.
void intSwap1(int num1, int num2)
{
	int temp{ num1 };
	num1 = num2;
	num2 = temp;
}
//�׷��� ���� ���� ���� �ּҸ� �Ѱ��־��� ������, �ּ� �� ���� �ٲٹǷ� ���� inum1inum2�� ���� �ٲ�
//�����͵� �����̴�. ������ �ּҰ� ����Ǵ� ���̴�.!!!!!1
void intSwap2(int* num1, int* num2)
{
	int temp{ *num1 };
	*num1 = *num2;
	*num2 = temp;
}