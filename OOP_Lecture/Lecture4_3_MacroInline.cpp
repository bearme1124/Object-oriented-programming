//Macro and Inline Function�� �޸𸮸� ���� �Ҵ����� �ʴ´�.
//stack�� ��ũ�θ� ��Ƹ��� �ʴ´�.

#include <iostream>
using namespace std;

#define PI 3.14
#define Multi(x, y) x * y

inline int Multifly(int, int = 1);

int main()
{
	int a = Multi(3, 2);
	cout << a << endl;

	return 0;
}

int Multiply(int iNum1, int iNum2) {
	return iNum1 * iNum2;
}