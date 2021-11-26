#include "Selenium.h"

using namespace std;

void printLogo()
{
    cout << R"(
   
         ____    _____   _       _____   _   _   ___   _   _   __  __ 
        / ___|  | ____| | |     | ____| | \ | | |_ _| | | | | |  \/  |
        \___ \  |  _|   | |     |  _|   |  \| |  | |  | | | | | |\/| |
         ___) | | |___  | |___  | |___  | |\  |  | |  | |_| | | |  | |
        |____/  |_____| |_____| |_____| |_| \_| |___|  \___/  |_|  |_|
                                                                 
------------------------------------------------------------------------------)";

    cout << endl << endl;
}


int main()
{
    // Declarations of the menu options
    string menuOptions[3] = { "Play", "Rules", "Exit" };
    int menuOptionsIndex = 0;
    bool flag = 0;

    printLogo();

        // Menu outputs - the different options
    for (int i = 0; i < 3; i++)
    {
        if (menuOptionsIndex == i)
        {
            cout << setw(38) <<"> " << menuOptions[i] << " <"<< endl;
        }
        else
        {
            cout << setw(38) << " " << menuOptions[i] << endl;
        }
    }

    cout << endl << "------------------------------------------------------------------------------";

    //TODO: Add comment. The endless while loop was breaking the randomisation
    bool play = true;

    while (play)
    {
        // Navigation system with W and S keys
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

                printLogo();

                for (int i = 0; i < 3; i++)
                {
                    if (menuOptionsIndex == i)
                    {
                        cout << setw(38) << "> "<< menuOptions[menuOptionsIndex] << " <" << endl;
                    }
                    else
                    {
                        cout << setw(38) << "  " << menuOptions[i] << "  " << endl;
                    }

                }

                cout << endl << "------------------------------------------------------------------------------";

            }
            else
            {
                system("cls");
                // If the user is on one of the options
                switch (menuOptionsIndex)
                {
                    // Play
                    case 0:

                        displayExercise();
                        play = false;
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