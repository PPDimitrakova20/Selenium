#include "Rules.h"

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