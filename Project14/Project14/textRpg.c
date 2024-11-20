#include "textRpg.h"
#include "hash.h"
#include "hash.h"

#pragma region About I/O 
void printEmphasisText(char* prompt) {

	int length = strlen(prompt);
	int padding = (SIZE - length) / 2;

	printVertical();
	printf("%*s%s%*s\n", padding, " ", prompt, padding, " ");
	printVertical();
}

void printVertical() {
	for (int i = 0; i < SIZE; i++) {
		printf("=");
	}
	printf("\n");

	return;
}

void menuInput(char *prompt, int *input,int minRange,int maxRange ) {
	while (1)
	{
		printf(prompt);
		scanf("%d", input);

		if (*input >= minRange && *input <= maxRange) return;

		printf("�߸��� �Է��Դϴ�.(��ȿ���� %d ~ %d)\n", minRange, maxRange);
	}
	
}

void getValue(char* prompt,char* value) {
	print(prompt);
	char input[100];
	scanf("%99s", input);
	strcpy(value, input);
	return;
}

#pragma endregion

#pragma region GameProcess
void gameStartProcess(int input, GameState *gameState) {
	printEmphasisText("�޴��� �����ϼ���");

	print("1. ĳ���� ����\n");
	print("2. ĳ���� ����\n");
	print("3. ĳ���� ����\n");
	print("4. ����\n");

	menuInput("�Է� : ", &input, 1, 4);

	switch (input)
	{
	case 1:
		gameStateToggle(gameState, selectCharacter);
		break;
	case 2:
		gameStateToggle(gameState, createCharacter);
		break;
	case 3:
		break;
	case 4:
		return;
		break;
	}
}

void gameSelectCharacterProcess(int input, GameState* gameState) {
	
	char className[20] = "";

	for (int i = 0; i < 3; i++) {
		switch (charcterSlot[i].class) {
		case 0:
			m_strcpy(className,"Warrior");
			break;
		case 1:
			m_strcpy(className, "Archer");
			break;
		case 2:
			m_strcpy(className, "Wizzard");
			break;
		case 3:
			m_strcpy(className, "Thief");
			break;
		case 4:
			m_strcpy(className, "None");
			break;
		}

		printf("%d.%5s - %s\n",i+1, className, charcterSlot[i].name);
	}
}

void gameCreateProcess(int input, GameState* gameState) {
	
	printEmphasisText("������ ĳ������ ������ �������ּ���");

	int createSlotIndex= checkCharacterSlot();

	if (createSlotIndex == -1) {
		gameStateToggle(gameState, gameStart);
		printEmphasisText("������ �� ���ֽ��ϴ�. ĳ���͸� �����Ϸ��� �������ּ���");
		return;
	}

	print("1. ����\n");
	print("2. �ü�\n");
	print("3. ������\n");
	print("4. ����\n");

	menuInput("�Է� : ", &input, 1, 4);

	switch (input)
	{
	case 1:
		charcterSlot[createSlotIndex] = (Character)WARRIOR;
		getValue("ĳ���� �̸��� �Է��ϼ��� : ", strInput);
		m_strcpy(&charcterSlot[createSlotIndex].name, strInput);
		gameStateToggle(gameState, gameStart);
		break;
	case 2:
		charcterSlot[createSlotIndex] = (Character)ARCHER;
		getValue("ĳ���� �̸��� �Է��ϼ��� : ", strInput);
		m_strcpy(&charcterSlot[createSlotIndex].name, strInput);
		gameStateToggle(gameState, gameStart);
		break;
	case 3:
		charcterSlot[createSlotIndex] = (Character)WIZZARD;
		getValue("ĳ���� �̸��� �Է��ϼ��� : ", strInput);
		m_strcpy(&charcterSlot[createSlotIndex].name, strInput);
		gameStateToggle(gameState, gameStart);
		break;
	case 4:
		charcterSlot[createSlotIndex] = (Character)THIEF;
		getValue("ĳ���� �̸��� �Է��ϼ��� : ", strInput);
		m_strcpy(&charcterSlot[createSlotIndex].name, strInput);
		gameStateToggle(gameState, gameStart);
		break;
	}
}

int checkCharacterSlot() {
	int index= 0;
	while (index < 3) {
		if (charcterSlot[index].class == none) 
			return index;
		index++;
	}
	return -1;
}

void gameStateToggle(GameState *gameState, GameState state) {
	*gameState = state;
	switchToggle = 1;
	system("cls");
}

void initalizeCharacterSlot() {
	for (int i = 0; i < 3; i++) {
		charcterSlot[i] = (Character)NONE;
	}
}
#pragma endregion
