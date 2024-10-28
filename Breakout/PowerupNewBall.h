#pragma once
#include "PowerupBase.h"
class PowerupNewBall : public PowerupBase
{
public:
    PowerupNewBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*> &balls);
    ~PowerupNewBall();

    std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect


};

