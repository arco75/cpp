/*
Program:
    Napisz program, który na wejściu otrzymuje imiona (polskie) a następnie wypisuje
    jaki procent wśród podanych imion jest imionami damskimi i męskimi.

Wytyczne:
    Imiona stanowią instancję klasy Imie.
    Metody w klasie muszą umożliwić nadanie wartości początkowej przy tworzeniu obiektu,
    lub bez wartości początkowej.
    Klasa zawiera setter, który umożliwia nadanie nowego imiona jeśli nie zostało podane.
    Instancje obiektów zapisywanie są na liście obiektów lub wskaźników opartej na wektorach.
*/
#include <iostream>
#include <vector>
#include <string>
//_____definicja klas
class Imie {
private:
    std::string imie;
public:
    Imie(std::string imie) {
        this->imie = imie;
    };

    Imie(void) {
        imie = "";
    };

    void settImie(std::string imie) {
        if (this->imie.length() == 0)
            this->imie = imie;
    }
    bool czyImieDamskie(void) {
        if (this->imie[imie.length()-1] == 'a') return true; else return false;
    }
};

//_____MAIN_____
int main(int argc, char** argv) {

    short decyzja;
    std::string imie;
    std::vector <Imie*> listaImion;
    int licznikImionDamskich = 0;
    do {
        std::cout << "__________________________\nProgram Statystyka Imion" << std::endl;
        std::cout << " 1 - dodaj imie \n 2 - informacja \n 3 - koniec programu \n ?>";
        std::cin >> decyzja;

        switch (decyzja)
        {
        case 1:
            std::cout << "Podaj imie:"; std::cin >> imie;
            listaImion.push_back(new Imie(imie));
            break;
        case 2:
            for (int i = 0; i <= listaImion.size() - 1; i++) {
                if (listaImion[i]->czyImieDamskie())
                    licznikImionDamskich++;
            }
            std::cout << "Imion damskich jest:" << ((float) licznikImionDamskich / (float) (listaImion.size() * 100))*10000 <<"%"<< std::endl;
                //(float)(licznikImionDamskich / listaImion.size() * 100);
            licznikImionDamskich = 0;
            break;
        default:
            if (decyzja != 0) std::cout << "Nie ma takiej opcji\n";
            break;
        };
    } while (decyzja != 3);

    for (int i = 0; i < listaImion.size() - 1; i++)
        delete(listaImion[i]);

    listaImion.clear();
    return 0;
};