#include "PowerupBonusBall.h"

PowerupBonusBall::PowerupBonusBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*> & balls)
    : PowerupBase(window, paddle, balls)
{
    _sprite.setFillColor(sf::Color::Green);
}

PowerupBonusBall::~PowerupBonusBall()
{
}

std::pair<POWERUPS, float> PowerupBonusBall::applyEffect()
{
    _balls.push_back(new Ball(_window, 400.0f, _balls[0]->getGameManager(), true));

    return { none, 0 };
}