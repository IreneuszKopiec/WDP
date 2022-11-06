// delta.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 1;

    int delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        cout << "Delta" << delta << endl;
        cout << "Gdy delta jset mniejsza od zera, nie ma miejsc zerowych" << endl;

        return 1;
    }

    double pierwiasteKZdelty = sqrt(delta);
    
    double x1 = (-b - pierwiasteKZdelty) / (2 * a);
    double x2 = (-b + pierwiasteKZdelty) / (2 * a);

    if (x1 == x2) {
        cout << "x0: " << x1 << endl;

        return 1;
    }

    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
