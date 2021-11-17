#include <iostream>
#include <conio.h> //_kbhit, _getch

using namespace std;

int main()
{
    //Declarations of the menu options
    string menuOptions[3] = { "Play", "Rules", "Exit" };
    int menuOptionsIndex = 0;

    while (true)
    {
        //system("cls");

        //Menu output
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

        //Navigation
        while (true)
        {
            if (_kbhit())
            {
                switch (_getch())
                {
                case 'w':
                    menuOptionsIndex -= 1;
                    if (menuOptionsIndex == -1)
                    {
                        menuOptionsIndex = 2;
                    }
                    system("cls");
                    break;
                case 's':
                    menuOptionsIndex += 1;
                    if (menuOptionsIndex == 3)
                    {
                        menuOptionsIndex = 0;
                    }
                    system("cls");
                    break;
                }

                for (int i = 0; i < 3; i++)
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
        }
    }
}