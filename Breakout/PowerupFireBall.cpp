#include "PowerupFireBall.h"


PowerupFireBall::PowerupFireBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*> & balls)
    : PowerupBase(window, paddle, balls)
{
    _sprite.setFillColor(ballEffectsColour);
}

PowerupFireBall::~PowerupFireBall()
{

    int* pInteger = new int();

    if (pInteger != nullptr)
    {
        // use my pointer to do things.
    }


    
}

std::pair<POWERUPS, float> PowerupFireBall::applyEffect()
{
    for (auto _ball : _balls) {
        _ball->setFireBall(5.0f);
    }
    return { fireBall, POWERUP_TIME };
}