#pragma once
#include <iostream>
class Personnage
{
protected : 
	std::string nom;
	int vie = 100;
	int Vitesse_Deplacement;
	bool devant = false, arriere = false, gauche = false,droit = false;
public:
	Personnage();
	Personnage(std::string nom, int vie, int Vitesse_Delacement);
	std::string getNom();
	int getVie();
	void setNom(std::string nom);
	void setVie(int vie);

	int getVitesse_Deplacement();
	void setVitesse_Deplacement(int Vitesse_Deplacement);

	bool getDevant();
	void setDevant(bool devant);

	bool getArriere();
	void setArriere(bool devant);

	bool getGauche();
	void setGauche(bool devant);

	bool getDroit();
	void setDroit(bool devant);
	//***********************
	void marcher();
	void attaquer();
	void bloquer();
	void mourir();
	~Personnage();
};

