#include "Game.h"
#include "Resources.h"

Game::Game()
{
	sprite = std::make_unique<sf::Sprite>(Resources::Instance().Load("Resources/Scenery.png"));
}

void Game::Input()
{

}

void Game::Update()
{
	window.Update();
}

void Game::Render()
{
	window.Clear();

    window.Render(*sprite);

	window.Commit();
}

const bool & Game::State()
{
	return window.State();
}