#include <iostream>
#include "Player.hpp"


int main() {
    std::cout << "TEST" << std::endl;
    Player* topPlayer = new Player("Player1", 100, 10.10);
    topPlayer->sayHi();
    delete topPlayer;
    return 0;
}