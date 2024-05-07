#include <iostream>
#include <fstream>

using namespace std;

int main() {
  
  string tekst;

  //zapis do pliku
    ofstream mojPlik("plik1.txt");
    mojPlik << "Ten tekst zapisujemy w pliku";
    mojPlik.close();

  //odczyt z pliku
    ifstream mojPlik("plik1.txt");
    while (getline (mojPlik, tekst)) {
        cout << tekst;
    };
    mojPlik.close(); 


};