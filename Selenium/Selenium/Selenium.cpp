#include <conio.h> // _kbhit, _getch
#include "LevelOne.h"

using namespace std;

int main()
{
    // Declarations of the menu options
    string menuOptions[3] = { "Play", "Rules", "Exit" };
    int menuOptionsIndex = 0;
    bool flag = 0;

        // Menu outputs - the different options
    for (int i = 0; i < 3; i++)
    {
        if (menuOptionsIndex == i)
        {
            cout << "> " << menuOptions[i] << " <"<< endl;
        }
        else
        {
            cout << "  " << menuOptions[i] << endl;
        }
    }

    // Navigation system with W and S keys
    while (true)
    {
        if (_kbhit())
        {
            system("cls");
            
            switch (_getch())
            {
                // With W the user can go up the options
                case 'w':

                    menuOptionsIndex--;
                    // This way we avoid the situation where it can go up forever
                    if (menuOptionsIndex == -1)
                    {
                        menuOptionsIndex = 2;
                    }
                    break;

                // With S the user can go down the options
                case 's':

                    menuOptionsIndex++;
                    // This way we avoid the situation where it can go down forever
                    if (menuOptionsIndex == 3)
                    {
                        menuOptionsIndex = 0;
                    }
                    break;

                // If the user presses Enter
                case 13:

                    flag = 1;
                    break;

                // If the user presses Escape to go back 
                case 27:

                    flag = 0;
                    break;
            }

            // Menu output changes after the certain option is selected
            // This way we avoid the menu showing up when the user has already picked an option
            if (!flag)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (menuOptionsIndex == i)
                    {
                        cout << "> " << menuOptions[menuOptionsIndex] << " <" << endl;
                    }
                    else
                    {
                        cout << "  " << menuOptions[i] << "  " << endl;
                    }

                }
            }
            else
            {
                // If the user is on one of the options
                switch (menuOptionsIndex)
                {
                    // Play
                    case 0:

                        TaskOne();
                        break;

                    // Rules
                    case 1:

                        cout << "Rules: . . ." << endl;
                        cout << "Press ESC to go back to the menu" << endl;
                        break;

                    // Exit
                    case 2:

                        cout << "Thanks for playing!" << endl;
                        return 0;
                        break;
                }
            }

        }

    }
}