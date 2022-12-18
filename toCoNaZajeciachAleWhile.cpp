#include <iostream>
#include <vector>
#include <map>
using namespace std;
void wypisz(vector<int>tab) {
    int i = 0;
    while (i < tab.size()) {
        cout << tab[i] << " ";
        i++;
    }
    cout << endl;
}
int max(vector<int>tab) {
    int teraz = tab[0];
    int i = 1;
    while (i < tab.size()) {
        if (teraz < tab[i]) {
            teraz = tab[i];
        }
        i++;
    }
    return teraz;
}
bool czyNalezy(vector<int>tab, int element) {
    int i = 0;
    while (i < tab.size()) {
        if (tab[i] == element) {
            return true;
        }
        i++;
    }
    return false;
}
bool czyZawiera(vector<int>a, vector<int>b) {
    int i = 0;
    while (i < b.size()) {
        if (!czyNalezy(a, b[i])) {
            return false;
        }
        i++;
    }
    return true;
}
vector<int>unikalnosc(vector<int>tab) {
    vector<int>wynik;
    int i = 0;
    while (i < tab.size()) {
        if (!czyNalezy(wynik, tab[i])) {
            wynik.push_back(tab[i]);
        }
        i++;
    }
    return wynik;
}
int suma(vector<int>tab) {
    int suma = 0;
    int i = 0;
    while (i < tab.size()) {
        suma += tab[i];
        i++;
    }
    return suma;
}
double avg(vector<int>tab) {
    float dodane = suma(tab);
    return dodane / tab.size();
}
vector<int>podzielne(vector<int>tab, int przez, int reszta = 0) {
    vector<int>wynik;
    int i = 0;
    while (i < tab.size()) {
        if (tab[i] % przez == reszta) {
            wynik.push_back(tab[i]);
        }
        i++;
    }
    wynik = unikalnosc(wynik);
    return wynik;
}
void wypiszMap(map<int, int>m) {
    for (auto& el : m) {
        cout << el.first << ": " << el.second << " ";
    }
}
map<int, int>czestosc(vector<int>tab) {
    map<int, int>m;
    vector<int>help = unikalnosc(tab);
    int i = 0;
    while (i < help.size()) {
        m.insert({ help[i],0 });
        i++;
    }
    i = 0;
    while (i < tab.size()) {
        if (m.find(tab[i]) != m.end()) {
            m[tab[i]]++;
        }
        i++;
    }
    return m;
}
int main()
{
    vector<int>tab1 = { 1,2,3,9,7,8 };
    vector<int>tab2 = { 1,2,3 };
    int element = 3;
    vector<int>tab3 = { 2,4,5,2,4,3,5,6,5,2,3,4,4,4,4 };

    cout << "Elementy vectora tab1: ";
    wypisz(tab1);
    cout << endl;

    cout << "Najwiekszy element tab1: " << max(tab1) << endl;
    cout << "Czy " << element << " nalezy do tab1: " << czyNalezy(tab1, element) << endl;
    cout << "Czy tab2 zawiera sie w tab1: " << czyZawiera(tab1, tab2) << endl;
    vector<int>x = unikalnosc(tab3);
    cout << endl;

    cout << "Elementy vectora tab3: ";
    wypisz(tab3);
    cout << "Unikalne elementy tab3: ";
    wypisz(x);
    cout << endl;

    cout << "Suma elementow tab3: " << suma(tab3) << endl;
    cout << "Srednia elementow tab3: " << avg(tab3) << endl;
    cout << endl;

    x = podzielne(tab3, 2);
    cout << "Elementy podzielne przez 2 w tab3: ";
    wypisz(x);
    x = podzielne(tab3, 2, 1);
    cout << "Elementy niepodzielne przez 2 w tab3: ";
    wypisz(x);



    map<int, int>m = czestosc(tab3);
    wypiszMap(m);



}