//Lecture 4

#include<iostream>
using namespace std;

//�Լ��� �����Ѵٸ�, �ؿ� �ᵵ �����ϴ�.
double calArea(int = 0); 
//���� �̸� �Ƚᵵ ����.
//parameter�� �̸� ������ �� �ִ�.

int main() {
	int iVal(0); double dVal{ 0 };
	cout << "Enter the radius? ";
	cin >> iVal;
	dVal = calArea(iVal);
	cout << dVal << endl;
	return 0;
}

double calArea(int radius)
{
	double dVal;
	dVal = radius * radius * 3.14;
	return dVal;
}