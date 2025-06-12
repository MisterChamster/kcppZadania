// - Zaprojektuj klasę/klasy i umieść funkcje z 10 wybranych zadań (5.6 obowiązkowo) z zakresu 1.1-5.6
//   jako metody danej klasy/klas, np. jedno zadanie to jedna klasa dziedzicząca po klasie nadrzędnej
// - deklaracja metod w ciele klasy (plik/pliki nagłówkowy *.h), a definicja poza (pliki *.cc)
// - nazwij klasę nadrzędną: ZadKcpp (plik: ZadKcpp.cc)
// - używaj dyrektywy preprocesora #define w plikach nagłówkowych aby zapobiec powtórnemu umieszczaniu treści pliku nagłówkowego
// - Program powinien zawierać interaktywne menu z możliwością wyboru zadania do wywołania 
//   - menu:
//    - sekcja
//    - numer zadania w sekcji i opis w kilu słowach co dana funkcja (zadanie) zawiera
#include "include/ZadKcpp.h"
#include <iostream>
// using namespace std;


int main() {
    // ZadKcpp::Exercise1();
    // ZadKcpp::Exercise2();
    // ZadKcpp::Exercise3();
    // ZadKcpp::Exercise4();
    ZadKcpp::Exercise5();
    ZadKcpp::Exercise6();
    ZadKcpp::Exercise7();
    ZadKcpp::Exercise8();
    ZadKcpp::Exercise9();
    ZadKcpp::Exercise10();

    return 0;
}