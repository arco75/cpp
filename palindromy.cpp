#include <iostream>
#include <string>


//____________________________KLASY______________________________

class Slowo{
    private:
        std::string slowo;

    public:
        Slowo(std::string slowo){
            this->slowo = slowo;
        };

        Slowo(void){

        };

        void setSlowo(std::string slowo){
            if(this->slowo == "")
                    this->slowo = slowo;
        };

        std::string getSlowo(){
            return slowo;
        };
        std::string wspakSlowo(void){
            std::string wspak=slowo;
            reverse(wspak.begin(), wspak.end());
            return wspak;
        };
        bool jestPalindrom(){
            if(wspakSlowo()==slowo) return true; else return false;

        };
};
//___________________________MAIN________________________________
int main(int argc, char **argv) {

    Slowo slowo("kajak");

    if(slowo.jestPalindrom()) 
        std::cout<<slowo.getSlowo()<<" jest palindromem, bo wspak to:"<<slowo.wspakSlowo()<<"."<<std::endl;
    return 0;
}