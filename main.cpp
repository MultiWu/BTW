#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int polski(); // Jezyk polski
int english(); // Angielski


int koniec(); // Funkcja odpowiadajaca za konczenie programu
int first(); // Funkcja odpowiadajaca za zamiane cm na metry
int two(); // Funkcja odpowiadajaca za zamiane metrow na cm
int menu(); // Funkcja odpowiadajaca za menuu glowne
int tabliczka(); // Funkcja odpowiadajaca za wyswietlenie tabliczki mnozenia
int mnozenie(); // Funkcja odpowiadajaca za mnozenie
int dzielenie(); // Funkcja odpowiadajaca za dzielenie
int dodawanie(); // Funkcja odpowiadajaca za dodawanie
int odejmowanie(); // Funkcja odpowiadajaca za odejmowanie

int koniec2(); // Funkcja odpowiadajaca za konczenie programu (ANGIELSKI)
int first2(); // Funkcja odpowiadajaca za zamiane cm na metry (ANGIELSKI)
int two2(); // Funkcja odpowiadajaca za zamiane metrow na cm (ANGIELSKI)
int menu2(); // Funkcja odpowiadajaca za menuu glowne (ANGIELSKI)
int tabliczka2(); // Funkcja odpowiadajaca za wyswietlenie tabliczki mnozenia (ANGIELSKI)
int mnozenie2(); // Funkcja odpowiadajaca za mnozenie (ANGIELSKI)
int dzielenie2(); // Funkcja odpowiadajaca za dzielenie (ANGIELSKI)
int dodawanie2(); // Funkcja odpowiadajaca za dodawanie (ANGIELSKI)
int odejmowanie2(); // Funkcja odpowiadajaca za odejmowanie (ANGIELSKI)

int main()
{

    string wybor;

    cout << "[P]olski" << endl;
    cout << "[E]nglish" << endl;
    cin >> wybor;
    if (wybor == "P" || wybor == "p") {
        polski();
    }
    else if (wybor == "E" || wybor == "e") {
        english();
    }
}

int polski()
{
    string wybor;
    system("cls");
    cout << "Witam w moim programie!" << endl;
    cout << "" << endl;
    Sleep(5000);
    system("cls");
    cout << "|-------------------|" << endl;
    Sleep(150);
    cout << "|--SS--SSS-S-----S--|" << endl;
    Sleep(150);
    cout << "|--S-S--I--S-----S--|" << endl;
    Sleep(150);
    cout << "|--SSS--I--S--S--S--|" << endl;
    Sleep(150);
    cout << "|--S-S--I--S-S-S-S--|" << endl;
    Sleep(150);
    cout << "|--SS---I--SS---SS--|" << endl;
    Sleep(150);
    cout << "|-------------------|" << endl;
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
    cout << "v0.0.1-beta.4" << endl;
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
        return 0;
    }
}

