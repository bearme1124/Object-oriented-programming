/*
Local Variable : �Լ� ��
Global Variable : ��� �Լ� / ���� �� ����
Static Variable : �Լ� �� / ���� �� ���� ������ ��������
*/

#include <iostream>
using namespace std;

double g_count = 0;

//void�� return���� �ʿ����� ���� �� ���
void counter() {
	static int iCount = 0;
	//����!!!!!!!!!!!!!!!!!
	//int iCount = 0;�� �ٸ����� �����ΰ�?
	//Answer : iCount�� ���簡 �������!!!!!!
	//��, global �ϰ� �������� �ʾƵ� static�� ���, global�� ������ ���.

	iCount++;
	g_count = iCount;
	cout << iCount << endl;
}
int main()
{
	counter();
	counter();
	counter();
	cout << g_count << endl;
	//cout << iCount << endl;
	return 0;
}

//��ó����, namespace �ٽ� ���� �ʿ�!!!!!!!!