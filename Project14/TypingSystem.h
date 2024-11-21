#ifndef _TYPING_SYSTEM_H__
#define _TYPING_SYSTEM_H__

#include "Header.h"
#include "User.h"



class TypingSystem {
private:
	std::vector<std::string> sentences;

	User* currentUser = nullptr;

	void loadData();
public:

	void printData();

	void start();

	void printMenu();
	
	char getChar();

	void typingStart();

	std::string getString();

	int compare(const std::string& original, const std::string& input);

};

#endif


