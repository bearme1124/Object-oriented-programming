/*Example*/
#include<iostream>
//������� ���� iostream�̶�� ��������� ����� ����.

using namespace std;
//c++ standard library

int main()
{
	/*
		�Լ��� �����̸�, �����̴�.
		�׻� � ���� return�� �ؾ��Ѵ�.
		���� �Լ��� scope�� �����ؾ� �Ѵ�.
	*/

	// variable�� � ����.
	// ������ type�� �ٸ� size�� ������.
	// � range�̳Ŀ� ���� �ٸ� type�� ������.

	// short, int, long, long long, float, double, long double
	// long long 8byte double 8byte

	// precison�� �󸶳� ���� ��ȿ���ڸ� ǥ������ �� �ִ°��̰�,
	// cout�� ���� precision=6 6�ڸ��� ��� �����ϴ�.
	// 1byte = 8bit

	cout << 5.0 << '\n';
	cout << 6.7f << '\n';
	cout << 9876543.21 << '\n'; // 9.8765e+06
	cout << endl;

	char a = 65, b = 66, c = 67, myGrade = 'B';
	cout << a; //ASCII Table 65 = A
	cout << b; //ASCII Table 66 = B
	cout << c; //ASCII Table 67 = C
	cout << myGrade << endl;
	cout << endl;

	// sizeof() �Լ���, type�� �޸� byte�� ����Ѵ�.
	cout << "char type: " << sizeof(char) << endl;
	cout << "int type: " << sizeof(int) << endl;
	cout << "short type: " << sizeof(short) << endl;
	cout << "long type: " << sizeof(long) << endl;
	cout << "long long type: " << sizeof(long long) << endl;
	cout << "float type: " << sizeof(float) << endl;
	cout << "double type: " << sizeof(double) << endl;
	cout << endl;

	// 'auto' type�� ������� �ʾƵ� �����Ϸ����� ������
	int i = 20;
	//auto a = i;
	//auto b = 10.5;

	// String literals
	// �� �ʿ� ����, �ƽ�Ű�ڵ常 �˸� ��

	auto s0 = "hello"; // const char*
	auto s1 = u8"hello"; // const char*, encoded as UTF-8
	auto s2 = L"hello"; // const wchar_t*
	auto s3 = u"hello"; // const char16_t*, encoded as UTF-16
	auto s4 = U"hello"; // const char32_t*, encoded as UTF-32
	cout << "s0 : " << s0 << endl;
	cout << "s1 : " << s1 << endl;
	cout << "s2 : " << s2 << endl;
	wcout << "s2 : " << s2 << endl;
	cout << "s3 : " << s3 << endl;
	cout << "s4 : " << s4 << endl;
	cout << endl;

	int inum1 = 10.5;
	int inum2(10.5);
	int inum3{ 20 }; // �� ��� improper conversion ����, ���� �߻���Ŵ
	// int inum3{ 20.5 }; - error

	//�߿�!!!
	//Implicit Type Conversion - ���������� �ٲ�
	int x = 10;
	char y = 'a';
	x = x + y; //�����ϱ�???
	//y�� �ƽ�Ű�ڵ忡 ���� int�� �ٲ�. 'a' = 97
	float z = x + 1.0;
	//x�� float�� �ٲ�.
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << endl;

	//Explicit Type Conversion
	//syntax : (type)expression
	double x1 = 1.2;
	int sum = (int)x1 + 1;
	cout << "Sum = " << sum << endl;
	cout << endl;

	//costant ���
	const double gravity{ 9.8 };
	// gravity = 10; - error
	//right side ��ȭ ����.

	//Bitwise Operator - ������ �̵�.
	//�Ѿ�� 0��.
	int iVal = 4;
	cout << iVal << (iVal >> 3) << endl;
	cout << endl;

	// ����!!!!!!!!!!!!!!!
	int x2 = 1, y2 = 2;
	cout << (++x2 > 2 && ++y2 > 2) << endl; // 0
	cout << "x=" << x2 << ", y=" << y2 << endl; //2 2
	cout << (++x2 > 2 || ++y2 > 2) << endl; // 1
	cout << "x=" << x2 << ", y=" << y2 << endl; //3 2

	int x3 = 1, y3 = 2;
	cout << (++x3 > 2 & ++y3 > 2) << endl; // 0
	cout << "x=" << x3 << ", y=" << y3 << endl; //2 3
	cout << (++x3 > 2 | ++y3 > 2) << endl; // 1
	cout << "x=" << x3 << ", y=" << y3 << endl; //3 4

	return 0;
	
}