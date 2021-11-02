

#include <iostream>
using namespace std;

int main()
{
	int n, i = 1;
	float liczba_punktow, suma = 0;
	cout << "Podaj n: ", cin >> n;

	if (n > 0 && n <= 100) {
		do {
			cout << "Podaj liczbe punktow: ", cin >> liczba_punktow;
			if (liczba_punktow <= 100 && liczba_punktow >= 0) {
				suma += liczba_punktow;
				i++;
				cout << "srednia liczba punktow: " << suma / n << endl;
				continue;
			}continue;
		} while (i <= n);
			
		
	}
	

	


}

