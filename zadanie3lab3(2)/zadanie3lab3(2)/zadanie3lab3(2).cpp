

#include <iostream>
using namespace std;

int main()
{
	int n, i = 1;
	float liczba_punktow, suma = 0;
	cout << "Podaj n: ", cin >> n;

	if (n > 0&& n<=100 ) {
		while (i <= n) {
			cout << "Podaj liczbe punktow: ", cin >> liczba_punktow;
			if (liczba_punktow <= 100 && liczba_punktow >= 0) {
				suma += liczba_punktow;
				i++;
				continue;
			}
			
			continue;
		}
		cout << "srednia liczba punktow: " << suma / n << endl;
		
	}
	
	






}

