#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(0, "");

	int d;//������
	int firstNum;//�1
	int n;

	cout << "d " << " firstNum " << " n " << endl;

	cout << "= " << "     =    " << " = " << endl;

	cin >> d >> firstNum >> n;

	int aN;//a n-��� ������

	aN = firstNum + (n-1) / d;

	int sumNProgres;
	
	sumNProgres = ((2*firstNum+(n-1)*d)/2)*n;//���� ������ n �����

	cout << " n-�� ����� ������� " << aN << endl << " ���� ������ n ����� " << sumNProgres;	
	return 0;
}