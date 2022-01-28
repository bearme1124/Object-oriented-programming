#include<iostream>
using namespace std;


//������ �����Ǿ� �ִ� operator���� overloading�غ���.
/*
���� ���, +�� �ٸ� �ǹ̷� ����ϰ� �ʹ�.
Student s1, s2; s1+s2�� �ǹ̸� �ο��ϰ� ���� ���̴�.
*/

//syntax
//@�� �츮�� ���ϴ� operator�� �ִ� ���̴�.
/*
ex1 binary operator
	a.operator+(b)
	operator+(a, b)
ex2 postfix operator
	a.operator++(int) -> ������ int�� �Է��Ѵ�.
	operator++(a, int)
ex3 prefix operator
	a.operator++()
	operator++(a)
*/

//class Complex�� ���� + operator�� overloading�� ���̴�.
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

	//operator overloading +
	Complex operator+(const Complex& c2);
	//�ٸ� type�� ���غ���
	Complex operator+(int r);
	Complex operator+(double r);
	//double + Complex�� ���, double�� �տ� ������ �� friend�� �̿��� global�ϰ� �����Ѵ�.
	friend Complex operator+(double r, const Complex& c);

	//postfix�� ���
	Complex operator++(int dummy);
	//prefix�� ���
	Complex& operator++();
};
Complex::Complex(int r, int i) {
	m_r = new int(r);
	m_i = new int(i);
}
Complex::~Complex() {
	if (!m_r) delete m_r;
	if (!m_i) delete m_i;
	m_r = m_i = nullptr;
}
Complex::Complex() : Complex(0, 0) { }
Complex::Complex(int r)
	: m_r{ new int(r) }, m_i{ new int(0) } { }
Complex::Complex(const Complex& rhs) : Complex(*rhs.m_r,
	*rhs.m_i) { }
void Complex::print() const {
	cout << *m_r << (*m_i < 0 ? "" : "+") << *m_i << "j" << endl;
}

//operator overloading implementation
Complex Complex::operator+(const Complex& c2) {
	Complex result;
	*(result.m_r) = *(m_r)+*(c2.m_r);
	*(result.m_i) = *(m_i)+*(c2.m_i);
	return result;
}
Complex Complex::operator+(int r) {
	Complex result;
	*(result.m_r) = *(m_r)+r;
	*(result.m_i) = *(m_i);
	return result;
}
Complex Complex::operator+(double r) {
	//�״�� ����غ� ���̴�.
	return Complex(((int)r) + *(m_r), *(m_i));
}
//'complex::'ǥ���� ������ ����!!
Complex operator+(double r, const Complex& c) {
	Complex result((int)r + *(c.m_r), *c.m_i);
	return result;
}

//prefix�� ���
Complex& Complex::operator++() {
	(*m_r)++;
	return *this;
}
//postfix�� ���
Complex Complex::operator++(int dummy) {
	Complex ret(*this);
	(*m_r)++;
	return ret;
}
int main()
{
	Complex c1;
	Complex c2(34, 65);
	Complex c3(-3, 1);
	Complex c4;

	c1.print();
	c1 = c2 + c3;
	c1.print();

	c1 = c1 + 5.35;
	c1.print();

	c4 = 1.24 + c1;
	c4.print();

	Complex temp1;
	temp1 = ++c4;
	temp1.print();
	c4.print();

	Complex temp2;
	temp2 = c4++;
	temp2.print();
	c4.print();
	return 0;
} 