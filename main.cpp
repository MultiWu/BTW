#include <iostream>
#include <windows.h>

using namespace std;

int koniec();
int first();
int two();
int menu();
int koniec();
int tabliczka();
int mnozenie();
int dzielenie();
int dodawanie();
int odejmowanie();



int main()
{

    string wybor;

    cout << "Witam w moim programie!" << endl;
    cout << "" << endl;
    Sleep(5000);
    system("cls");
    cout << "|---------------------------|" << endl;
    Sleep(150);
    cout << "|--SSS--I--SSS--SS-SS--SSS--|" << endl;
    Sleep(150);
    cout << "|--S----I--S----S-S-S--S-S--|" << endl;
    Sleep(150);
    cout << "|--SSS--I--SSS--S---S--SSS--|" << endl;
    Sleep(150);
    cout << "|----S--I--S----S---S--S-S--|" << endl;
    Sleep(150);
    cout << "|--SSS--I--SSS--S---S--S-S--|" << endl;
    Sleep(150);
    cout << "|---------------------------|" << endl;
    Sleep(5000);
    cout << "Co chcesz zrobic?" << endl;
    cout << "A. cm -> m" << endl;
    cout << "B. m -> cm" << endl;
    cout << "C. Tabliczka mnozenia" << endl;
    cout << "D. Mnozenie" << endl;
    cout << "E. Dzielenie" << endl;
    cout << "F. Dodawanie" << endl;
    cout << "G. Odejmowanie" << endl;
    cout << "" << endl;
    cout << "X. Wyjscie" << endl;
    cout << "v0.0.1-beta.2" << endl;
    cout << "Program by MultiWu @ 2018" << endl;
    cout << "" << endl;
    cin >> wybor;

    if (wybor == "A" || wybor == "a") {
        first();
    }
    else if (wybor == "X" || wybor == "x") {
        system("cls");
        cout << "Do zobaczenia !!" << endl;
        Sleep(2500);
        return 0;
    }
    else if (wybor == "B" || wybor == "b") {
        two();
    }
    else if (wybor == "C" || wybor == "c") {
        tabliczka();
    }
    else if (wybor == "D" || wybor == "d") {
        mnozenie();
    }
    else if (wybor == "E" || wybor == "e") {
        dzielenie();
    }
    else if (wybor == "F" || wybor == "f") {
        dodawanie();
    }
    else if (wybor == "G" || wybor == "g") {
        odejmowanie();
    }
    else {
        system("cls");
        cout << "Do zobaczenia !!" << endl;
    }


    return 0;
}

int koniec()
{
    system("cls");
    string wybor;

    cout << "Czy chcesz cos jeszcze zrobic?" << endl;
    cout << "tak lub nie?" << endl;
    cin >> wybor;
    if (wybor == "tak") {
        menu();
    }
    else {
        system("cls");
        cout << "Do zobaczenia !!" << endl;
        cout << "Program by OliwierGL @ 2018" << endl;
        Sleep(5000);
        return 0;
    }
}

int first()
{
    system("cls");
    string wybor;
    cout << "Prosze podac ile centymetrow chcesz zamienic na metry." << endl;
    double liczba;
    cin >> liczba;

    cout << "Wynik to " << liczba / 100 << " m." << endl;
    cout << "" << endl;
    system("pause");
    koniec();


}

int two()
{
    system("cls");
    string wybor;
    cout << "" << endl;
    cout << "Prosze podac ile metrow chcesz zamienic na centymetry." << endl;
    double liczba;
    cin >> liczba;
    cout << "" << endl;
    cout << "Wynik to " << liczba * 100 << " cm." << endl;
    cout << "" << endl;
    system("pause");
    koniec();
}


