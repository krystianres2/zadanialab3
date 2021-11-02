

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	{
		int liczba, n, suma = 0;
		srand(time(NULL));
		cout << "Podaj n: ", cin >> n;
		for (int i = 0; i < n; i++) {
			liczba = rand() % 56 - 10;
			cout << liczba << " ";
			if (liczba % 2 == 0) suma += liczba;
			cout << "suma liczb parzystych: " << suma << endl;

		}
	}





}

