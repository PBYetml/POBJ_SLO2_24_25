//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: ClassDemo.cpp
// Date de création 	: 12.03.2024
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
#ifndef USER_H 
#define USER_H 

//-- déclaration lib --// 
#include <string>

class user
{
	//-- attributs --// 
	//--- public 
	public:
		//static int demoStatic;*/  
		enum e_MessageUser : int { msg1, msg2, msg3 };

	//-- protected
	protected : 
		float valUser_m; 

	//--- private 
	private : 
		const short LIMIT_MAX_USER; 
		const short LIMIT_MIN_USER; 


	//-- constructeur --// 
	//--- public
	public : 
		user(short limitmax, short limitmin); 
	//-- protected

	//--- private 



	//-- méthodes --// 
	//--- public 
	public : 
		void AfficherMsgUser(e_MessageUser codeMsg);
		float GetNumberValue(); 
		void SetNumberValue(float valUser); 
		bool ValiderValUser(float valATester); 
		
		static void FctDemoStatique(void); 

	//-- protected

	//--- private 



};


#endif // !USER_H 

