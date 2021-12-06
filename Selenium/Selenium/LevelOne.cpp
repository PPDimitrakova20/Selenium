#include "LevelOne.h"

/**
 * .Pauses the game
 * 
 */
void pause()
{
    cout << endl << endl <<  "  Press any key to continue...";
    _getch();
}

/**
 * .Randomises the exercises in LevelOne.cpp
 * 
 * \param randEx array of exercises
 */
void randomiseExercises(int randEx[])
{
    system("cls");

    int temp;

    for (int i = 2; i > 0; i--)
    {
        // Pick a random index from 0 to 2
        int j = rand() % (i + 1);

        // Swap randEx[i] with the element at random index
        temp = randEx[j];
        randEx[j] = randEx[i];
        randEx[i] = temp;
    }
}

/**
 * .Randomises values
 * 
 * \param arr array of values
 * \param value chosen value
 * \param size size of array
 */
void pickValue(int arr[], int &value, int size)
{
    int index = rand() % size;
    value = arr[index];
}


/**
 * .Displays first exercise in LevelOne
 * 
 * \return true if correct otherwise false
 */
bool showFirstExerciseLevelOne()
{
    int acceleration;
    int forceValues[] = { 500, 300, 200, 600, 400 };
    int massValues[] = { 1, 2, 4, 50, 100 };
    int mass, force;

    // Randomising the two values in excercise 1
    pickValue(massValues, mass, SIZE(massValues));
    pickValue(forceValues, force, SIZE(forceValues));

    cout << endl;
    cout << "   A body with mass " << mass << " kg is acted upon by a force " << force << "N. What is its acceleration?" << endl;
    cout << endl;

    cout << "   Enter your answer: ";
    cin >> acceleration;

    // Checking if the answer is correct
    if (acceleration == (force / mass))
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
 * .Displays second exercise in LevelOne
 *
 * \return true if correct otherwise false
 */
bool showSecondExerciseLevelOne()
{
    char result;

    cout << endl;
    cout << "   Is it possible for a person who is on a moving-up escalator" << endl
         << "   to remain at rest, relative to the earth's surface? (Y/N)" << endl;
    cout << endl;
    
    cout << "   Enter your answer: ";
    result = _getch();

    while (true)
    {
        cout << result << endl;

        // Checking if the answer is correct
        if (result == 'N' or result == 'n')
        {
            cout << "   Correct!";
            return true;
        }
        else if (result == 'Y' or result == 'y')
        {
            cout << "   Incorrect!";
            return false;
        }
        // If the user accidentally answers with any other character
        else
        {
            cout << "   Incorrect Input. Expected Input: Y/N" << endl;
            cout << "   Enter your answer: ";
            result = _getch();
        }
    }
}

/**
 * .Displays third exercise in LevelOne
 *
 * \return true if correct otherwise false
 */
bool showThirdExerciseLevelOne()
{
    int result;
    int weight;
    int weightSupplies;

    int weightValues[] = { 1000, 810, 750, 600, 540 };
    int weightSuppliesValues[] = { 500, 400, 200, 100 };

    // Randomising the two values in excercise 3
    pickValue(weightValues, weight,SIZE(weightValues));
    pickValue(weightSuppliesValues, weightSupplies,SIZE(weightSuppliesValues));

    cout << endl;
    cout << "   To elevate construction materials with a weight of " << weightSupplies << "N, "
         << "a worker wit a weight of " << weight << "N "
         << "montages a motionless spool." << endl;
    cout << "   What pressure does the ground he's standing on take?" << endl;
    cout << endl;

    cout << "   Enter your answer: ";
    cin >> result;

    // Checking if the answer is correct
    if (result == (weight - weightSupplies))
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
 * .Displays all exercises in LevelOne
 * 
 * \return returns number of correct answers
 */
int displayExerciseLevelOne()
{
    // Counter for every correct answer
    int correctAnswersLevelOne = 0;

    // Randomising the exercises
    srand((unsigned)time(NULL));

    int randEx[] = { 1, 2, 3 };

    randomiseExercises(randEx);

    for (int i = 0; i < 3; i++)
    {
        system("cls");

        switch (randEx[i])
        {
        case 1:

            correctAnswersLevelOne += showFirstExerciseLevelOne();
            break;

        case 2:

            correctAnswersLevelOne += showSecondExerciseLevelOne();
            break;

        case 3:

            correctAnswersLevelOne += showThirdExerciseLevelOne();
            break;
        }

        pause();
    }

    system("cls");

    // After the user finishes with level one their score will show up
    cout << endl;
    cout << "   Level 1 completed! Correct exercises: " << correctAnswersLevelOne << "/3" << endl << endl;

    pause();

    system("cls");

    return correctAnswersLevelOne;
}