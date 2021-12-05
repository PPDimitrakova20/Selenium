#include "Info.h"

// Small introduction to our game
void printIntroduction()
{
	cout << R"(
		      INTRODUCTION

	    Hello, this is our game quiz about Physics.
	  There are 8 questions in three different categories.
	You can't go back and at the end you can see your result.
)";
}

// Legend for level three
void displayLegend()
{
	cout << R"(

			LEGEND


	Resistor			Voltmeter
            _____			 
	-- | ___ | --			--(V)--


	Battery				Lamp

	-- | I-- | I--			--(X)-- 


	Open switch			Ammeter

	 -l-				--(A)-- 


	Closed switch

	--.--.--)";

	cout << endl << endl;
}

// Printing everything in Info
void displayInfo()
{
	printIntroduction();
	displayLegend();

	cout << "       Press ESC to go back to the menu" << endl;
}
