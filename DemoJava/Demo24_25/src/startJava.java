import java.io.Console;
import java.util.*;
import java.util.Scanner;
import java.lang.*;

public class startJava {
	
	//-- type primaire --// 
	//--> Entier
	private byte 	integerVal8bits; 
	private short 	integerVal16bits; 
	private int 	integerVal32bits; 
	private long 	integerVal64bits; 
	
	//--> Reel 
	private float 	floatVar32bits; 
	private double 	floatVar64bits; 
	
	//-- autre type --// 
	private boolean boolVal; 
	
	//-- méthode --//
	public void FctDemoAttributs()
	{
		//-- hiérachie de la gestion des constantes --// 
		integerVal8bits = (byte)130;
		integerVal16bits = integerVal8bits; 
		integerVal32bits = integerVal16bits; 
		integerVal64bits = integerVal32bits; 
		
		integerVal64bits = 1000;
		integerVal32bits = (int)integerVal64bits;
		integerVal16bits = (short)integerVal32bits; 
		integerVal8bits = (byte)integerVal16bits; 
		
		floatVar32bits = (float)3.14;
		floatVar64bits = 3.14; 
	}
	
	private String StringStars(byte star, StringBuffer stars2_s)
	{
		//-> variante 1 
		//-- déclaration d'un objet -> type string 
		String stars_s; 
				
		//-- instanciation en mémoire 
		stars_s = new String(); 
		
		if(star == 0)
			stars_s = "";
		else 
			for(byte inc = 0; inc < star; inc++)
				stars_s += "*";  
		
		//-> variante 2 

		if(star == 0)
			stars2_s.insert(0, ' ');
		else 
			for(byte inc = 0; inc < star; inc++)
				stars2_s.append('*');   
	
		return stars_s; 
	}
	
	public void DisplayStars(byte stars)
	{
		//-- déclaration d'objet --// 
		StringBuffer starsV2; 
		//-- instanciation d'objet --//
		starsV2 = new StringBuffer(); 
		
		
		System.out.print(StringStars(stars, starsV2));
		System.out.print('\n');
		System.out.print(starsV2);
	}
	
	
	
	//-- méthode static -> non lié à la class
	public static void main(String[] args) 
	{
		//-- déclaration variable --//
		byte num; 
		
		//-- déclaration d'objet --// 
		startJava demo_O; 
		Scanner scanBoard_O; 
		String infoClavier; 
		
		//-- initialisation de l'objet 
		
		scanBoard_O = new Scanner(System.in); 
		//-- appel du constructeur de démo --//
		demo_O = new startJava(); 
		infoClavier = new String(); 
		
		
		//-- objet -> avec méthode --// 
		demo_O.FctDemoAttributs();
		
		//-- lien entre les variables --// 
		//infoClavier = scanBoard_O.next(); 
		//num = scanBoard_O.nextByte(); 
		
		
		// TODO Auto-generated method stub
		//-- appel de la méthode --// 
		demo_O.DisplayStars((byte)5); 
	}
	
	

}
