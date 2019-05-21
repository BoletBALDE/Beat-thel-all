#pragma once
#include <iostream>
class Personnage
{
protected:
	std::string nom;
	int vie ;
	float dommage;
	int Vitesse_Deplacement;
	bool devant = false, arriere = false, gauche = false, droit = false;
public:
	Personnage();
	Personnage(std::string nom, int vie, int Vitesse_Delacement);
	std::string getNom();
	void setNom(std::string nom);

	int getVie();
	void setVie(int vie);

	int getDommage();
	void setDommage(float dommage);

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

