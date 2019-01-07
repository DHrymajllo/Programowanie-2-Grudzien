#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <array>
#include <iterator>
#include <vector>
#include <string>
#include <malloc.h>
#include <ctype.h>
#include <cstring>
#include <cctype>
#include <fstream>

using namespace std;

void menu()
{
    cout << "1 --> 1.1" << endl;
    cout << "2 --> 1.2" << endl;
    cout << "3 --> 1.3" << endl;
    cout << "4 --> 2.1" << endl;
    cout << "5 --> 2.2" << endl;
    cout << "6 --> 2.3" << endl;
    cout << "7 --> 2.4" << endl;
    cout << "8 --> 2.5" << endl;
    cout << "9 --> 3.1" << endl;
    cout << "10 --> 3.2" << endl;
    cout << "11 --> 3.3" << endl;
    cout << "Zadanie 3.4 - Wykonane!" << endl;
    cout << "12 --> 4.1" << endl;
    cout << "13 --> 4.2" << endl;
    cout << "14 --> 4.3" << endl;
    cout << "15 --> 4.4" << endl;
}
/*
1.1. Utworzyć 5-cio elementową tablicę typu int. Pobrać od użytkownika 5 elementów i dodać je do tablicy. Następnie
wyświetlić największą liczbę z tablicy (algorytm do samodzielnej implementacji).
*/
void zadanie1_1()
{
    int i, liczba, najwieksza;
    int tab[4];

    cout << "Wprowadz 5 liczb:" << endl;

    for (i=0;i<=4;i++){
    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczba;
    tab[i]=liczba;
    }
    cout << endl;
    cout << "Najwieksza liczba wynosi: " << endl;
    for (i=0;i<=4;i++){
    if (tab[i]>najwieksza){
       najwieksza=tab[i];
       }
    }
    cout << najwieksza << endl;
    cout << endl;
    //return 0;
}
/*
1.2. Wyświetlić w pętli tablice z zadania 1.1 od początku i od końca (dwie pętle)
*/
void zadanie1_2()
{
    int i, liczba, najwieksza;
    int tab[4];

    cout << "Wprowadz 5 liczb:" << endl;

    for (i=0;i<=4;i++){
    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczba;
    tab[i]=liczba;
    }
    cout << endl;
    cout << "Najwieksza liczba wynosi: " << endl;
    for (i=0;i<=4;i++){
    if (tab[i]>najwieksza){
       najwieksza=tab[i];
       }
    }
    cout << najwieksza << endl;
    cout << endl;

    cout << "Tablica od poczatku do konca" << endl;
    for (i=0;i<=4;i++){
    cout << tab[i] << endl;
    }
    cout << endl;
    cout << "Tablica od konca do poczatku" << endl;
    for (i=4;i>=0;i--){
    cout << tab[i] << endl;
    }
    cout << endl;
    //return 0;
}
/*
1.3 Napisać algorytm sprawdzający, czy tablica jest posortowana w kolejności niemalejącej
*/
void zadanie1_3()
{
    int i, liczba, schowek, zamiana;
    int tab[4];

    cout << "Wprowadz 5 liczb:" << endl;

    for (i=0;i<=4;i++){

    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczba;
    tab[i]=liczba;
    } cout << endl;
    cout << "Twoja tablica wyglada nastepujaco: " << endl;
    cout << tab[0] << " ";
    cout << tab[1] << " ";
    cout << tab[2] << " ";
    cout << tab[3] << " ";
    cout << tab[4] << " " << endl;
    cout << endl;
    cout << "Liczby posortowane babelkowo:" << endl;
    do
    {
    zamiana=0;
    for (int i=0; i<4; i++)
    {
    if (tab[i]>tab[i+1])
    {
    zamiana=zamiana+1;
    schowek=tab[i];
    tab[i]=tab[i+1];
    tab[i+1]=schowek;
      }
     }
    }
    while(zamiana!=0);
    for (int j=0; j<=4; j++)
    {
    cout<<tab[j]<<" ";
    }
    cout << endl << endl;
    //return 0;
}
/*
2.1. Utworzyć osobną metodę bool IsSorted(int *, int) realizującą zadanie 1.3 (UWAGA - w języku C niedostępny jest
typ bool z wartościami true i false, zamiast niego należy użyć int i wartości 1 i 0)
*/
void zadanie2_1()
{
    int i, liczba1, liczba2, liczba3, liczba4, liczba5;
    int tab[4];

    cout << "Wprowadz 5 liczb:" << endl;
    cout << "Liczba 1: " << " ";
    cin >> liczba1;
    cout << "Liczba 2: " << " ";
    cin >> liczba2;
    cout << "Liczba 3: " << " ";
    cin >> liczba3;
    cout << "Liczba 4: " << " ";
    cin >> liczba4;
    cout << "Liczba 5: " << " ";
    cin >> liczba5;

    tab[0]=liczba1;
    tab[1]=liczba2;
    tab[2]=liczba3;
    tab[3]=liczba4;
    tab[4]=liczba5;
    cout << endl;
    array<int,5> foo {liczba1, liczba2, liczba3, liczba4, liczba5};

    do {
    prev_permutation(foo.begin(),foo.end());
    cout << "Sortowanie:";
    for (int& x:foo) cout << " " << x;
    cout << endl;

    }while (!is_sorted(foo.begin(),foo.end()));

    cout << "Liczby zostaly posortowane!" << endl;
    cout << endl;
    //return 0;
}
/*
2.2. Utworzyć metodę void printBackwards(int *a, int s) służącą do wypisania tablicy OD KOŃCA
*/
/*void reverse (DwukierunkowyIterator pierwszy, DwukierunkowyIterator ostatni)
{
  while ((pierwszy!=ostatni)&&(pierwszy!=--ostatni)) {
    iter_swap (pierwszy,ostatni);
    ++pierwszy;
  }
}
*/
void zadanie2_2()
{
    int i;
    int tab[5], liczby;

    cout << "Wprowadz 5 liczb:" << endl;

    for (i=0;i<=4;i++){

    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczby;
    tab[i]=liczby;
    } cout << endl;

    cout << "Tablica przed odwroceniem:" << endl;
    for(int i=0; i<5;i++){
    cout << tab[i] << endl;
    }
    cout << endl;

    reverse(tab, tab+5);
    cout << "Tablica po odwroceniu:" << endl;
    for(int i=0; i<5;i++){
    cout << tab[i] << endl;
    }
    cout << endl;
    //return 0;
}
/*
2.3 Utworzyć metodę printDots(int *a, int s) wyświetlającą w nowych liniach tyle kropek, ile znajduje się w danym
elemencie tablicy.
*/
void zadanie2_3()
{
    int i, liczba;
    int tab[4];

    cout << "Wprowadz 5 liczb:" << endl;

    for (i=0;i<=4;i++){

    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczba;
    tab[i]=liczba;
    } cout << endl;
    cout << "Twoja tablica wyglada nastepujaco: " << endl;
    cout << tab[0] << " ";
    cout << tab[1] << " ";
    cout << tab[2] << " ";
    cout << tab[3] << " ";
    cout << tab[4] << " " << endl;
    cout << endl;
    cout << "Generowanie kropek: " << endl;
    for (i=0;i<tab[0];i++){
    cout << ".";
    }
    cout << endl;
    for (i=0;i<tab[1];i++){
    cout << ".";
    }
    cout << endl;
    for (i=0;i<tab[2];i++){
    cout << ".";
    }
    cout << endl;
    for (i=0;i<tab[3];i++){
    cout << ".";
    }
    cout << endl;
    for (i=0;i<tab[4];i++){
    cout << ".";
    }
    cout << endl << endl;;
    //return 0;
}
/*
2.4. Utworzyć metodę int Sum(int *a, int s) liczącą sumę elementów tablicy.
*/
void zadanie2_4()
{
    int i, liczba;
    int tab[4];

    cout << "Wprowadz 5 liczb:" << endl;

    for (i=0;i<=4;i++){

    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczba;
    tab[i]=liczba;
    } cout << endl;
    cout << "Suma wszystkich elementow tablicy: " << endl;
    int suma = tab[0]+tab[1]+tab[2]+tab[3]+tab[4];
    cout << suma << endl;
    cout << endl;
    //return 0;
}
/*
2.5. Zaimplementować algorytm sortowania bąbelkowego (w funkcji main(), nie ma potrzeby tworzenia dodatkowej
funkcji). Algorytm powinien posortować dowolnie dużą tablicę w kolejności niemalejącej.
*/
void zadanie2_5() //***Patrz zadanie 1_3()
{
    int i, liczba, schowek, zamiana;
    int tab[4];

    cout << "Wprowadz 5 liczb:" << endl;

    for (i=0;i<=4;i++){

    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczba;
    tab[i]=liczba;
    } cout << endl;
    cout << "Twoja tablica wyglada nastepujaco: " << endl;
    cout << tab[0] << " ";
    cout << tab[1] << " ";
    cout << tab[2] << " ";
    cout << tab[3] << " ";
    cout << tab[4] << " " << endl;
    cout << endl;
    cout << "Liczby posortowane babelkowo:" << endl;
    do
    {
    zamiana=0;
    for (int i=0; i<4; i++)
    {
    if (tab[i]>tab[i+1])
    {
    zamiana=zamiana+1;
    schowek=tab[i];
    tab[i]=tab[i+1];
    tab[i+1]=schowek;
      }
     }
    }
    while(zamiana!=0);
    for (int j=0; j<=4; j++)
    {
    cout<<tab[j]<<" ";
    }
    cout << endl << endl;
    //return 0;
}
/*
3.1. Napisać metodę int getLength(char *str) , w której WŁASNORECZNIE (nie wolno korzystać z metody strlen() )
przeliczony zostanie rozmiar łańcucha (bez null-terminatora). Dla przykładu dla „Hello!" wynik powinien wynosić 6.
*/
void zadanie3_1()
{
    int i;
    char tab[5], wyraz;

    cout << "Wprowadz 6-literowy wyraz(np.Hello!):" << endl;

    for (i=0;i<=5;i++){

    cout << "Litera " << i+1 << ":" << " ";
    cin >> wyraz;
    tab[i]=wyraz;
    } cout << endl;
    cout << "Twoja tablica wyglada nastepujaco: " << endl;
    cout << tab[0] << " ";
    cout << tab[1] << " ";
    cout << tab[2] << " ";
    cout << tab[3] << " ";
    cout << tab[4] << " ";
    cout << tab[5] << " ";
    tab[6]='\0';
    cout << endl << endl;

    string str(tab);
    cout << "Rozmiar lancucha dla wyrazu " << "\"" << tab << "\"" << " wynosi " << str.length() << " bajt/ow";
    cout << endl << endl;
    //return 0;
}
/*
3.2. Napisać metodę void Reverse (char *str) , która wypisze łańcuch znaków od końca (zakaz używania strlen,
można uzyć metodę z zadania 3.1.)
*/
void zadanie3_2()
{
    int i;
    char tab[5], wyraz;

    cout << "Wprowadz 5-literowy wyraz(np.Hello):" << endl;

    for (i=0;i<=4;i++){

    cout << "Litera " << i+1 << ":" << " ";
    cin >> wyraz;
    tab[i]=wyraz;
    } cout << endl;

    cout << "Tablica przed odwroceniem:" << endl;
    for(int i=0; i<5;i++){
    cout << tab[i] << endl;
    }
    cout << endl;

    reverse(tab, tab+5);
    cout << "Tablica po odwroceniu:" << endl;
    for(int i=0; i<5;i++){
    cout << tab[i] << endl;
    }
    cout << endl;
    //return 0;
}
/*
Napisać metodę bool containsDigits(char * str), która zwróci informację, czy w danym stringu znajduje się
jakakolwiek cyfra. Dla przykładu : „asdfgzxcv" -> false, „asdf5asdf" -> true
*/
void zadanie3_3() //Nie moglem uzyc metody  bool z return true/false ze wzgledu na void'a :( *Przepraszam!
{
    string wyraz;
    cout << "Wprowadz wyraz: " << endl;
    cout << "> ";
    cin >> wyraz;
    cout << endl;
    for (int i = 0; i < wyraz.length(); i++) {
    if (isdigit (wyraz[i])) {
    cout << wyraz[i] << " znaleziono numer!" << endl;
     }
    } cout << endl;
}
/*
3.4. Pobrać od użytkownika łańcuch znaków (dowolna metoda). Przekazać go do każdej z metod z 3. części zadań.
    //***Wszedzie zostały przekazane..
*/

