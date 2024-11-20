#ifndef DEFINE_H__
#define DEFINE_H__

#define print(prompt) printf("%s",prompt)

#define INTERVAL 1.00/20.00
#define SIZE 50

typedef enum {
	gameStart, createCharacter ,selectCharacter,deleteCharacter, home, combat
}GameState;

typedef enum {
	warrior, archer , wizzard, thief, none
}Class;

typedef struct {
	char name[20];
	Class class;
	int amoutHp;
	int attackDamage;
	int level;
	int maxExp;
}Character;

#define WARRIOR {"",warrior, 1000, 250, 1, 100} // 맞은만큼 때리기
#define ARCHER {"",archer, 800, 320, 1, 100} // 크리티컬
#define WIZZARD {"",wizzard, 800, 300, 1, 100} // 시간초 늘리기
#define THIEF {"",thief, 500, 300, 1, 100} // 확률적으로 공격회피
#define NONE {"None",none,0,0,0,0}

Character charcterSlot[3];
int switchToggle;
char strInput[100];

#endif // !DEFINE_H__

