#include<iostream>
using namespace std;

int main()
{
	int i;
	int	j;
	int	k = 0;
	int wartosc = 0;
	int	obliczenia = 1;

	cout << "-----------------------------" << endl;
	cout << "Podaj liczbe liczb pierwszych" << endl;
	cout << "-----------------------------" << endl;
	cin >> wartosc;

	for (i = 3; i > 0; i++)
	{
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0) {
				k = 1;
				break;
			}
		}
			if (k == 0) {
				cout << i << endl;
				obliczenia++;
			}
				k = 0;
				if (obliczenia == wartosc + 1)
					break;
	}
	return 0;
}