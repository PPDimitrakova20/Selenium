#include "LevelOne.h"

//Pause game until input
void pause()
{
    cout << endl <<  "Press any key to continue...";
    _getch();
}

//Randomising exercises
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

//Randomising values
void pickValue(int arr[], int &value, int size)
{
    int index = rand() % size;
    value = arr[index];
}

//The three exercises
void showFirstExerciseLevelOne()
{
    int result;
    int arrMassValues[] = { 500, 300, 200, 100, 250, 20, 16, 12, 8, 4 };
    int arrForceValues[] = { 1, 2, 4, 50, 200 };
    int mass, force;

    pickValue(arrMassValues, mass, SIZE(arrMassValues));
    pickValue(arrForceValues, force, SIZE(arrForceValues));

    cout << "A body with mass " << mass << " kg is acted upon by a force " << force << "N. What is its acceleration?" << endl;

    cin >> result;

    if (result == (mass - force))
    {
        cout << "Correct!";
    }
    else if (result != (mass / force))
    {
        cout << "Incorrect!";
    }
}

void showSecondExerciseLevelOne()
{
    char answer;

    cout << "Is it possible for a person who is on a moving-up escalator to remain at rest, relative to the earth's surface? (Y/N)" << endl;

    answer = _getch();

    while (true)
    {
        cout << answer << endl;

        if (answer == 'N' or answer == 'n')
        {
            cout << "Correct!";
            break;
        }
        else if (answer == 'Y' or answer == 'y')
        {
            cout << "Incorrect!";
            break;
        }
        else
        {
            cout << "Incorrect Input. Expected Input: Y/N" << endl;
            cin >> answer;
        }
    }
}

void showThirdExerciseLevelOne()
{
    int result;
    int weight;
    int weightSupplies;

    int arrWeightValues[] = { 5000, 3000, 200, 100, 250, 20, 16, 12, 8, 4 };
    int arrWeightSuppliesValues[] = { 1, 2, 4, 50, 200 };

    pickValue(arrWeightValues, weight,SIZE(arrWeightValues));
    pickValue(arrWeightSuppliesValues, weightSupplies,SIZE(arrWeightSuppliesValues));

    cout << "For the elevation of construction materials, on the upper end of an unfinished building" << endl;
    cout << "is montaged a motionless spool. With it's help a worker with a weight of " << weight;
    cout << "N lifts the " << weightSupplies << "N supplies up. What pressure does the ground he's standing on take?" << endl;

    cin >> result;

    if (result == (weight - weightSupplies))
    {
        cout << "Correct!";
    }
    else if(result != (weight - weightSupplies))
    {
        cout << "Incorrect!";
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