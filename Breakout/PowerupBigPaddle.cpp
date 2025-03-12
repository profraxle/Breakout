#include "PowerupBigPaddle.h"

PowerupBigPaddle::PowerupBigPaddle(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*> & balls)
    : PowerupBase(window, paddle, balls)
{
    _sprite.setFillColor(paddleEffectsColour); // Same colour as smallPaddle
}

PowerupBigPaddle::~PowerupBigPaddle()
{
}

std::pair<POWERUPS,float> PowerupBigPaddle::applyEffect()
{
    _paddle->setWidth(1.5f, 5.0f);
    _paddle->setCurrSpeed(PADDLE_SPEED * 0.75);
    return { bigPaddle, POWERUP_TIME };
}