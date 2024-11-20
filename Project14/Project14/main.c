#include "main.h"

int main() {
		
	GameState gameState = gameStart;
	GameState* gameState_point = &gameState;
	int numInput = 0;
	char strInput[100] = "";
	switchToggle = 1;

	initalizeCharacterSlot();
	
	while (1 && switchToggle)
	{
		switchToggle = 0;

		switch (gameState)
		{
		case gameStart:
			gameStartProcess(numInput, gameState_point);
			break;

		case selectCharacter:
			gameSelectCharacterProcess(numInput, gameState_point);
			break;

		case createCharacter:
			gameCreateProcess(numInput, gameState_point);
			break;
		case deleteCharacter:
			
			break;
		}
	}
	
}
