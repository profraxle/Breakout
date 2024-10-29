#include "PowerupBonusBall.h"

PowerupBonusBall::PowerupBonusBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(sf::Color::Green);
}

PowerupBonusBall::~PowerupBonusBall()
{
}

std::pair<POWERUPS, float> PowerupBonusBall::applyEffect()
{

    return { none, 0 };
}