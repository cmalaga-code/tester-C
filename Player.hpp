#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>


class Player {
private:
    std::string name;
    int points;
    float height;
public:
    Player(std::string name, int points, float height);
    void sayHi();
};



#endif //PLAYER_HPP
