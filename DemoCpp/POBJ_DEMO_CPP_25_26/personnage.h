//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: personnage.h
// Date de création 	: 26.11.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage
{
	//-- visibilité attribut 
	public:
		short taille;

	private : 
		


	protected:

	private:
		int vie;

		//-- visibilité méthode
	public:
		//
		

		//-- constructeur 
		Personnage();	
		Personnage(int valCommencement); 

		// Ne plus comme un constructeur !!!
		//void Personnage(); 

		//-- desctructeur
		~Personnage(); 

		//-- méthode --// 
		void AfficherVie(); 
		
		int Attaquer(int arme);

	protected:

	private:
}; // A ne pas oublier !!!  


#endif // !PERSONNAGE_H