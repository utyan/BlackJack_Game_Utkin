    class Card{
    protected:
        enum VALUE {six, seven, eight, nine, ten, valet, queen, king, tyz};
        enum SUIT {chervu, bubi, kresti, piki};
        bool position;
    public:
        Card (){}
        ~Card(){}
        bool Flip(bool p){
            position = -p;
        }
        bool GetValue(){
            return VALUE;// проверка
        }
    };
