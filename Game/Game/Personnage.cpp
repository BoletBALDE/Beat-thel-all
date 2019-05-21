#include "Personnage.h"


Personnage::Personnage(){}
Personnage::Personnage(std::string nom, int vie, int Vitesse_Delacement)
{
	this->nom = nom;
	this->vie = vie;
	this->Vitesse_Deplacement = Vitesse_Delacement;
}

std::string Personnage::getNom() { return this->nom; }
void Personnage::setNom(std::string nom) { this->nom = nom; }

int Personnage::getVie() {return this->vie;}
void Personnage::setVie(int vie) { this->vie = vie; }

int Personnage::getVitesse_Deplacement() { return this->Vitesse_Deplacement; }
void Personnage::setVitesse_Deplacement(int Vitesse_Deplacement) { this->Vitesse_Deplacement = Vitesse_Deplacement; }


bool Personnage::getDevant() { return this ->devant; }
void Personnage::setDevant(bool devant) {this->devant = devant;}

bool Personnage::getArriere() { return this->arriere; }
void Personnage::setArriere(bool arriere) { this->arriere = arriere; }

bool Personnage::getGauche() { return this->gauche; }
void Personnage::setGauche(bool gauche) { this->gauche = gauche; }

bool Personnage::getDroit() { return this->droit; }
void Personnage::setDroit(bool droit) { this->droit = droit; }
//********************************
void Personnage::marcher() {
}
void Personnage::attaquer() {}
void Personnage::bloquer() {}
void Personnage::mourir() {}

Personnage::~Personnage()
{
}
