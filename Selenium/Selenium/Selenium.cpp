#include <conio.h> //_kbhit, _getch
#include "LevelOne.h"

using namespace std;

int main()
{
    //Declarations of the menu options
    string menuOptions[3] = { "Play", "Rules", "Exit" };
    int menuOptionsIndex = 0;

        //Menu outputs - the different options
        for (int i = 0; i < 3; i++)
        {
            if (menuOptionsIndex == i)
            {
                cout << "> " << menuOptions[i] << endl;
            }
            else
            {
                cout << "  " << menuOptions[i] << endl;
            }
        }

        //Navigation system with W and S keys
        while (true)
        {
            if (_kbhit())
            {
                switch (_getch())
                {
                case 'w': // With W the user can go up the options
                    menuOptionsIndex--;
                    if (menuOptionsIndex == -1) // This way we avoid the situation where it can go up forever
                    {
                        menuOptionsIndex = 2;
                    }
                    break;
                case 's': // With S the user can go down the options
                    menuOptionsIndex++;
                    if (menuOptionsIndex == 3) // This way we avoid the situation where it can go down   forever
                    {
                        menuOptionsIndex = 0;
                    }
                    break;
                }
                
                system("cls");

                for (int i = 0; i < 3; i++) // Menu output changes after the certain option is selected
                {
                    if (menuOptionsIndex == i)
                    {
                        cout << "> " << menuOptions[menuOptionsIndex] << endl;
                    }
                    else
                    {
                        cout << "  " << menuOptions[i] << endl;
                    }
                }
            }
            // TaskOne();
        }

}