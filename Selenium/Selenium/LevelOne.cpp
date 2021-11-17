#include "LevelOne.h"

void TaskOne()
{
    srand(time(NULL));

    int arrF[5] = { 20, 16, 12, 8, 4 };
    int arrM[3] = { 1, 2, 4 };

    int indexF = rand() % 5;
    int indexM = rand() % 3;

    int a, m = arrM[indexM], F = arrF[indexF];

    cout << "Uslovie:" << endl;
    cout << "Your value for F is : " << F;
    cout << endl;
    cout << "Your value for m is: " << m;
    cout << endl;
    cout << "Enter your response : ";
    cin >> a;

    if (a != (F / m))
    {
        cout << "Incorrect!";
    }
    else
    {
        cout << "Correct!";
    }
}

