#pragma once

#include "PowerupBase.h"

class PowerupBonusBall : public PowerupBase
{
public:
    PowerupBonusBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*> & balls);
    ~PowerupBonusBall();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect
};

