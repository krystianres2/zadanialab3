

#include <iostream>
using namespace std;
int main()
{
	int n, i=1;
	float liczba_punktow, suma=0;
		cout << "Podaj n: ", cin >> n;

		if (n > 0) {
			while (i <= n) {
				cout << "Podaj liczbe punktow: ", cin >> liczba_punktow;

				suma += liczba_punktow;
				i++;
				
			}
			cout << "srednia liczba punktow: " << suma / n << endl;
		}
		else {
			cout << "n musi byc dodatnie" << endl;
		}
	}














