#include "LevelThree.h"

void printFirstExcerciseLevelThree()
{
    cout << R"(
    Which circuit is a parallel circuit?


    +-----|I--|I------+     +-----|I--|I------+     +-----|I--|I------+
    |                 |     |                 |     |                 |
    |                 |     |                 |     |      _____      |
    |                 |     |                 |     +------|___|------+
    |                 |     |                 |     |                 |
    |      _____      |     |  _____   _____  |     |      _____      |
    +------|___|------+     +--|___|---|___|--+     +------|___|------+

)";
}

void printFirstExcerciseAnswers(string answers[3])
{
    int answersIndex = 0;

    printFirstExcerciseLevelThree();

    for (int i = 0; i < 3; i++)
    {
        if (answersIndex == i)
        {
            if (i == 0)
            {
                cout << setw(6) << answers[i] << "<";
            }
            else
            {
                cout << setw(24) << answers[i] << "<";
            }
        }
        else
        {
            if (i == 0)
            {
                cout << setw(6) << answers[i];
            }
            else
            {
                cout << setw(24) << answers[i];
            }
        }
    }
}

void moveLeft(int &left)
{
    // This way we avoid the situation where it can go right forever
    if (left <= 0)
    {
        left = 2;
    }
    else
    {
        --left;
    }
}

void moveRight(int &right)
{
    // This way we avoid the situation where it can go right forever
    if (right >= 2)
    {
        right = 0;
    }
    else
    {
        ++right;
    }
}

void navigateBetweenAnswers(int &navigationMechanics, bool &flag)
{
    switch (_getch())
    {

        // With A the user can go right
    case 'A':
    case 'a':

        moveLeft(navigationMechanics);
        break;

        // With D the user can go left
    case 'D':
    case 'd':

        moveRight(navigationMechanics);
        break;

        // If the user presses Enter
    case 13:

        flag = 1;
        break;

    }
}
void selectFirstExcerciseAnswer(string answers[3], int indexAnswers)
{
    printFirstExcerciseLevelThree();

    for (int i = 0; i < 3; i++)
    {
        if (indexAnswers == i)
        {
            if (indexAnswers == 0)
            {
                cout << setw(6) << answers[indexAnswers] << "<";
            }
            else
            {
                cout << setw(24) << answers[indexAnswers] << "<";
            }
        }
        else
        {
            if (i == 0)
            {
                cout << setw(6) << answers[i];
            }
            else
            {
                cout << setw(24) << answers[i];
            }
        }

    }
}
// If the user is on one of the options
void answerPick(int selectedAnswer, bool &complete)
{
    switch (selectedAnswer)
    {
        // A)
    case 0:

        cout << "Incorrect!";
        complete = 1;
        break;

        // B)
    case 1:

        cout << "Incorrect!" << endl;
        complete = 1;
        break;

        // C)
    case 2:

        cout << "Correct!" << endl;
        complete = 1;
        break;
    }
}


void showFirstExerciseLevelThree()
{
    char result;
    string options[3] = { "A)", "B)", "C)" };
    int optionsIndex = 0;
    bool flag = 0;
    bool complete = 0;

    printFirstExcerciseAnswers(options);

    while (!complete)
    {
        if (_kbhit())
        {
            system("cls");

            navigateBetweenAnswers(optionsIndex, flag);

            // This way we avoid the answers showing up again
            if (!flag)
            {
                selectFirstExcerciseAnswer(options, optionsIndex);

            }
            else
            {
                //system("cls");
                answerPick(optionsIndex, complete);
            }
        }
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
                +----(V)---+
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
