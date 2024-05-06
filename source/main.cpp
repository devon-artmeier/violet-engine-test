#include <violet_engine.hpp>

using namespace Violet;

void GameInit()
{
    SetMasterVolume(0.25f);

    LoadTexture    ("texture", "data/texture.png");
    LoadSpriteSheet("sprites", "data/sprites.spr", "texture");
    LoadSound      ("music",   "data/music.ogg");
    LoadFont       ("font",    "data/font.ttf");

    LoopSound      ("music");
}

void GameUpdate()
{
    static float x     = GetWindowWidthPixels() / 2.0f;
    static float y     = GetWindowHeightPixels() / 2.0f;
    static float x_off = GetWindowWidthPixels() / 4.0f;
    static float angle = 0.0f;

    float sine_x  = Math::SinDegrees(angle);
    float scale_x = ((Math::SinDegrees(angle * 4) + 1.0f) / 4.0f) + 0.75f;
    float scale_y = ((Math::CosDegrees(angle * 4) + 1.0f) / 4.0f) + 0.75f;
    float pitch   = ((Math::SinDegrees(angle) + 1.0f) / 7.0f) + 0.85f;

    int i = 0;


    DrawSprite     ("sprites", 0, 0, Vector2(x + (sine_x * x_off), y), angle++, Vector2(scale_x, scale_y));
    SetSoundPanning("music", sine_x);
    SetSoundPitch  ("music", pitch);

    DrawText("font", 64, "Hello World!", 0, Vector2(34, 34), { 0, 0, 0, 255 });
    DrawText("font", 64, "Hello World!", 0, Vector2(32, 32), { 255, 255, 255, 255 });
}

void GameClose()
{

}