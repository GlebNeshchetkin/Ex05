#ifndef TASK1_H
#define TASK1_H

#include <cstring>
#include <string>
template<typename T> bool less(T a, T b) {
	if (a < b)
		return true;
	else
		return false;
}

template <> bool less <const char*>(const char* a, const char* b) {
	if (strcmp(a, b) != -1)
		return false;
	return true;
}


#endif 