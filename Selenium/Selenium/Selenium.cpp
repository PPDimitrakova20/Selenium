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

// Menu outputs - the different options
void firstOutput(string menu[3])
{
    int menuIndex = 0;

    for (int i = 0; i < 3; i++)
    {
        if (menuIndex == i)
        {
            cout << setw(38) << "> " << menu[i] << " <" << endl;
        }
        else
        {
            cout << setw(38) << " " << menu[i] << endl;
        }
    }
}

// Menu output changes after the certain option is selected
void menuSelectedOption(string menu[3], int indexMenu)
{

    for (int i = 0; i < 3; i++)
    {
        if (indexMenu == i)
        {
            cout << setw(38) << "> " << menu[indexMenu] << " <" << endl;
        }
        else
        {
            cout << setw(38) << "  " << menu[i] << "  " << endl;
        }

    }
}
int movementUp(int up)
{
    // This way we avoid the situation where it can go up forever
    if (up <= -1)
    {
        return up = 2;
    }
    else
    {
        return up--;
    }
}
int movementDown(int down)
{
    // This way we avoid the situation where it can go down forever
    if (down >= 3)
    {
        return 0;
    }
    else
    {
        return down++;
    }
}

void optionPicker(int selectedOption, bool play)
{
    // If the user is on one of the options
    switch (selectedOption)
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

        //FIXME: Doesn't end the program. I think it ends only the function
        cout << "Thanks for playing!" << endl;
        return;
        break;
    }
}

int main()
{
    // Declarations of the menu options
    string menuOptions[3] = { "Play", "Rules", "Exit" };
    int menuOptionsIndex = 0;
    bool flag = 0;

    printLogo();

    firstOutput(menuOptions);

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

                //FIXME: The movement is bugged. It doesn't return the value.
                menuOptionsIndex = movementUp(menuOptionsIndex);
                break;

                // With S the user can go down the options
            case 's':

                //FIXME: The movement is bugged. It doesn't return the value.
                menuOptionsIndex = movementDown(menuOptionsIndex);
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

            // This way we avoid the menu showing up when the user has already picked an option
            if (!flag)
            {

                printLogo();
                menuSelectedOption(menuOptions, menuOptionsIndex);
                cout << endl << "------------------------------------------------------------------------------";

            }
            else
            {
                system("cls");
                optionPicker(menuOptionsIndex, play);
            }
        }
    }
}