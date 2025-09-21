#pragma once
#include "Window.h"

class Game
{
private:
	Window window;

	std::unique_ptr<sf::Sprite> sprite;
public:
	Game();

	void Input();
	void Update();
	void Render();

	const bool & State();
};

