#pragma once
#include "raylib.h"

class Keys
{

    public:

    Keys();
    ~Keys();
    void UpdateKey();
    void DrawKey();

    private:
    int KeyRotation;
    Vector2 KeyPosition;

    Texture2D CurrentTexture;

    Texture2D Key1;
    Texture2D Key1Edge;
    Texture2D Key1Neon;
    Texture2D Key1Oil;
    Texture2D Key1Pixel;
    Texture2D Key1Sobel;

    Texture2D Key2;
    Texture2D Key2Edge;
    Texture2D Key2Neon;
    Texture2D Key2Oil;
    Texture2D Key2Pixel;
    Texture2D Key2Sobel;

};