int english()
{
    string wybor;
    system("cls");
    cout << "Welcome in my program!" << endl;
    cout << "" << endl;
    Sleep(5000);
    system("cls");
    cout << "|-------------------|" << endl;
    Sleep(150);
    cout << "|--SS--SSS-S-----S--|" << endl;
    Sleep(150);
    cout << "|--S-S--I--S-----S--|" << endl;
    Sleep(150);
    cout << "|--SSS--I--S--S--S--|" << endl;
    Sleep(150);
    cout << "|--S-S--I--S-S-S-S--|" << endl;
    Sleep(150);
    cout << "|--SS---I--SS---SS--|" << endl;
    Sleep(150);
    cout << "|-------------------|" << endl;
    Sleep(5000);
    cout << "What you want to do?" << endl;
    cout << "A. cm -> m" << endl;
    cout << "B. m -> cm" << endl;
    cout << "C. Multiplication table" << endl;
    cout << "D. Multiplication" << endl;
    cout << "E. Split" << endl;
    cout << "F. Addition" << endl;
    cout << "G. Subtraction" << endl;
    cout << "" << endl;
    cout << "X. Exit" << endl;
    cout << "v0.0.1-beta.4" << endl;
    cout << "Program by MultiWu @ 2018" << endl;
    cout << "" << endl;
    cin >> wybor;

    if (wybor == "A" || wybor == "a") {
        first2();
    }
    else if (wybor == "X" || wybor == "x") {
        system("cls");
        cout << "Good bye !!" << endl;
        Sleep(2500);
        return 0;
    }
    else if (wybor == "B" || wybor == "b") {
        two2();
    }
    else if (wybor == "C" || wybor == "c") {
        tabliczka2();
    }
    else if (wybor == "D" || wybor == "d") {
        mnozenie2();
    }
    else if (wybor == "E" || wybor == "e") {
        dzielenie2();
    }
    else if (wybor == "F" || wybor == "f") {
        dodawanie2();
    }
    else if (wybor == "G" || wybor == "g") {
        odejmowanie2();
    }
    else {
        system("cls");
        cout << "Good bye !!" << endl;
        return 0;
    }
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

int koniec2()
{
    system("cls");
    string wybor;

    cout << "Do you want to do something else?" << endl;
    cout << "yes or not?" << endl;
    cin >> wybor;
    if (wybor == "yes" || wybor == "y") {
        menu2();
    }
    else {
        system("cls");
        cout << "Good Bye !!" << endl;
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

int first2()
{
    system("cls");
    string wybor;
    cout << "Please specify how many centimeters you want to convert by the meter." << endl;
    double liczba;
    cin >> liczba;

    cout << "The result is " << liczba / 100 << " m." << endl;
    cout << "" << endl;
    system("pause");
    koniec2();


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

int two2()
{
    system("cls");
    string wybor;
    cout << "" << endl;
    cout << "Please specify how many meters you want to convert into centimeters." << endl;
    double liczba;
    cin >> liczba;
    cout << "" << endl;
    cout << "The result is " << liczba * 100 << " cm." << endl;
    cout << "" << endl;
    system("pause");
    koniec2();
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
    cout << "v0.0.1-beta.4" << endl;
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

int menu2()
{
    system("cls");
    string wybor;

    cout << "What you want to do?" << endl;
    cout << "A. cm -> m" << endl;
    cout << "B. m -> cm" << endl;
    cout << "C. Multiplication table" << endl;
    cout << "D. Multiplication" << endl;
    cout << "E. Split" << endl;
    cout << "F. Addition" << endl;
    cout << "G. Subtraction" << endl;
    cout << "" << endl;
    cout << "X. Exit" << endl;
    cout << "v0.0.1-beta.4" << endl;
    cout << "Program by MultiWu @ 2018" << endl;
    cout << "" << endl;
    cin >> wybor;

    if (wybor == "A" || wybor == "a") {
        first2();
    }
    else if (wybor == "X" || wybor == "x") {
        system("cls");
        cout << "Good bye !!" << endl;
        Sleep(2500);
        return 0;
    }
    else if (wybor == "B" || wybor == "b") {
        two2();
    }
    else if (wybor == "C" || wybor == "c") {
        tabliczka2();
    }
    else if (wybor == "D" || wybor == "d") {
        mnozenie2();
    }
    else if (wybor == "E" || wybor == "e") {
        dzielenie2();
    }
    else if (wybor == "F" || wybor == "f") {
        dodawanie2();
    }
    else if (wybor == "G" || wybor == "g") {
        odejmowanie2();
    }
    else {
        system("cls");
        cout << "Good bye !!" << endl;
        Sleep(5000);
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
    cout << "v0.0.1-beta.4" << endl;
    cout << "Program by MultiWu @ 2018" << endl;
    system("pause");
    koniec();
}

int tabliczka2()
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
    cout << "v0.0.1-beta.4" << endl;
    cout << "Program by MultiWu @ 2018" << endl;
    system("pause");
    koniec2();
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

int mnozenie2()
{
    system("cls");
    double liczba;
    double liczba2;
    cout << "What number do you want to multiply?" << endl;
    cin >> liczba;
    system("cls");
    cout << "By how much?" << endl;
    cin >> liczba2;
    system("cls");
    cout << "The result is " << liczba * liczba2 << "." << endl;
    system("pause");
    koniec2();
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

int dzielenie2()
{
    system("cls");
    double liczba;
    double liczba2;
    cout << "What number do you want to divide?" << endl;
    cin >> liczba;
    system("cls");
    cout << "By how much?" << endl;
    cin >> liczba2;
    system("cls");
    if (liczba2 == 0) {
        cout << "Do not try to put me in error !!!" << endl;
        Sleep(1750);
        menu();
    }
    else {
        cout << "The result is " << liczba / liczba2 << "." << endl;
    system("pause");
    koniec2();
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

int dodawanie2()
{
    system("cls");
    double liczba;
    double liczba2;
    cout << "What number do you want to add?" << endl;
    cin >> liczba;
    system("cls");
    cout << "To how many?" << endl;
    cin >> liczba2;
    system("cls");
    cout << "The result is " << liczba + liczba2 << "." << endl;
    system("pause");
    koniec2();
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
    cout << "Wynik to " << liczba2 - liczba << "." << endl;
    system("pause");
    koniec();
}

int odejmowanie2()
{
    system("cls");
    double liczba;
    double liczba2;
    cout << "What number do you want to deduct?" << endl;
    cin >> liczba;
    system("cls");
    cout << "From how many?" << endl;
    cin >> liczba2;
    system("cls");
    cout << "The result is " << liczba2 - liczba << "." << endl;
    system("pause");
    koniec2();
}
