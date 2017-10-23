#include <iostream>

using namespace std;




string cards[52] = {
      "A♥","2♥","3♥","4♥","5♥","6♥","7♥","8♥","9♥","10♥","J♥","Q♥","K♥",
      "A♣","2♣","3♣","4♣","5♣","6♣","7♣","8♣","9♣","10♣","J♣","Q♣","K♣",
      "A♠","2♠","3♠","4♠","5♠","6♠","7♠","8♠","9♠","10♠","J♠","Q♠","K♠",
      "A♦","2♦","3♦","4♦","5♦","6♦","7♦","8♦","9♦","10♦","J♦","Q♦","K♦"};


int main () {
  srand ( time(NULL) );
  for (int srand = 1; srand <= 21; srand++) {
  int RandIndex = rand() % 22; //generates a random number between 0 and 21
  cout << cards[RandIndex] << endl;
  }
  cout << "Pick a card and remember it" ;
    return 0;
}
