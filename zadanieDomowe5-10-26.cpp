#include <iostream>
using namespace std;

int main()
{
    // Zadanie 2
    int liczba;

    cout << "Zadanie 2" << endl;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba % 2 == 0)
        cout << "Liczba jest parzysta" << endl;
    else
        cout << "Liczba jest nieparzysta" << endl;


    // Zadanie 3
    int tablica10[10];

    cout << endl;
    cout << "Zadanie 3" << endl;
    cout << "10 kolejnych liczb nieparzystych:" << endl;

    for (int i = 0; i < 10; i++)
    {
        tablica10[i] = 2 * i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << tablica10[i] << " ";
    }

    cout << endl;


    // Zadanie 4
    int tablica4[4];

    cout << endl;
    cout << "Zadanie 4" << endl;
    cout << "Podaj 4 liczby:" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Liczba " << i + 1 << ": ";
        cin >> tablica4[i];
    }

    cout << "Liczby w odwrotnej kolejnosci: ";

    for (int i = 3; i >= 0; i--)
    {
        cout << tablica4[i] << " ";
    }

    cout << endl;


    // Zamiana liczby dziesietnej na dwojkowa
    int liczba2;
    int tablica32[32];
    int i = 0;

    cout << endl;
    cout << "Zamiana liczby dziesietnej na dwojkowa" << endl;
    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba2;

    while (liczba2 > 0)
    {
        tablica32[i] = liczba2 % 2;
        liczba2 = liczba2 / 2;
        i++;
    }

    cout << "Liczba dwojkowa: ";

    for (int j = i - 1; j >= 0; j--)
    {
        cout << tablica32[j];
    }

    cout << endl;

    return 0;
}
