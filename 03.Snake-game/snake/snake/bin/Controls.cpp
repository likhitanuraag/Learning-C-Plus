#include <iostream>
#include <windows.h>
#include <functional>
//#include "../header/SLoop.h"


int WIDTH = 20;
int HEIGHT = 20;
//int SQSIZE = 1;

void up() {
	int count = HEIGHT;
	while (count > 1) {
		for (int i = count; i > 1; i--) {
			std::cout << "" << std::endl;
		}
		//PlayerCharacterDrawSQ(SQSIZE);
		std::cout << "#";
		count--;
		Sleep(5);
		system("cls");
	};
}

void down() {
	int count = 1;
	while (count < HEIGHT) {
		for (int i = 0; i < WIDTH; i++) {
			std::cout << " ";
		}
		//PlayerCharacterDrawSQ(SQSIZE);
		std::cout << "#";
		count++;
		Sleep(5);
		system("cls");
		for (int i = 0; i < count; i++) {
			std::cout << "" << std::endl;
		}
	};

}

void left() {
	int count = WIDTH;
	while (count > 1) {
		for (int i = 0; i < WIDTH; i++) {
			std::cout << "" << std::endl;
		}
		for (int i = count; i > 0; i--) {
			std::cout << " ";
		}
		//PlayerCharacterDrawSQ(SQSIZE);
		std::cout << "#";
		count--;
		Sleep(5);
		system("cls");
	};
}

void right() {
	int count = 1;
	while (count < WIDTH) {
		for (int i = 0; i < count; i++) {
			std::cout << " ";
		}
		//PlayerCharacterDrawSQ(SQSIZE);
		std::cout << "#";
		count++;
		Sleep(5);
		system("cls");
	};
}