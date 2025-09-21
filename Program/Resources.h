#pragma once  
#include <memory>
#include <string>
#include <unordered_map>
#include <SFML/Graphics.hpp>

class Resources
{
private:
	std::unordered_map<std::string, sf::Texture> resoruces;

public:
	Resources() = default;
	~Resources() = default;

	static Resources & Instance();

	sf::Texture & Load(const std::string & filename);



};

