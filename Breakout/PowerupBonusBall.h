#pragma once

#include "PowerupBase.h"

class PowerupBonusBall : public PowerupBase
{
public:
    PowerupBonusBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
    ~PowerupBonusBall();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect
};
