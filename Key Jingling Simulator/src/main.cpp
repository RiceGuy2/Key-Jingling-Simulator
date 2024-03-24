#include <raylib.h>
#include "AttentionBar.hpp"
#include "Timer.hpp"
#include "Keys.hpp"
#include <thread>
#include <chrono>

int main()
{
    InitWindow(800,800,"Key Jingling Simulator");
    SetTargetFPS(60);

AttentionBar Bar;
Timer time;
Keys key;

std::thread timerThread([&]() {
    while (!WindowShouldClose())
    {
        time.UpdateTime();
 
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    });

    //GameLoop
    while (WindowShouldClose() == false)
    {
        //1. events 
        Bar.DecreaseBar();
        Bar.IncreaseBar();
        Bar.IncreaseBarDrainRate(time.SecondsCounterDigit);
        key.UpdateKey();
        
        //time. UpdateTime();
        //2. positions

        //CircleX += 5;

        //3. rendering
        BeginDrawing();
        ClearBackground(WHITE);
        key.DrawKey();
        Bar.Draw();
        time.Draw();
        EndDrawing();
  
    }
    
    CloseWindow();
    return 0;
}