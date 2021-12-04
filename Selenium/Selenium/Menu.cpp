#include "Menu.h"

//Output for the logo
void printLogo()
{
    cout << R"(
   
              ____    _____   _       _____   _   _   ___   _   _   __  __ 
             / ___|  | ____| | |     | ____| | \ | | |_ _| | | | | |  \/  |
             \___ \  |  _|   | |     |  _|   |  \| |  | |  | | | | | |\/| |
              ___) | | |___  | |___  | |___  | |\  |  | |  | |_| | | |  | |
             |____/  |_____| |_____| |_____| |_| \_| |___|  \___/  |_|  |_|
                                                                 
    --------------------------------------------------------------------------------)";

    cout << endl << endl;
}

void printEndScreen(int correctAnswers)
{
    cout << endl;
    cout << "   Congratulations! You've got " << correctAnswers << "/8";
    cout << endl;
}

// Menu outputs - the different options
void firstOutput(string menu[3])
{
    int menuIndex = 0;

    for (int i = 0; i < 3; i++)
    {
        if (menuIndex == i)
        {
            cout << setw(42) << "> " << menu[i] << " <" << endl;
        }
        else
        {
            cout << setw(42) << " " << menu[i] << endl;
        }
    }
}

void game()
{
    int correctAnswers = 0;
    correctAnswers += displayExerciseLevelOne();
    correctAnswers += displayExerciseLevelTwo();
    correctAnswers += displayExerciseLevelThree();

    printEndScreen(correctAnswers);
}

// Menu output changes after the certain option is selected
void menuSelectedOption(string menu[3], int indexMenu)
{

    for (int i = 0; i < 3; i++)
    {
        if (indexMenu == i)
        {
            cout << setw(42) << "> " << menu[indexMenu] << " <" << endl;
        }
        else
        {
            cout << setw(42) << " " << menu[i] << "  " << endl;
        }

    }
}

void movementUp(int &up)
{
    // This way we avoid the situation where it can go up forever
    if (up <= 0)
    {
        up = 2;
    }
    else
    {
        --up;
    }
}

void movementDown(int &down)
{
    // This way we avoid the situation where it can go down forever
    if (down >= 2)
    {
        down = 0;
    }
    else
    {
        ++down;
    }
}

// Navigation system with W and S keys
void navigationSystem(int &navigationMechanics, bool &flag)
{
    switch (_getch())
    {

        // With W the user can go up the options
    case 'W':
    case 'w':

        movementUp(navigationMechanics);
        break;

        // With S the user can go down the options
    case 'S':
    case 's':

        movementDown(navigationMechanics);
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
}

// If the user is on one of the options
void optionPicker(int selectedOption, bool &play)
{
    switch (selectedOption)
    {
        // Play
    case 0:

        game();
        play = true;
        break;

        // Rules
    case 1:

        displayRules();
        cout << "Press ESC to go back to the menu" << endl;
        break;

        // Exit
    case 2:

        cout << endl;
        cout << "   Thanks for playing!" << endl;
        play = true;
        break;
    }
}

void menu()
{
    // Declarations of the menu options
    string menuOptions[3] = { "Play", "Rules", "Exit" };
    int menuOptionsIndex = 0;
    bool flag = 0;

    printLogo();

    firstOutput(menuOptions);

    cout << endl << "    --------------------------------------------------------------------------------";

    //With "play" the user can stop the game either with "Exit" or do all the tasks in "Play"
    bool play = false;

    while (!play)
    {
        if (_kbhit())
        {
            system("cls");

            navigationSystem(menuOptionsIndex, flag);

            // This way we avoid the menu showing up when the user has already picked an option
            if (!flag)
            {

                printLogo();
                menuSelectedOption(menuOptions, menuOptionsIndex);
                cout << endl << "    --------------------------------------------------------------------------------";

            }
            else
            {
                system("cls");
                optionPicker(menuOptionsIndex, play);
            }
        }
    }
}