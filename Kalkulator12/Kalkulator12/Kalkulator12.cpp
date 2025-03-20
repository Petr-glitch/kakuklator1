#include <iostream>
#include <cmath>
using namespace std;

double mem;
bool use = true;
bool kalk = true;

double add(double a, double b)
{
	return a + b;
}
double sub(double a, double b)
{
	return a - b;
}
double mlt(double a, double b)
{
	return a * b;
}
double div(double a, double b)
{
	if (b == 0)
	{
		cerr << "DZIELENIE PRZEZ 0 JEST BLEDEM, ZWRACANIE 0";
		return 0;
	}
	else
		return a / b;
}
double mod(double a, double b)                        //problem ze zmiana double na inta
{
	int c = round(a);
	int d = round(b);
	if (b == 0)
	{
		cerr << "DZIELENIE PRZEZ 0 JEST BLEDEM, ZWRACANIE 0";
		return 0;
	}
	else
		return c % d;
}
void reset()
{
	use = true;
}

void menu()
{
	int x;
	double a, b;
	cout << "1.DODAWANIE" << endl;
	cout << "2.ODEJMOWANIE" << endl;
	cout << "3.MNOZENIE" << endl;
	cout << "4.DZIELENIE" << endl;
	cout << "5.MODULO" << endl;
	cout << "6.RESET" << endl;
	cout << "WYBIERZ OPERACJE" << endl;
	cin >> x;
	if (x == 6)
	{
		reset();
		return;
	}
	if (use == false)
	{
		cout << "PODAJ DRUGA LICZBE (1 Z PAMIECI)" << endl;
		a = mem;
		cin >> b;
		
	}
	else
	{
		use = false;
		cout << "Podaj 2 liczby" << endl;
		cin >> a >> b;
	}
	
	switch (x) {
	case 1:
		mem = add(a, b);
		cout << "WYNIK: " << mem << endl;
		break;
	case 2:
		mem = sub(a, b);
		cout << "WYNIK: " << mem << endl;
		break;
	case 3:
		mem = mlt(a, b);
		cout << "WYNIK: " << mem << endl;
		break;
	case 4:
		mem = div(a, b);
		cout << "WYNIK: " << mem << endl;
		break;
	case 5:
		mem = mod(a, b);
		cout << "WYNIK: " << mem << endl;
		break;
	case 7:
		kalk = false;
		break;
	}
	
}


int main()
{
	do {
		menu();



	} while (kalk);
  
}
