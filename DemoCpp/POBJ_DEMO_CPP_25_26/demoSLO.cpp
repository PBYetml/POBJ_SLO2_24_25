/*---------------------------------------------------------------------------------- -//
// Projet Name 			: POBJ_DemoCPP_24_25
// File Name 			: demoSLO.cpp
// Creation Date 		: 19.09.2024
// Modification Date	: 15.11.2024
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 0.3
//
// Description          : demo for SLO2's team  
//						 
// Remarks				: 
//----------------------------------------------------------------------------------*/

//-- standart libraries --// 
#include <iostream>			// equivalent at the <stdio.h> in C
#include <string>			// for the objects linked to the string 
#include <cstdint>			// to use a C library 

//-- personnal libraries -> class --// 


//-- prototype with "surcharge" concept --//
//-- WARNING : if the oupput is only modified, this is not equivalent to on "surcharge"
void Diviser(int var1, int var2, float &result);				// prototype 1
int Diviser(float var1, float var2, float& result);				// prototype 2 -> Surcharge 
int Diviser( int& result, double var1, double var2 = 10);		// prototype 3 -> surcharge and default value

//-- main programme -> entry point of the programm --//
void main()
{
	//-- variable's declaration --//
	//-- static memory -> "ROM" 
	//-- primitive type  --// 
	//-- integer --//
	bool valB;		//-> 1 octet			//-> true ou false 
	char valC;		//-> 1 octet
	short valS;		//-> 2 octet
	int valI;		//-> 4 octet 
	long valL;		//-> 4 octet 
	
	//-- example with normalized type --// 
	int8_t valI2; 

	//-- real --//
	float  valF;		//-> 4 octet 
	double valD;		//-> 8 octet 

	bool A = false;		//-> not linked to a numeric value

	//-- pointer declaration --// 
	int* ptTBdemo; 

	//-- using the dynamique memories with a primitive variable --//
	ptTBdemo = new int[10]; 

	//-- object--// 
	std::string chaine, chaine2; 

	chaine = "HELLO"; 
	chaine2 = "SLO"; 

	//-- use of an object -> lenth of character string 
	valI = chaine.length(); 

	//-- msg user --// 
	std::cout << chaine << " " << chaine2 << std::endl;
	std::cout << "HELLO SLO !! \n" << std::endl;

	//-- function calling --// 
	Diviser(10, 5, valF); 
	Diviser(valI, 5.5); 

	//exampke to take a keyboard value --//
	std::cin >> valI;		// integer value pour valeur entière 
	std::cin >> valF;		// real value   
	std::cin >> chaine;		// string with an object 


	//-- prendre une valeur du clavier --//
	/*std::cin >> valD;		//-> exemple un caractère 
	std::cin >> chaine;		//-> exemple chaine de caractère 
	std::cin >> valB;		//-> exemple valeur

	chaine2 = chaine;			// copie d'un objet ->

	valX = chaine2.length();	//chercher la longueur d'une chaine de caractère 

	valA = chaine.find("on");	// chercher une occurence 
	*/

	// REMARQUE : static en C : garder la valeur d'une variable dans une fct 
	//            static en C++ : pas besoin d'objet pour utiliser des méthodes ou attributs static 

	//--- dynamique

	system("pause"); 
}



//-- déclaration 
void Diviser(int var1, int var2, float &result)
{
	result = var1 / var2; 
}


int Diviser(float var1, float var2, float& result)
{
	return result = var1 / var2;
}

int Diviser(int& result, double var1, double var2)
{
	return result = var1 / var2;
}
