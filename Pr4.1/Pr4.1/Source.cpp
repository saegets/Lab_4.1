// Lab_04_1.cpp
// Клімашевський Максим
// Лабораторна робота No 4.1
// Цикли.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k = 1, N, i;

	double S;

	cout << "N = "; cin >> N;

	S = 0;
	i = k;
	while (i <= N)
	{
		S += ( 1. / i + sqrt(1 + sin(i) * sin(i) ) );
		i++;
	}
	cout << S << endl;

	S = 0;
	i = k;
	do {
		S += (1. / i + sqrt(1 + sin(i) * sin(i)));
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (1. / i + sqrt(1 + sin(i) * sin(i)));
	}
	cout << S << endl;

	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (1. / i + sqrt(1 + sin(i) * sin(i)));
	}
	cout << S << endl;

	return 0;
}