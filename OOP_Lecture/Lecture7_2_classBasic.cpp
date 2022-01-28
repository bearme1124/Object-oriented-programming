// object�� class�� instance�̴�
// class�� object�� ǥ���ϴ� type�̴�.
#include<iostream>
#include<string.h>
using namespace std;

// class�� public - �ܺο��� ���� ������ ����.
// class�� privat - ���������� ����ϴ� ��.

class student {
private:
	string m_name;
	int* m_id; //���� ������ �������.

//constructor�� �ʱ� ������ ����!!!
public:
	student(); //constructor1 - self���� ����!
	student(int, string); //constructor2
	int get_id() { return *m_id; };
	string get_name();
	~student(); //destructor - ������ 1���̴�.
};
//�����Ѵ�. �ƹ� �Է��� ���� ��
student::student() {
	m_id = new int(201811020);
	m_name = "ABC";
	cout << "Constructor test1" << endl;
}
//�����Ѵ�. id�� name�� �Էµ� ��
student::student(int id, string name) {
	m_id = new int(id);
	m_name = name;
	cout << "Constructor test2" << endl;
}
string student::get_name()
{
	return m_name;
}
student::~student() {
	delete m_id;
	cout << "Destructor called" << endl;
}

int main()
{
	student s1 = { 123, "Nonamed" };
	student* s2 = new student{ 201811020, "ABC" };
	cout << s1.get_id() << endl;
	cout << (*s2).get_id() << endl;
	cout << s1.get_name() << endl;
	delete s2;
	return 0;
}
