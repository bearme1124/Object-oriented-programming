#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	//char�� 1byte
	char str[20] = "Hello";
	char str2[] = "World";
	cout << strlen(str) << endl;
	cout << sizeof(str) << endl;

	strncat_s(str, str2, 4);
	//str�� str2�� 4���� �ٿ���!!!

	cout << str << endl;
	if (strcmp(str, "HelloWorld") == 0)
		cout << "OK" << endl;
	else
		cout << "Fail" << endl;
	char str01[] = "10";
	char str02[] = "20";
	cout << atoi(str01) * atof(str02) << endl;
}