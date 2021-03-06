#include <iostream>
#include "../header/Loops.h"

int main() {
	int size = 10;
	const char* alphabet = "*";
	int limiter = size;
	for (int i = 0; i < size; i++) {
		Loopf_star_print(limiter * 2, limiter, alphabet);
		limiter--;
		NewLine("");
	}

	NewLine("");

	limiter = 0;
	for (int i = 0; i < size; i++) {
		Loopb_star_print(limiter, limiter * 2, alphabet);
		limiter++;
		NewLine("");
	}

	NewLine("");

	limiter = 0;
	for (int i = 0; i < size; i++) {
		Loopf_star_print(size - limiter, 0, " "); 
		limiter++;

		Loopb_star_print(0, limiter, alphabet);
		NewLine("");
	}

	NewLine("");

	limiter = 0;
	for (int i = 0; i < size; i++) {
		Loopf_star_print(size - limiter, 0, " ");
		limiter++;

		Loopb_star_print(0, limiter, alphabet);
		Loopb_star_print(0, limiter, alphabet);

		NewLine("");
	}

	std::cin.get();
}