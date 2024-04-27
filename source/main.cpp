#include <violet_engine.hpp>

void GameInit()
{
    Violet::SetMasterVolume(50);

    Violet::LoadTexture    ("texture", "data/texture.png");
    Violet::LoadSpriteSheet("sprites", "data/sprites.spr", "texture");
    Violet::LoadSound      ("yeah",    "data/yeah.wav");

    Violet::PlaySound("yeah");
}

void GameUpdate()
{
    static float x     = Violet::GetWindowWidthPixels() / 2.0f;
    static float y     = Violet::GetWindowHeightPixels() / 2.0f;
    static float angle = 0.0f;
    static float scale = 0.0f;

    Violet::DrawSprite("sprites", 0, 0, x, y, scale, scale, angle++);
    scale += 0.005f;
}

void GameClose()
{

}