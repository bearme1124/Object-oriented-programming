#include<iostream>
#include<string.h>
using namespace std;

//OOP�� ���� - structure -> class

int main()
{
	struct student {
		int id;
		string name;
	};

	student s[10];
	student* ptr_s1;
	student s1 = { 201811020, "Kim" };

	ptr_s1 = &s1;
	
	cout << s[0].id << endl;
	cout << s1.id << endl;
	cout << (*ptr_s1).id << endl; //�ƴϸ� �� ���� �� .id
	cout << ptr_s1->id << endl; //�ּҸ� �ٷ� ����ϸ� ->
	//string�� 28byte
	cout << sizeof(student) << endl;

	int* n = new int[10]{ 404 , 1, 2, 3, };
	cout << *n << endl;
	cout << *(n+1) << endl;
	delete[] n;



	return 0;
}