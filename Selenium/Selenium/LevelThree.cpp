#include "LevelThree.h"

/**
 * .Displays first exercise in LevelThree
 *
 * \return true if correct otherwise false
 */
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

/**
 * .Displays first output of first exercise answers
 * 
 * \param answers array of answers
 */
void printFirstExcerciseAnswers(string answers[3])
{
    int answersIndex = 0;

    printFirstExcerciseLevelThree();

    for (int i = 0; i < 3; i++)
    {
        if (answersIndex == i)
        {
            cout << setw(6) << answers[i] << "<";
        }
        else
        {
            cout << setw(24) << answers[i];
        }
    }
}

/**
 * .Moves the answer left
 * 
 * \param left index of answer
 */
void moveLeft(int &left)
{
    // This way we avoid the situation where it can go left forever
    if (left <= 0)
    {
        left = 2;
    }
    else
    {
        --left;
    }
}

/**
 * .Moves the answer right
 * 
 * \param right index of answer
 */
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

/**
 * .Handles input
 * 
 * \param navigationMechanics index of answer
 * \param flag shows if Enter is pressed
 */
void navigateBetweenAnswers(int &navigationMechanics, bool &flag)
{
    switch (_getch())
    {

        // With A the user can go left
    case 'A':
    case 'a':

        moveLeft(navigationMechanics);
        break;

        // With D the user can go right
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

/**
 * .Prints "<" after chosen answer
 * 
 * \param answers array of answers
 * \param indexAnswers index of answers
 */
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

/**
 * .Checks if answer is correct
 * 
 * \param selectedAnswer index of chosen asnwer
 * \param complete shows if option is chosen
 * \return true if answer is correct otherwise false
 */
bool answerPick(int selectedAnswer, bool &complete)
{
    // Checking if the answer is correct
    switch (selectedAnswer)
    {
        // A)
    case 0:

        cout << "   Incorrect!";
        complete = 1;
        return false;
        break;

        // B)
    case 1:

        cout << "   Incorrect!" << endl;
        complete = 1;
        return false;
        break;

        // C)
    case 2:

        cout << "   Correct!" << endl;
        complete = 1;
        return true;
        break;
    }
}

/**
 * .Displays first exercise in LevelThree
 * 
 * \return chosen answer
 */
bool showFirstExerciseLevelThree()
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
               return answerPick(optionsIndex, complete);
            }
        }
    }
}

/**
 * .Displays second exercise in LevelThree
 *
 * \return true if correct otherwise false
 */
bool showSecondExerciseLevelThree()
{
    int resistanceOne, resistanceTwo, resistanceThree;
    int resistanceValues[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    int result;

    // Randomising values
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

    // Checking if the answer is correct
    if (result == resistanceOne + resistanceTwo + resistanceThree)
    {
        cout << "   Correct!";
        return true;
    }
    else
    {
        cout << "   Incorrect!";
        return false;
    }
}

/**
 * .Displays third exercise in LevelThree
 *
 * \return true if correct otherwise false
 */
bool showThirdExerciseLevelThree()
{
    int voltages, amperes;
    int voltagesValues[] = { 2, 4, 6, 8, 10, 12 };
    int amperesValues[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result;

    // Randomising values
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
    cin.ignore();
    cin >> result;

    // Checking if the answer is correct
    if (result == voltages / 2)
    {
        cout << "   Correct!";
        return true;
    }
    else
    {
        cout << "   Incorrect!";
        return false;
    }
}

/**
 * .Displays all exercises in LevelThree
 *
 * \return returns number of correct answers
 */
int displayExerciseLevelThree()
{
    // Counter for every correct answer
    int correctAnswersLevelThree = 0;

    int randEx[] = { 1, 2, 3 };

    randomiseExercises(randEx);

    for (int i = 0; i < 3; i++)
    {
        system("cls");

        switch (randEx[i])
        {
        case 1:

            correctAnswersLevelThree += showFirstExerciseLevelThree();
            break;

        case 2:

            correctAnswersLevelThree += showSecondExerciseLevelThree();
            break;

        case 3:

            correctAnswersLevelThree += showThirdExerciseLevelThree();
            break;
        }

        pause();
    }

    system("cls");

    // After the user finishes with level three their score will show up
    cout << endl;
    cout << "   Level 3 completed! Correct exercises: " << correctAnswersLevelThree << "/3";

    pause();

    system("cls");

    return correctAnswersLevelThree;
}
