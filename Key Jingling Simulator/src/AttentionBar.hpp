#pragma once
#include "raylib.h"

class AttentionBar
{

    public:
    AttentionBar();
    ~AttentionBar();
    void IncreaseBar();
    void DecreaseBar();
    void IncreaseBarDrainRate(int Time);
    void Draw();



    private:
    int DoOnceOne = 0;
    int DoOnceTwo = 0;
    int DoOnceThree = 0;
    int FlipFlop = 0;
    int AttentionBarNumber;
    int AttentionBarWidth;
    int AttentionBarHeight;
    int AttentionBarDrainRate;
    Color AttentionBarColor;
    Vector2 AttentionBarPosition;
};