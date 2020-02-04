//
//  ViewController.h
//  CardGame
//
//  Created by ashi on 2/3/20.
//  Copyright © 2020 Ashika Palacharla. All rights reserved.
//

#ifndef CardController_h
#define CardController_h
#include <stdio.h>
#define SUIT_CNT 4
#define SYMBOL_CNT 13
#define DECK_CNT 52

static char *suitStrings[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
static char *symbolStrings[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
typedef enum {Clubs, Diamonds, Hearts, Spades} SUIT_TYPE;
typedef enum {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King} SYMBOL_TYPE;
typedef struct card {
  int cID;      // unique ID of card (1 to 52 on conventional deck)
  int value;      // 1, 2, ... 13, used to determine rank in games
  SUIT_TYPE suit;     // Clubs, Diamonds, Hearts, Spaces
  SYMBOL_TYPE symbol;    // Ace, Two, ... King
} CARD;
// Prototype
void cards(void);

#endif /* card_h */


