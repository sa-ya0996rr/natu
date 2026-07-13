#include "Game.h"
#include <DxLib.h>


Game::Game()
    : enemy(500, 500)
{
    image.Load();
}


Game::~Game()
{

}


void Game::Update()
{
    input.Update();

    player.Update();

    stage.Update();

    enemy.Update();

    camera.Update(player.GetPosition());
}


void Game::Draw()
{
    stage.Draw();

    player.Draw();

    enemy.Draw();
}