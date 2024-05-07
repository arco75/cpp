#include <iostream>
#include <string>
#include <vector>

using namespace std;
//___________________KLASY_____________________________
class Uczestnik
{
public:
    std::string imie;
public:
    Uczestnik(std::string imie);
    ~Uczestnik();
};

Uczestnik::Uczestnik(std::string imie){
this->imie = imie;
}

Uczestnik::~Uczestnik(){
}
//..........................................................
class Lista{
    private:
      vector <Uczestnik*> listaUczestnikow;
    public:
        void dodajUczestnika(string imie){
            listaUczestnikow.push_back(new Uczestnik(imie));
        };
        string ktoNaLiscie(){
            string otoLista="";
            for(auto i:listaUczestnikow){
                otoLista=otoLista+i->imie+", ";
            }
            return otoLista;
        }
        void wyczysc(){
            for(int i=0; i<listaUczestnikow.size();i++)
                delete(listaUczestnikow[i]);

        }
};

//_____________________MAIN____________________________
int main(int argc, char **argv){

    Lista lista;

    lista.dodajUczestnika("Jan");
    lista.dodajUczestnika("Anna");
    
    cout<<lista.ktoNaLiscie();


    lista.wyczysc()

    return 0;
}