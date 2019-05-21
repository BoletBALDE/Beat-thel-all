#include <SFML/Graphics.hpp>
#include "Personnage.h"
#include "Entite.h"
#include "SpriteAnime.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(30.f);
	sf::Clock clock;
	sf::Time dureeIteration = sf::Time::Zero;
	shape.setFillColor(sf::Color::Green);
	Entite entite();
	
	Personnage Hero("Luc", 100,15);
	
	while (window.isOpen())
	{
		sf::Event event;
		dureeIteration = clock.restart();
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			//verifier les mvt du personnage
			if(event.type==sf::Event::KeyPressed){
				switch (event.key.code) {
				case sf::Keyboard::Right:
					Hero.setDevant(true);
					break;
				case sf::Keyboard::Left:
					Hero.setArriere(true);
					break;
				case sf::Keyboard::Up:
					Hero.setGauche(true);
					break;
				case sf::Keyboard::Down:
					Hero.setDroit(true);
					break;
				}
			}
			if (event.type == sf::Event::KeyReleased) {
				switch (event.key.code) {
				case sf::Keyboard::Right:
					Hero.setDevant(false);
					break;
				case sf::Keyboard::Left:
					Hero.setArriere(false);
					break;
				case sf::Keyboard::Up:
					Hero.setDroit(false);
					break;
				case sf::Keyboard::Down:
					Hero.setDroit(false);
					break;
				}
			}
			
		}

		if (Hero.getDevant()) { shape.move(dureeIteration.asSeconds()*(Hero.getVitesse_Deplacement()),0);}
		if (Hero.getArriere()) { shape.move(-dureeIteration.asSeconds()*(Hero.getVitesse_Deplacement()), 0);}
		if (Hero.getDroit()) { shape.move(0,dureeIteration.asSeconds()*(Hero.getVitesse_Deplacement())); }
		if (Hero.getGauche()) { shape.move(0,-dureeIteration.asSeconds()*(Hero.getVitesse_Deplacement())); }

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}