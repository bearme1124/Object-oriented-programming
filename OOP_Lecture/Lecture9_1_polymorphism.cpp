#include<iostream>
using namespace std;

//�� ��ü���� �ٸ� ��ü�� ����� ��

//����, class ��ȭ���� 
/*
//static�� ��� class���� ������ ��.
//const�� ������ �Ұ����� ��Ȳ�� �ǹ�.
//friend�� private������ �������� �����ϱ� ���� ����ϴ� ��. main�Լ����� �����Ϸ���
*/

//polymorphism ������
/*
������ ���α׷�������, type�� ���� �ٸ��� �����ؾ� �� ��
������ �ٸ� ���α׷��� ������ �ʴ��� polymorphism�� �̿��Ͽ� ����.

1. function overloading
	sum�� ��� int+int, double+int, char+char�� ��찡 �����ϴ�.
	c++������, ���� �̸��� �Լ� ��input parameter�� ���ִ� ����������,
	return���� �ٸ� ���� overloading�� �� �� ����.
*/

//���, new int(r)�� �ϸ� �⺻������ nullptr�� �Ҵ�.

//���Ҽ� ���� class�Լ�
class Complex {
	int* m_r = nullptr; // real part
	int* m_i = nullptr; // imaginary part
public:
	Complex();
	Complex(int, int);
	Complex(int);
	~Complex();
	Complex(const Complex& rhs);
	void print() const;
};
Complex::Complex(int r, int i) {
m_r = new int(r);
m_i = new int(i);
}
Complex::~Complex() {
if (!m_r) delete m_r;
if (!m_i) delete m_i;
m_r=m_i=nullptr;
}
Complex::Complex() : Complex(0, 0) { }
Complex::Complex(int r) 
: m_r{ new int(r) }, m_i{ new int(0) } { }
Complex::Complex(const Complex& rhs) : Complex(*rhs.m_r, *rhs.m_i) { }
void Complex::print() const {
cout << *m_r << (*m_i < 0 ? "" : "+") << *m_i << "j" << endl;
}
int main()
{
	Complex c1;
	Complex c2(3);
	Complex c3(-3);
	Complex c4(c2);

	c1 = { 2, 3 };

	c1.print();
}
