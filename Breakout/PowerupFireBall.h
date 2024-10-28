#pragma once
#include "PowerupBase.h"
class PowerupFireBall : public PowerupBase
{
public:
    PowerupFireBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*>& balls);
    ~PowerupFireBall();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect

};

