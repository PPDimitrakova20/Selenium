#include "LevelOne.h"

//Pause game until input
void pause()
{
    cout << endl << endl <<  "  Press any key to continue...";
    _getch();
}

//Randomising exercises
void randomiseExercises(int randEx[])
{
    srand(unsigned(time(NULL)));
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

//Randomising values
void pickValue(int arr[], int &value, int size)
{
    int index = rand() % size;
    value = arr[index];
}

//The three exercises
void showFirstExerciseLevelOne()
{
    int acceleration;
    int forceValues[] = { 500, 300, 200, 600, 400 };
    int massValues[] = { 1, 2, 4, 50, 100 };
    int mass, force;

    pickValue(massValues, mass, SIZE(massValues));
    pickValue(forceValues, force, SIZE(forceValues));

    cout << endl;
    cout << "   A body with mass " << mass << " kg is acted upon by a force " << force << "N. What is its acceleration?" << endl;
    cout << endl;

    cout << "   Enter your answer: ";
    cin >> acceleration;

    if (acceleration == (force / mass))
    {
        cout << "   Correct!";
    }
    else
    {
        cout << "   Incorrect!";
    }
}

void showSecondExerciseLevelOne()
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

        if (result == 'N' or result == 'n')
        {
            cout << "   Correct!";
            break;
        }
        else if (result == 'Y' or result == 'y')
        {
            cout << "   Incorrect!";
            break;
        }
        else
        {
            cout << "   Incorrect Input. Expected Input: Y/N" << endl;
            cout << "   Enter your answer: ";
            result = _getch();
        }
    }
}

void showThirdExerciseLevelOne()
{
    int result;
    int weight;
    int weightSupplies;

    int weightValues[] = { 1000, 810, 750, 600, 540 };
    int weightSuppliesValues[] = { 500, 400, 200, 100 };

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

    if (result == (weight - weightSupplies))
    {
        cout << "   Correct!";
    }
    else
    {
        cout << "   Incorrect!";
    }
}


void displayExerciseLevelOne()
{

    srand((unsigned)time(NULL));

    int randEx[] = { 1, 2, 3 };

    randomiseExercises(randEx);

    for (int i = 0; i < 3; i++)
    {
        system("cls");

        switch (randEx[i])
        {
        case 1:

            showFirstExerciseLevelOne();
            break;

        case 2:

            showSecondExerciseLevelOne();
            break;

        case 3:

            showThirdExerciseLevelOne();
            break;
        }
        
        pause();
    }

    system("cls");
}