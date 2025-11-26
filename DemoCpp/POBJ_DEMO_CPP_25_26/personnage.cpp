//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: personnage.cpp
// Date de création 	: 26.11.2025
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//

//-- librairie standard --//
#include <iostream>

//-- libraire personnelle --// 
#include "personnage.h"

/* ----------------------------------------------------------------------------------
// Methode Name			: Personnage 
// input parameters		: 
// output parameters	:
// reference parameters : 
// descrription			: constructeur
---------------------------------------------------------------------------------- */
Personnage::Personnage()
{
	vie = 100; 
}

/* ----------------------------------------------------------------------------------
// Methode Name			: Personnage
// input parameters		:
// output parameters	:
// reference parameters :
// descrription			: constructeur surcharger
---------------------------------------------------------------------------------- */
Personnage::Personnage(int valCommencement)
{
	vie = valCommencement;
}

 

/* ----------------------------------------------------------------------------------
// Methode Name			: Personnage
// input parameters		:
// output parameters	:
// reference parameters :
// descrription			: constructeur surcharger
---------------------------------------------------------------------------------- */
void Personnage::AfficherVie()
{
	std::cout << Personnage::vie << std::endl; 
	std::cout << vie << std::endl; 
}


/* ----------------------------------------------------------------------------------
// Methode Name			: Personnage
// input parameters		:
// output parameters	:
// reference parameters :
// descrription			: constructeur surcharger
---------------------------------------------------------------------------------- */
Personnage::~Personnage()
{
	vie = 0; 
}

