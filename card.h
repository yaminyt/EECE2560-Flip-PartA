// Yamin Mahmood
// EECE 2560 – Project Mastermind
// Part A / Part B
// ===== src/card.h =====
#ifndef CARD_H
#define CARD_H

#include <iostream>

class card
{
public:
   card(int v = 1, int s = 0);

   void setValue(int v);
   void setSuit(int s);

   int getValue() const;
   int getSuit() const;

private:
   int value;   // 1..13 (A..K)
   int suit;    // 0..3  (C,D,H,S)
};

std::ostream &operator<<(std::ostream &out, const card &c);

#endif
