#include "LevelOne.h"

int randomiseExercises()
{
    system("cls");
    srand((unsigned)time(NULL));

    int randEx = rand() % 3 + 1;
    return randEx;
}

int firstValue()
{
    srand((unsigned)time(NULL));
    int value1;

    int arrValue1[10] = { 500, 300, 200, 100, 250, 20, 16, 12, 8, 4 };

    int indexValue1 = rand() % 10;

    return value1 = arrValue1[indexValue1];
}

int secondValue()
{
    srand((unsigned)time(NULL));

    int value2;

    int arrValue2[5] = { 1, 2, 4, 50, 200 };

    int indexValue2 = rand() % 3;
    
    return value2 = arrValue2[indexValue2];
}

void displayExercise()
{
    int randEx = randomiseExercises();

    bool firstDone = false;
    bool secondDone = false;
    bool thirdDone = false;

    int result;
    int value1 = firstValue();
    int value2 = secondValue();

    switch (randEx)
    {
        system("cls");
    case 1:

        if (firstDone == false)
        {
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

            firstDone = true;

            break;
        }


    case 2:

        if (secondDone == false)
        {
            secondDone = true;

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

            break;
        }


    case 3:

        if (thirdDone == false)
        {
            thirdDone = true;

            cout << "For the elevation of construction materials on the upper end of an unfinished building"<< endl;
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

            break;
        }

    }
}