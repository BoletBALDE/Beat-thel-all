#pragma once
#include <SFML/Graphics.hpp>
class Entite 
{
protected :
	sf::Texture  texture;
public:
	Entite();
	void update();
	~Entite();
};