int menu()
{
    system("cls");
    string wybor;

    cout << "Co chcesz zrobic?" << endl;
    cout << "A. cm -> m" << endl;
    cout << "B. m -> cm" << endl;
    cout << "C. Tabliczka mnozenia" << endl;
    cout << "D. Mnozenie" << endl;
    cout << "E. Dzielenie" << endl;
    cout << "F. Dodawanie" << endl;
    cout << "G. Odejmowanie" << endl;
    cout << "" << endl;
    cout << "X. Wyjscie" << endl;
    cout << "v0.0.1-beta.2" << endl;
    cout << "Program by MultiWu @ 2018" << endl;
    cout << "" << endl;
    cin >> wybor;
    if (wybor == "A" || wybor == "a") {
        first();
    }
    else if (wybor == "X" || wybor == "x") {
        system("cls");
        cout << "Do zobaczenia !!" << endl;
        Sleep(2500);
        return 0;
    }
    else if (wybor == "B" || wybor == "b") {
        two();
    }
    else if (wybor == "C" || wybor == "c") {
        tabliczka();
    }
    else if (wybor == "D" || wybor == "d") {
        mnozenie();
    }
    else if (wybor == "E" || wybor == "e") {
        dzielenie();
    }
    else if (wybor == "F" || wybor == "f") {
        dodawanie();
    }
    else if (wybor == "G" || wybor == "g") {
        odejmowanie();
    }
    else {
        system("cls");
        cout << "Do zobaczenia !!" << endl;
    }
}

int tabliczka()
{
    system("cls");
    Sleep(150);
    cout << "------------------------------------------------" << endl;
    Sleep(150);
    cout << "|      1   2   3   4   5   6   7   8   9   10  |" << endl;
    Sleep(150);
    cout << "|  1   1   2   3   4   5   6   7   8   9   10  |" << endl;
    Sleep(150);
    cout << "|  2   2   4   6   8   10  12  14  16  18  20  |" << endl;
    Sleep(150);
    cout << "|  3   3   6   9   12  15  18  21  24  27  30  |" << endl;
    Sleep(150);
    cout << "|  4   4   8   12  16  20  24  28  32  36  40  |" << endl;
    Sleep(150);
    cout << "|  5   5   10  15  20  25  30  35  40  45  50  |" << endl;
    Sleep(150);
    cout << "|  6   6   12  18  24  30  36  42  48  54  60  |" << endl;
    Sleep(150);
    cout << "|  7   7   14  21  28  35  42  49  56  63  70  |" << endl;
    Sleep(150);
    cout << "|  8   8   16  24  32  40  48  56  64  72  80  |" << endl;
    Sleep(150);
    cout << "|  9   9   18  27  36  45  54  63  72  81  90  |" << endl;
    Sleep(150);
    cout << "|  10  10  20  30  40  50  60  70  80  90  100 |" << endl;
    Sleep(150);
    cout << "------------------------------------------------" << endl;
    cout << "" << endl;
    cout << "v0.0.1-beta.2" << endl;
    cout << "Program by MultiWu @ 2018" << endl;
    system("pause");
    koniec();
}

int mnozenie()
{
    system("cls");
    double liczba;
    double liczba2;
    cout << "Jaka liczbe chcesz pomnozyc?" << endl;
    cin >> liczba;
    system("cls");
    cout << "Przez ile?" << endl;
    cin >> liczba2;
    system("cls");
    cout << "Wynik to " << liczba * liczba2 << "." << endl;
    system("pause");
    koniec();
}
int dzielenie()
{
    system("cls");
    double liczba;
    double liczba2;
    cout << "Jaka liczbe chcesz podzielic?" << endl;
    cin >> liczba;
    system("cls");
    cout << "Przez ile?" << endl;
    cin >> liczba2;
    system("cls");
    if (liczba2 == 0) {
        cout << "Nie probuj wprowadzic mnie w blad!!!" << endl;
        Sleep(1750);
        menu();
    }
    else {
        cout << "Wynik to " << liczba / liczba2 << "." << endl;
    system("pause");
    koniec();
    }
}

int dodawanie()
{
    system("cls");
    double liczba;
    double liczba2;
    cout << "Jaka liczbe chcesz dodac?" << endl;
    cin >> liczba;
    system("cls");
    cout << "Do ilu?" << endl;
    cin >> liczba2;
    system("cls");
    cout << "Wynik to " << liczba + liczba2 << "." << endl;
    system("pause");
    koniec();
}
int odejmowanie()
{
    system("cls");
    double liczba;
    double liczba2;
    cout << "Jaka liczbe chcesz odjac?" << endl;
    cin >> liczba;
    system("cls");
    cout << "Od ilu?" << endl;
    cin >> liczba2;
    system("cls");
    cout << "Wynik to " << liczba - liczba2 << "." << endl;
    system("pause");
    koniec();
}
