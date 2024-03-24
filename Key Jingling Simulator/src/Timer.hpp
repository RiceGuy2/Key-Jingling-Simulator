#pragma once
#include "raylib.h"

class Timer
{

public:
Timer();
~Timer();
void Draw();
void UpdateTime();
int SecondsCounterDigit;

private:
//int MinuteCounterDigit;
//int SecondsCounterDigit;
int DoOnceOne;
int DoOnceTwo;
int DoOnceThree;
int DoOnceFour;
//char TextBuffer;
Vector2 TextBorderPosition;
Vector2 MinuteDigitPosition;
Vector2 SecondsDigitPosition;
Vector2 TextBufferPosition;
Color TextBorderColor;


};