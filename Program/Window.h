#pragma once
#include <SFML/Graphics.hpp>

class Window
{
private:
	sf::State state;
	std::string name;
	sf::VideoMode videoMode;
	sf::RenderWindow window;

public:
	Window();
	
	const bool & State();

	void Update();

	void Clear();
	void Render(const sf::Drawable & drawable);
	void Commit();


	~Window();


};

