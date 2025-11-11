//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: demoSLO.cpp
// Date de création 	: 21.11.2023
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
//-- librairie standart --// 
#include <iostream>								// <stdio.h>
#include <string>

#include "ClassDemo.h"

void Convertir(int valAConv, char (&binaire)[100]) 
{
	int reste = 1; 
	int index = 0; 


	while (valAConv != 0)
	{
		reste = valAConv % 2;
		valAConv = valAConv >> 1; 

		if (reste == 1)
			binaire[index] = 0; 
		else 
			binaire[index] = 1;

		index++; 
	}
}