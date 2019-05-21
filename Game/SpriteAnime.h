#pragma once
#include "Entite.h"
#include <SFML/Graphics.hpp>
class SpriteAnime : public Entite
{protected :
	sf::Clock clok;
public:
	SpriteAnime();
	void action();
	void animation();
	~SpriteAnime();
};

