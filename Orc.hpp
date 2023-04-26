//
//  Orc.hpp
//  Сolloquium_OS
//
//  Created by Nikita Kasiak on 26/04/2023.
//

#ifndef Orc_hpp
#define Orc_hpp

#include <stdio.h>
#include "Enemy.hpp"

class Orc : public Enemy {
public:
    Orc();
    int getHealth() const override;
    int getSpeed() const override;
    void takeDamage(int damage) override;
    std::string getType() const override;
    void attack() const override;
protected:
    int health;
    int speed;
};

#endif /* Orc_h */
