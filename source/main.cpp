#include <violet_engine.hpp>

void GameInit()
{
    Violet::SetMasterVolume(0.25f);

    Violet::LoadTexture    ("texture", "data/texture.png");
    Violet::LoadSpriteSheet("sprites", "data/sprites.spr", "texture");
    Violet::LoadSound      ("music",   "data/music.ogg");
    Violet::LoadFont       ("font",    "data/font.ttf");

    Violet::LoopSound      ("music");
}

void GameUpdate()
{
    static float x     = Violet::GetWindowWidthPixels() / 2.0f;
    static float y     = Violet::GetWindowHeightPixels() / 2.0f;
    static float x_off = Violet::GetWindowWidthPixels() / 4.0f;
    static float angle = 0.0f;
    
    float sine_x  = Violet::Math::SinDegrees(angle);
    float scale_x = ((Violet::Math::SinDegrees(angle * 4) + 1.0f) / 4.0f) + 0.75f;
    float scale_y = ((Violet::Math::CosDegrees(angle * 4) + 1.0f) / 4.0f) + 0.75f;
    float pitch   = ((Violet::Math::SinDegrees(angle) + 1.0f) / 7.0f) + 0.85f;

    Violet::DrawSprite     ("sprites", 0, 0, Violet::Vector2D(x + (sine_x * x_off), y), angle++, Violet::Vector2D(scale_x, scale_y));
    Violet::SetSoundPanning("music", sine_x);
    Violet::SetSoundPitch  ("music", pitch);

    Violet::DrawText("font", 64, "Hello World!", 0, Violet::Vector2D(34, 34), { 0, 0, 0, 255 });
    Violet::DrawText("font", 64, "Hello World!", 0, Violet::Vector2D(32, 32), { 255, 255, 255, 255 });
}

void GameClose()
{

}