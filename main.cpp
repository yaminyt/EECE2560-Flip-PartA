// ===== src/main.cpp =====
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "deck.h"

int main()
{
   srand((unsigned)time(0));

   deck d;

   std::cout << "Deck before shuffle:" << std::endl;
   std::cout << d << std::endl;

   d.shuffle();
   d.shuffle();
   d.shuffle();

   std::cout << "Deck after shuffle:" << std::endl;
   std::cout << d << std::endl;

   return 0;
}
