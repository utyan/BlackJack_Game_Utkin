
// BlackJack Game. v.1.3
// by Dmitry Utkin
// 25/07/2020
// in QtCreator


#include "iostream"
#include <string>

class Card{
protected:
    enum VALUE {two, three, four, five, six, seven,
                eight, nine, ten, kadet, queen, king, tyz};
    enum SUIT {chervu, bubi, kresti, piki};
    VALUE CardValue[52];
    SUIT CardSuit[4];
    bool Position;
    int Summ;
public:
    Card (){}
    ~Card(){}
    Card& Flip() {
        if  (Position = false)
            Position = true;
        else
            Position = false;
        return Position;
    }

    int GetValue(){
        if (VALUE = "tyz"){
            return 1;
        } else if (VALUE == "kadet" || VALUE == "queen" || VALUE == "king" || VALUE = ten){
            return 10;
        }else if (VALUE == "nine"){
            return 9;
        }else if (VALUE == "eight"){
            return 8;
        }else if (VALUE == "seven"){
            return 7;
        }else if (VALUE == "six"){
            return 6;
        }else if (VALUE == "five"){
            return 5;
        }else if (VALUE == "four"){
            return 4;
        }else if (VALUE == "three"){
            return 3;
        }else if (VALUE == "two"){
            return 2;
        }

    }
int main()

{

    return 0;
}



