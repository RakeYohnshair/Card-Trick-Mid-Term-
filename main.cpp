#include <iostream>

using namespace std;




string cards[52] = {
      "A♥","2♥","3♥","4♥","5♥","6♥","7♥","8♥","9♥","10♥","J♥","Q♥","K♥",
      "A♣","2♣","3♣","4♣","5♣","6♣","7♣","8♣","9♣","10♣","J♣","Q♣","K♣",
      "A♠","2♠","3♠","4♠","5♠","6♠","7♠","8♠","9♠","10♠","J♠","Q♠","K♠",
      "A♦","2♦","3♦","4♦","5♦","6♦","7♦","8♦","9♦","10♦","J♦","Q♦","K♦"};


  int randCards[21]; //array to hold the 21 random cards 
int Pile1[7]; //Piles 1-3 for the 7 cards
int Pile2[7];
int Pile3[7];
int combinedPiles[21]; //3 piles stacked back together
int combinedPiles[11]; //answer

int splitdeck () {
 srand ( time(NULL) );
  for (int srand = 1; srand <= 21; srand++) { //Tells it to pick 21 random cards from the array
    int RandIndex = rand() % 52; //Tells it to pick from the 52 cards
    cout << cards[RandIndex] << endl;
      return 0;
  }
  cout << "Pick a card and remember it" ;
  
    return randCards; // I have no idea what to return here
}



int main () {
  cout << "xyz" << endl;

}
