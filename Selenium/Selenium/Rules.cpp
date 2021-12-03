#include "Rules.h"

void printIntroduction()
{
	cout << endl << "			INTRODUCTION" << endl << endl
	<< "		Hello, this is our game quiz about Physics. " << endl
	<< "	There are 9 questions in three different categories. " << endl
	<< "You can't go back and at the end you can see your result.";
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

void displayRules()
{
	printIntroduction();
	displayLegend();
}
