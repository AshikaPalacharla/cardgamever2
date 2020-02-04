//
//  Cards.c
//  CardGame
//
//  Created by ashi on 2/3/20.
//  Copyright © 2020 Ashika Palacharla. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "CardController.h"
void cards()
{
  // Setup 52 cards
  CARD card[DECK_CNT];
  for(int suit = Clubs; suit <= Spades; suit++)
  {   // Clubs, Diamonds, Hearts, Spades
    for(int symbol = Ace; symbol <= King; symbol++ )
    { // Ace, Two, Three ..., Queen, King
      int index = (suit * SYMBOL_CNT) + symbol;  // index equals: 0...12, 13...25, 26...38, 39...51
      card[index].cID = index + 1;
      card[index].value = symbol + 1;
      card[index].suit = suit;
      card[index].symbol = symbol;
    }
  }
  
  // Shuffle cards
  CARD swap[1];
  for (int i = 0; i < DECK_CNT; i++) {  // traverse through deck one time
    int r;
    while ( (r = rand() % DECK_CNT) == i); // repeat if r = i, don't swap with itself
   
    // swap logic
    swap[0] = card[i];  // current saved to swap
    card[i] = card[r];  // current changed with random
    card[r] = swap[0];  // random changed with swap
  }
  
  // Deal deck to two players
  CARD player1[DECK_CNT/2];    // half deck array for each player
  CARD player2[DECK_CNT/2];
  for (int i = 0; i < DECK_CNT/2; i++) // deal half deck to each
  {
    int index = i * 2;
    player1[index] = card[index];  // card to player1
    player2[index] = card[index+1];  // card to player2
   
    // Two column print out
    printf("%5s of %-8s %d %d",
        symbolStrings[player1[index].symbol], suitStrings[player1[index].suit],
        player1[index].cID, player1[index].value);
   
    printf("\t\t");
    printf("%5s of %-8s %d %d",
        symbolStrings[player2[index].symbol], suitStrings[player2[index].suit],
        player2[index].cID, player2[index].value);
    printf("\n");
  }
}
