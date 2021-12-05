#include "Info.h"

void printIntroduction()
{
	cout << R"(
		      INTRODUCTION

	    Hello, this is our game quiz about Physics.
	  There are 8 questions in three different categories.
	You can't go back and at the end you can see your result.
)";
}

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

void displayInfo()
{
	printIntroduction();
	displayLegend();

	cout << "       Press ESC to go back to the menu" << endl;
}
