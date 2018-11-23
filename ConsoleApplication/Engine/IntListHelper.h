#pragma once
#include <iostream>

void print(int* list, int length) {
	for (int i = 0; i < length; i++) {
		std::cout << list[i] << " ";
	}

	std::cout << std::endl;
}

int* getIntList(int length) {
	int* list = new int[length];
	for (int i = 0; i < length; i++) {
		list[i] = i;
	}

	return list;
}