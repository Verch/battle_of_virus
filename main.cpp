#include <iostream>

using namespace std;

int abc(int a, int b, int c)
{
	sum = a + b + c;
	return sum;
}

int main (){
	int a1, b1, c1, sum = 0;
	cout << "Print 3 numbers";
	cin >> a1 >> b1 >> c1;
	cout <<  abc(a1, b1, c1);
	return 0;
}
