#include "Keys.hpp"

Keys::Keys()
{
    Key1 = LoadTexture("Graphics/Keys1.png");
    Key1Edge = LoadTexture("Graphics/Keys1Edge.png");
    Key1Neon = LoadTexture("Graphics/Keys1Neon.png");
    Key1Oil = LoadTexture("Graphics/Keys1Oil.png");
    Key1Pixel = LoadTexture("Graphics/Keys1Pixel.png");
    Key1Sobel = LoadTexture("Graphics/Keys1Sobel.png");

    Key2 = LoadTexture("Graphics/Keys2.png");
    Key2Edge = LoadTexture("Graphics/Keys2Edge.png");
    Key2Neon = LoadTexture("Graphics/Keys2Neon.png");
    Key2Oil = LoadTexture("Graphics/Keys2Oil.png");
    Key2Pixel = LoadTexture("Graphics/Keys2Pixel.png");
    Key2Sobel = LoadTexture("Graphics/Keys2Sobel.png");

    KeyPosition.x = (GetScreenWidth() - CurrentTexture.width) /2;
    KeyPosition.y = (GetScreenHeight() - CurrentTexture.height) /2 - 300;

    CurrentTexture = Key1;
    KeyRotation = 1;
}

Keys::~Keys()
{
    //UnloadTexture();
}

void Keys::UpdateKey()
{
    int RandomValue = GetRandomValue(1,6);
    
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
    {
        if (KeyRotation == 1)
        {
            switch (RandomValue)
            {
            case 1:
                CurrentTexture = Key1;
                KeyRotation++;
                break;

            case 2:
                CurrentTexture = Key1Edge;
                KeyRotation++;
                break;

            case 3:
                CurrentTexture = Key1Neon;
                KeyRotation++;
                break;
            
            case 4:
                CurrentTexture = Key1Oil;
                KeyRotation++;
                break;
                KeyRotation++;
            case 5:
                CurrentTexture = Key1Pixel;
                KeyRotation++;
               break;

            case 6:
                CurrentTexture = Key1Sobel;
                KeyRotation++;
                break;

            default:
                CurrentTexture = Key1;

              break;
        }
        }

        if (KeyRotation == 2)
        {
            switch (RandomValue)
            {
            case 1:
                CurrentTexture = Key2;
                KeyRotation--;
                break;

            case 2:
                CurrentTexture = Key2Edge;
                KeyRotation--;
                break;

            case 3:
                CurrentTexture = Key2Neon;
                KeyRotation--;
                break;

            case 4:
                CurrentTexture = Key2Oil;
                KeyRotation--;
                break;

            case 5:
                CurrentTexture = Key2Pixel;
                KeyRotation--;
                break;

            case 6:
                CurrentTexture = Key2Sobel;
                KeyRotation--;
                break;

            default:
                CurrentTexture = Key2;
                KeyRotation--;
                break;
            }
        }
    }
    


}

void Keys::DrawKey()
{
    DrawTexture(CurrentTexture, KeyPosition.x, KeyPosition.y, WHITE);
}
