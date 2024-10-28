#include "PowerupFastBall.h"

PowerupFastBall::PowerupFastBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*>& balls)
    : PowerupBase(window, paddle, balls)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupFastBall::~PowerupFastBall()
{
}

std::pair<POWERUPS, float> PowerupFastBall::applyEffect()
{
    for (auto _ball : _balls) {
        _ball->setVelocity(2.f, 5.0f);
    }
    return { fastBall, POWERUP_TIME };
}