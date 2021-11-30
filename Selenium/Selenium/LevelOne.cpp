#include "LevelOne.h"

//Randomising exercises
void randomiseExercises(int randEx[])
{
    system("cls");
    srand((unsigned)time(NULL));

    int temp;

    for (int i = 2; i > 0; i--)
    {
        // Pick a random index from 0 to 2
        int j = rand() % (i + 1);

        // Swap randEx[i] with the element
        // at random index
        temp = randEx[j];
        randEx[j] = randEx[i];
        randEx[i] = temp;
    }
}

//Randomising values
int firstValue()
{
    srand((unsigned)time(NULL));

    int arrFirstValue[10] = { 500, 300, 200, 100, 250, 20, 16, 12, 8, 4 };
    int indexFirstValue = rand() % 10;

    return arrFirstValue[indexFirstValue];
}

int secondValue()
{
    srand((unsigned)time(NULL));

    int arrSecondValue[5] = { 1, 2, 4, 50, 200 };
    int indexSecondValue = rand() % 3;

    return arrSecondValue[indexSecondValue];
}

//The three exercises
void firstExerciseLevelOne()
{
    int result;
    int value1 = firstValue();
    int value2 = secondValue();

    cout << "A body with mass " << value2 << " kg is acted upon by a force " << value1 << "N. What is its acceleration?" << endl;

    cin >> result;

    if (result != (value1 / value2))
    {
        cout << "Incorrect!";
    }
    else
    {
        cout << "Correct!";
    }
}

void secondExerciseLevelOne()
{
    char answer;

    cout << "Is it possible for a person who is on a moving-up escalator to remain at rest, relative to the earth's surface? (Y/N)" << endl;

    cin >> answer;

    if (answer == 'N')
    {
        cout << "Correct!";
    }
    else if (answer == 'Y')
    {
        cout << "Incorrect!";
    }
}

void thirdExerciseLevelOne()
{
    int result;
    int value1 = firstValue();
    int value2 = secondValue();

    cout << "For the elevation of construction materials on the upper end of an unfinished building" << endl;
    cout << "is montaged to a motionless spool. With it's help a worker with a weight of " << value1;
    cout << "N lifts the " << value2 << "N supplies up. What pressure does the ground he's standing on take?" << endl;

    cin >> result;

    if (result != (value1 - value2))
    {
        cout << "Incorrect!";
    }
    else
    {
        cout << "Correct!";
    }
}


void displayExercise()
{
    int randEx[] = { 1, 2, 3 };

    randomiseExercises(randEx);

    for (int i = 0; i < 3; i++)
    {
        system("cls");
        
        switch (randEx[i])
        {
        case 1:

            firstExerciseLevelOne();
            break;

        case 2:

            secondExerciseLevelOne();
            break;

        case 3:

            thirdExerciseLevelOne();
            break;
        }
    }
}