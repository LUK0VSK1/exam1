#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(0, "");

	int d;//різниця
	int firstNum;//a1
	int n;

	cout << "d " << " firstNum " << " n " << endl;

	cout << "= " << "     =    " << " = " << endl;

	cin >> d >> firstNum >> n;

	int aN;//a n-ого номера

	aN = firstNum + (n-1) / d;

	int sumNProgres;
	
	sumNProgres = ((2*firstNum+(n-1)*d)/2)*n;//сума перших n чисел

	cout << " n-го члена прогресії " << aN << endl << " сума перших n чисел " << sumNProgres;	
	return 0;
}
