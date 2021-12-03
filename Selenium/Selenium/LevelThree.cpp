#include "LevelThree.h"

void showFirstExerciseLevelThree()
{
    char result;

    cout << R"(
    Which circuit is a parallel circuit?


    +-----|I--|I------+     +-----|I--|I------+     +-----|I--|I------+
    |                 |     |                 |     |                 |
    |                 |     |                 |     |      _____      |
    |                 |     |                 |     +------|___|------+
    |                 |     |                 |     |                 |
    |      _____      |     |  _____   _____  |     |      _____      |
    +------|___|------+     +--|___|---|___|--+     +------|___|------+

    A)                     B)                      C)


)";

    // TODO: Make options selectable with _getch()
    cout << "   Enter your answer: ";
    cin >> result;

    if (result == 'C' || result == 'c' || result == 'C)' || result == 'c)')
    {
        cout << "   Correct!";
    }
    else
    {
        cout << "   Incorrect!";
    }
}

void showSecondExerciseLevelThree()
{
    int resistanceOne, resistanceTwo, resistanceThree;
    int resistanceValues[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    int result;

    pickValue(resistanceValues, resistanceOne, SIZE(resistanceValues));
    pickValue(resistanceValues, resistanceTwo, SIZE(resistanceValues));
    pickValue(resistanceValues, resistanceThree, SIZE(resistanceValues));

    cout << R"(
    What is the total resistance of the three resistors connected in series?
    
       )" << resistanceOne << " ohm   " << resistanceTwo << " ohm   " << resistanceThree << " ohm" << R"(
       _____   _____   _____
    ---|___|---|___|---|___|---


)";

    cout << "   Enter your answer: ";
    cin >> result;

    if (result == resistanceOne + resistanceTwo + resistanceThree)
    {
        cout << "   Correct!";
    }
    else
    {
        cout << "   Incorrect!";
    }
}

void showThirdExerciseLevelThree()
{
    int voltages, amperes;
    int voltagesValues[] = { 2, 4, 6, 8, 10, 12 };
    int amperesValues[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    int result;

    pickValue(voltagesValues, voltages, SIZE(voltagesValues));
    pickValue(amperesValues, amperes, SIZE(amperesValues));

    cout << R"(
    What is the correct reading on meter V1 in the following circuit?

    The lamps are identical.
    

                    )" << voltages << R"( V
                +---(V)----+
        )" << amperes << R"( A     |          |
    +---(A)-----+--|I--|I--+----(A2)---+
    |                                  |
    |                                  |
    |                                  |
    +--+--(X)---+---(A1)---+--(X)---+--+
       |        |          |        |
       +--(V1)--+          +--(V2)--+    


)";

    cout << "   Enter your answer: ";
    cin >> result;

    if (result == voltages / 2)
    {
        cout << "   Correct!";
    }
    else
    {
        cout << "   Incorrect!";
    }
}

void displayExerciseLevelThree()
{
    int randEx[] = { 1, 2, 3 };

    randomiseExercises(randEx);

    for (int i = 0; i < 3; i++)
    {
        system("cls");

        switch (randEx[i])
        {
        case 1:

            showFirstExerciseLevelThree();
            break;

        case 2:

            showSecondExerciseLevelThree();
            break;

        case 3:

            showThirdExerciseLevelThree();
            break;
        }

        pause();
        system("cls");
    }
}
