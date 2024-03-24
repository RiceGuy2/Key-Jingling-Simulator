#include "AttentionBar.hpp"
#include "raylib.h"

AttentionBar::AttentionBar()
{
    AttentionBarNumber = 500;
    AttentionBarWidth = GetScreenWidth();
    AttentionBarHeight = 40;
    AttentionBarPosition.x = 0;
    AttentionBarPosition.y = 760;
    AttentionBarDrainRate = 1;
    AttentionBarColor = {55,55,0};
}

AttentionBar::~AttentionBar()
{

}

void AttentionBar::IncreaseBar()
{
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
    {
        if (AttentionBarWidth <= GetScreenWidth())
        {
           AttentionBarWidth += 28;
        }
    }
}

void AttentionBar::DecreaseBar()
{
    if (FlipFlop == 0)
    {
        FlipFlop++;
    }

    if (FlipFlop == 1)
    {
        FlipFlop++;
    }

    if (FlipFlop == 2)
    {
        AttentionBarWidth -= AttentionBarDrainRate;
        FlipFlop = 0;
    }
}

void AttentionBar::IncreaseBarDrainRate(int Time)
{
    if (Time == 35)
    {
        if (DoOnceOne == 0)
        {
            DoOnceOne++;
            AttentionBarDrainRate++;
        }
        
    }

    if (Time == 25)
    {
         if (DoOnceTwo == 0)
        {
            DoOnceTwo++;
            AttentionBarDrainRate++;
        }       

    }

    if (Time == 5)
    {
        if (DoOnceThree == 0)
        {
            DoOnceThree++;
            AttentionBarDrainRate++;
        }
    }


}

void AttentionBar::Draw()
{
    DrawRectangle(AttentionBarPosition.x, AttentionBarPosition.y, AttentionBarWidth, AttentionBarHeight, RED);
}
