#ifndef CARD_H
#define CARD_H
#include "definitions.h"

class Card {
    private: 
        suit cardSuit;
        value faceValue;
    public:
        Card(suit s, value val);
        
        //getters
        suit getSuit();
        value getValue();

        //print
        void print();
};
#endif