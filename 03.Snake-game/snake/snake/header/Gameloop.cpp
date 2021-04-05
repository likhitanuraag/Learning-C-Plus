#include <iostream>
#include <windows.h>
#include <functional>
#include "../header/SLoop.h"

void gameloop(std::function<void(void)> right) {
	while (true) {
		right();
	};
}