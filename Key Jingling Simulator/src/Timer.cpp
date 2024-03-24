#include "Timer.hpp"
#include "AttentionBar.hpp"

Timer::Timer()
{
    //MinuteCounterDigit = 0;
    SecondsCounterDigit = 59;
    SecondsDigitPosition.x = 10;
    SecondsDigitPosition.y = 10;
    DoOnceOne = 0;
    DoOnceTwo = 0;
    DoOnceThree = 0;
    DoOnceFour = 0;
}

Timer::~Timer()
{

}

void Timer::Draw()
{
    //DrawText(TextFormat("%i", MinuteCounterDigit), MinuteDigitPosition.x, MinuteDigitPosition.x, 24, BLACK);

    DrawText(TextFormat("%i", SecondsCounterDigit), SecondsDigitPosition.x, SecondsDigitPosition.x, 50, BLACK);
}

void Timer::UpdateTime()
{
    if (DoOnceOne == 0)
    {
    //DoOnce++;
    //WaitTime(1.0);
    SecondsCounterDigit--;
    //DoOnce--;
    }
}


