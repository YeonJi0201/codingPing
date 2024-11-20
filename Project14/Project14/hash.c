#include "hash.h"

void m_strcpy(char* target, char* source) {
	while (*source != '\0') {
		*(target++) = *(source++);
	}
}