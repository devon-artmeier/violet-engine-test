#include <violet_engine.hpp>

void GameInit()
{
    Violet::SetMasterVolume(50);

    Violet::LoadSound("yeah", "data/yeah.wav");
    Violet::PlaySound("yeah", 0);
}

void GameUpdate()
{

}

void GameClose()
{

}