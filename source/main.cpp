#include <violet_engine.hpp>

void GameInit()
{
    Violet::LoadTexture("texture", "data/texture.png");
    Violet::LoadSpriteSheet("sprites", "data/sprites.spr", "texture");

    Violet::SetMasterVolume(50);

    Violet::LoadSound("yeah", "data/yeah.wav");
    Violet::PlaySound("yeah", 0);
}

void GameUpdate()
{
    static float angle = 0.0;
    static float scale = 0.0f;
    Violet::DrawSprite("sprites", 0,
                       { 0, Violet::GetWindowWidthPixels() / 2.0f, Violet::GetWindowHeightPixels() / 2.0f, scale, scale, angle++});
    scale += 0.005f;
}

void GameClose()
{

}