#include <iostream>

using namespace std;

double mem = 0;
bool use = false;
double b;
int x;

double dod(double a, double b)
{
    double suma = 0;
    suma = a + b;
    return suma;
}

double odej(double a, double b)
{
    double roz = 0;
    roz = a - b;
    return roz;
}

double mnoz(double a, double b)
{
    double ilocz = 1;
    ilocz = a * b;
    return ilocz;
}
double dziel(double a, double b)
{
    if (b == 0)
    {
        cerr << "DZIELENIE PRZEZ 0. ZWRACAM LICZBE 0"; // ustalilem ze program zwróci 0 jako blad i wyswietli komunikat
        return 0;
    }
    double ilor = 1;
    ilor = a / b;
    return ilor;
}
double reszt(double a, double b)
{
    double reszt = 0;
    if (b == 0)
    {
        cerr << "MODULO PRZEZ 0. ZWRACAM LICZBE 0"; // ustalilem ze program zwróci 0 jako blad i wyswietli komunikat
        return 0;
    }
    reszt = a - (int)(a / b) * b;
    return reszt;
}


void menu(double a, double b)
{
    int x;
    cout << "1.+" << endl;
    cout << "2.-" << endl;
    cout << "3.*" << endl;
    cout << "4./" << endl;
    cout << "5.%" << endl;
    //cout << "10.Wyjscie z kalkulatora" << endl;
    cin >> x;
    switch (x) {
    case 1:
        mem = dod(a, b);
        cout << mem << endl;
        break;
    case 2:
        mem = odej(a, b);
        cout << mem << endl;
        break;
    case 3:
        mem = mnoz(a, b);
        cout << mem << endl;
        break;
    case 4:
        mem = dziel(a, b);
        cout << mem << endl;
        break;
    case 5:
        mem = reszt(a, b);
        cout << mem << endl;
            break;
    //case 10:
        //exit(0);
        //break;
    

    }
}
void pocz()
{
    double a;;
    cout << "Podaj 2 liczby" << endl;
    cin >> a >> b;
    menu(a, b);
    
}


int main()
{
    pocz();
    
    while (x != 10)
    {
        
        cout << "Podaj 2 liczbe(1 jest z pamieci)" << endl;
        cin >> b;
        menu(mem,b);
           

        x = 0;
    }
    
}
