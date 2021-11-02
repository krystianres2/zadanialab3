

#include <iostream>
#include <time.h>
using namespace std;

int main()

{
	//int a, i;
		//cout << "Podaj liczbe naturalna: ", cin >> a;

		//for (i = 0; i < a; i++)
		//{
		//	cout << i << " ";
		//}

	//int liczba;

	
	//do {
     // cout << "Podaj liczbe: ", cin >> liczba;
	//} while (liczba >= 0);

	//int liczba, ile_dodatnich = 0, ile_ujemnych = 0, suma_dodatnich = 0, suma_ujemnych = 0;

	//for (int i = 0; i < 10; i++)
	//{
		//cout << "Podaj liczbe: ", cin >> liczba;
		//if (liczba >= 0) {
			//ile_dodatnich++;
				//suma_dodatnich += liczba;
		//}
		//else {
			//ile_ujemnych++;
			//suma_ujemnych += liczba;
		//}
		//}
	//cout << "Suma liczb dodatnich: " << suma_dodatnich << ", ilosc dodatnich liczb: " << ile_dodatnich << endl;
	//cout << "Suma liczb ujemnych: " << suma_ujemnych << ", ilosc liczb ujemnych: " << ile_ujemnych << endl;

		//int n, liczba, suma =0;

			//cout << "Podaj n: ", cin >> n;

			//if (n > 0)
			//{
				//for (int i = 0; i < n; i++) {
					//cout << "Podaj liczbe: ", cin >> liczba;
					//if (liczba % 2 == 0) suma += liczba;
				//}
				//cout << "suma liczb parzystych: " << suma << endl;
			//}
			//else cout << "n musi byc dodatnie" << endl;
	{
		int liczba, suma=0;
		srand(time(NULL));
		for (int i = 0; i < 5; i++) {
			liczba = rand() % 56 - 10;
			cout << liczba << " ";
			if (liczba % 2 == 0) suma += liczba;
			cout << "suma liczb parzystych: " << suma << endl;

		}
	}


}

