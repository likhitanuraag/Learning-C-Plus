#include <iostream>

void Loopf_star_print(int iter, int limitf, const char* alphabet) {
	for(int i = iter; i > limitf; i--) {
		std::cout << alphabet;
	}
};

void Loopb_star_print(int iter, int limitb, const char* alphabet) {
	for(int i = iter; i < limitb; i++) {
		std::cout << alphabet;
	}
};
