#include <violet_engine.hpp>

void GameInit()
{
    Violet::SetMasterVolume(50);

    Violet::LoadSound("test1", "yeah.wav");
    Violet::LoadSound("test2", "honk.mp3");
    Violet::LoadSound("test3", "test.ogg");
    Violet::LoadSound("test4", "whistle.flac");
    
    Violet::PlaySound("test1", 4);
    Violet::PlaySound("test2", 4);
    Violet::PlaySound("test3", 4);
    Violet::PlaySound("test4", 4);
}

void GameUpdate()
{

}

void GameClose()
{

}