/*
4.1. Pobrać od użytkownika liczbę n. Zaalokować pamięć na n elementów int i pobrać je od użytkownika. Wykonać na
niej metodę printBackwards z 2.2.
*/
void zadanie4_1()
{
    int i, liczby, n;
    int *wektor = new int[n];

    cout << "Wprowadz wielkosc tablicy:" << endl;
    cout << "wielkosc: ";
    cin >> n;
    cout << endl;
    for (i=0;i<=n-1;i++){

    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczby;
    wektor[i]=liczby;
    } cout << endl;

    cout << "Tablica przed odwroceniem:" << endl;
    for(int i=0; i<n;i++){
    cout << wektor[i] << endl;
    }
    cout << endl;

    reverse(wektor, wektor+n);
    cout << "Tablica po odwroceniu:" << endl;
    for(int i=0; i<n;i++){
    cout << wektor[i];
    }
    cout << endl;
    delete [] wektor;
    //return 0;
}
/*
4.2. Pobrać od użytkownika liczbę n. Zaalokować pamięć na n elementów int i pobrać je od użytkownika. Następnie
zaalokować pamięć i utworzyć tablicę, w której będą tylko UJEMNE wartości z pierwszej tablicy. Na koniec zwolnić
pamięć na obie tablice.
*/
void zadanie4_2()
{
    int i, j, liczby, n;
    int *wektor = new int[n];
    int *wektor2 = new int[n];

    cout << "Wprowadz wielkosc tablicy:" << endl;
    cout << "wielkosc: ";
    cin >> n;
    cout << endl;
    for (i=0;i<=n-1;i++){

    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczby;
    wektor[i]=liczby;
    wektor2[i]=liczby;
    } cout << endl;

    cout << "Tablica 1:" << endl;
    for(int i=0; i<n;i++){
    cout << wektor[i] << " ";
    } cout << endl << endl;
    cout << "Tablica 2:" << endl;
    for(int i=0; i<n;i++){
    if (wektor[i] < 0){
    cout << wektor2[i] << " ";
     }
    }
    cout << endl << endl;
    delete [] wektor;
    delete [] wektor2;
    //return 0;
}
/*
4.3. Napisać metodę bool AreArraysldentical(int * al, int sl, int * a2, int s2) zwracającą informację, czy dwie tablice
podane jako parametr są identyczne, tj. czy mają taką samą długość i czy na każdym indeksie występuje taki sam
element.
*/
void zadanie4_3() //Nie moglem ze wzgledu na void :( *Ponownie :(
{
    int i, j, liczby, n;
    int *wektor = new int[n];
    int *wektor2 = new int[n];

    cout << "Wprowadz wielkosc tablicy:" << endl;
    cout << "wielkosc: ";
    cin >> n;
    cout << endl;
    for (i=0;i<=n-1;i++){

    cout << "Liczba " << i+1 << ":" << " ";
    cin >> liczby;
    wektor[i]=liczby;
    wektor2[i]=liczby;
    } cout << endl;

    cout << "Tablica 1:" << endl;
    for(int i=0; i<n;i++){
    cout << wektor[i] << " ";
    } cout << endl << endl;
    cout << "Tablica 2:" << endl;
    for(int i=0; i<n;i++){
    cout << wektor2[i] << " ";
    } cout << endl << endl;
    if (wektor[i] || wektor2[i] == 0){
    cout << "Tablice sa identyczne!";
    }
    else{
    cout << "Tablice nie sa identyczne :(";
    }
    cout << endl << endl;
    delete [] wektor;
    delete [] wektor2;
    //return 0;
}
/*
4.4. Napisać metodę char * reverseString(char*s), która ZWRÓCI (a nie wypisze!) string, który jest odwróconym
stringiem przekazanym jako pierwszy parametr. Funkcja zaalokuje pamięć na nowy łańcuch i go zwróci. (cały
algorytm należy zaimplementować samodzielnie). Należy go następnie „przechwycić" w funkcji main, aby pamięć na
koniec wyczyścić.
*/
void zadanie4_4()
{
    int i;
    char wyraz;
    char *str = new char[5];

    cout << "Wprowadz 5-literowy wyraz(np.Hello):" << endl;

    for (i=0;i<=4;i++){

    cout << "Litera " << i+1 << ":" << " ";
    cin >> wyraz;
    str[i]=wyraz;
    } cout << endl;

    cout << "Tablica przed odwroceniem:" << endl;
    for(int i=0; i<5;i++){
    cout << str[i];
    }
    cout << endl << endl;

    reverse(str, str+5);
    cout << "Tablica po odwroceniu:" << endl;
    for(int i=0; i<5;i++){
    cout << str[i];
    }
    cout << endl << endl;
    delete [] str;
    //return 0;
}

int main()
{
    HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "Programowanie C++ - Grudzien/Styczen 2018/2019" << endl;
    cout << "Wpisz liczbe zadania (1/2/3/4 itp.)" << endl;
    cout << "*** Mozna otwierac nastepne zadania bez potrzeby zamykania konsoli" << endl;
    cout << endl;
    menu();
    cout << endl;

int x;
do{
    cout << "#";
    cin >> x;
           switch (x)
{
    case 1:
        zadanie1_1();
        break;
    case 2:
        zadanie1_2();
        break;
    case 3:
        zadanie1_3();
        break;
    case 4:
        zadanie2_1();
        break;
    case 5:
        zadanie2_2();
        break;
    case 6:
        zadanie2_3();
        break;
    case 7:
        zadanie2_4();
        break;
    case 8:
        zadanie2_5();
        break;
    case 9:
        zadanie3_1();
        break;
    case 10:
        zadanie3_2();
        break;
    case 11:
        zadanie3_3();
        break;
    case 12:
        zadanie4_1();
        break;
    case 13:
        zadanie4_2();
        break;
    case 14:
        zadanie4_3();
        break;
    case 15:
        zadanie4_4();
        break;
    default:
        break;
}
}while (x != 0);

return 0;
}

