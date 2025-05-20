#include "Player.hpp"
#include <iostream>

Player::Player(std::string name, int points, float height) :
    name{name}, points{points}, height{height} {}

void Player::sayHi() {
    std::cout << this->name << " I am player number 1" << std::endl;
}

