

#include <iostream>
using namespace std;
int main()
{
	int liczba, ile_dodatnich = 0, ile_ujemnych = 0, suma_dodatnich = 0, suma_ujemnych = 0;
	for (int i = 0; i < 10; i++)
	{cout << "Podaj liczbe: ", cin >> liczba;
	if (liczba >= 0) {
		ile_dodatnich++;
		suma_dodatnich += liczba;
	}
}
cout << "Suma liczb dodatnich: " << suma_dodatnich << ", ilosc dodatnich liczb: " << ile_dodatnich << endl;
cout << "Suma liczb ujemnych: " << suma_ujemnych << ", ilosc liczb ujemnych: " << ile_ujemnych << endl;
}

