#ifndef TEXTRPG_H__
#define TEXTRPG_H__

#include "main.h"

void printEmphasisText(char* prompt);

void printVertical();

void menuInput(char* prompt, int* input, int minRange, int maxRange);

void getValue(char* prompt,char* value);

void gameStartProcess(int input, GameState* gameState);

void gameSelectCharacterProcess(int input, GameState* gameState);

void gameCreateProcess(int input, GameState* gameState);

int checkCharacterSlot();

void gameStateToggle(GameState* gameState, GameState state);

void initalizeCharacterSlot();

#endif // !TEXTRPG_H__

