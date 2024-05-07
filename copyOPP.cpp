#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv){
string tekst;
ifstream plik1(argv[1]);
ofstream plik2(argv[2]);
    while (getline(plik1,tekst)){
        plik2 << tekst;
    };
    plik2.close();
    plik1.close();
    
}
