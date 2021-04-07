#include <iostream>
#include <windows.h>
#include <functional>
#include "../header/SLoop.h"

void gameloop(std::function<void(void)> dir1, std::function<void(void)> dir2, std::function<void(void)> dir3, std::function<void(void)> dir4) {
	while (true) {
		dir1();
		dir2();
		dir3();
		dir4();
	};
}