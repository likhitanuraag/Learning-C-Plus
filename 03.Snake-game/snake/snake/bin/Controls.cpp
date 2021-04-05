#include <iostream>
#include <windows.h>

void right() {
	int count = 1;
	while (count < 100) {
		for (int i = 0; i < count; i++) {
			std::cout << " ";
		}
		std::cout << "#";
		count++;
		Sleep(10);
		system("cls");

		if (count == 99) {
			count = 1;
		};
	};
}