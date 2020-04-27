#include <iostream>

using namespace std;

class osoba
{
   public:
       string imie, nazwisko;

       void wprowadz()
       {
           cin >> imie >> nazwisko;
       }
       void wypisz()
       {
           cout << imie << " "<< nazwisko << "\n";
       }
};

class uczen : public osoba
{
    string klasa;
    int numer_dziennika;
    public:
        void wprowadz_ucznia()
        {
           wprowadz();
           cin >> klasa >> numer_dziennika;
        }
        void wypisz_ucznia()
        {
           cout << klasa << " " << numer_dziennika << " ";
           wypisz();
        }
};

class nauczyciel : public osoba
{
    string klasa, przedmiot;
    public:
        void wprowadz_nauczyciela()
        {
            wprowadz();
            cin >> klasa >> przedmiot;
        }
        void wypisz_nauczyciela()
        {
            cout << klasa << " " << przedmiot << " ";
            wypisz();
        }
};

int main()
{
    uczen u1;
    nauczyciel n1;
    u1.wprowadz_ucznia();
    n1.wprowadz_nauczyciela();
    u1.wypisz_ucznia();
    n1.wypisz_nauczyciela();
}
