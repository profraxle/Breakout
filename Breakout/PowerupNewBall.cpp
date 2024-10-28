#include "PowerupNewBall.h"


PowerupNewBall::PowerupNewBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*>& balls)
    : PowerupBase(window, paddle, balls)
{
    _sprite.setFillColor(sf::Color::Green);
}

PowerupNewBall::~PowerupNewBall()
{

    int* pInteger = new int();

    if (pInteger != nullptr)
    {
        // use my pointer to do things.
    }



}

std::pair<POWERUPS, float> PowerupNewBall::applyEffect()
{
    Ball* newBall = new Ball(_window, 400.0f, _balls[0]->getGameManager(),true);
    _balls.push_back(newBall);
    return { none, 0 };
}