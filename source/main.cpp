#include <violet_engine.hpp>

void GameInit()
{
    Violet::SetMasterVolume(50);

    Violet::OpenSound("test1", "yeah.wav");
    Violet::OpenSound("test2", "honk.mp3");
    Violet::OpenSound("test3", "test.ogg");
    Violet::OpenSound("test4", "whistle.flac");
    
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