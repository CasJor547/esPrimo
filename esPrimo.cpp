// Codificado por JCM
// esPrimo: Determinar si un número dado es primo

#include <iostream>

using namespace std;

int main()
{
	int i, num;
	bool esPrimo;

	i = 3;
	esPrimo = true;

	cout << "Digite un número entero: ";
	cin >> num;

	if (num % 2 == 0) {
		if (num > 2) {
			esPrimo = false;
		}
	}

	while (i <= sqrt(num))
	{
		if (num % i == 0) {
			esPrimo = false;
			i = num;
		}
		else {
			i = i + 2;
		}
	}
	if (esPrimo) {
		cout << "El número " 
			<< num << " es primo." << endl;
	}
	else {
		cout << "El número " 
			<< num << " no es primo." << endl;
	}
	system("Pause");
	return 0;
}