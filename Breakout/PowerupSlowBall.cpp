#include "PowerupSlowBall.h"

PowerupSlowBall::PowerupSlowBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*>& balls)
    : PowerupBase(window, paddle, balls)
{
    _sprite.setFillColor(ballEffectsColour); 
}

PowerupSlowBall::~PowerupSlowBall()
{
}

std::pair<POWERUPS, float> PowerupSlowBall::applyEffect()
{
    for (auto _ball : _balls) {
        _ball->setVelocity(0.5f, 5.0f);
    }
    return { slowBall, POWERUP_TIME };
}