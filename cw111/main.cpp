#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string imie = "Pawel";
    string nazwisko = "Kalinowski";
    int rok_urodzenia = 1994;
    int aktualny_rok = 2017;
    int wiek = aktualny_rok - rok_urodzenia;
    cout << "Witam" << endl;
    cout << "nazywam sie " << imie << endl;
    cout <<nazwisko << endl;
    cout << "rok urodzenia " << rok_urodzenia << endl;
    cout << "wiek " << wiek << endl;
    return 0;
}
