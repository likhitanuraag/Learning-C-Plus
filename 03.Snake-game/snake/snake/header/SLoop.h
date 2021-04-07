#pragma once
#include <functional>
void right();
void left();
void down();
void up();
void gameloop(std::function<void(void)> dir1, std::function<void(void)> dir2, std::function<void(void)> dir3, std::function<void(void)> dir4);
void PlayerCharacterDrawSQ(int SQsize);