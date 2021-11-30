#include "LevelTwo.h"

// FIXME: First exercise defined in LevelOne.cpp
/*void firstExerciseLevelTwo()
{
    int answearG; // P = mg
    int answearM, answearP;
    int P[5] = { 1, 2, 4, 8, 16 }, m[5] = { 1, 2, 4, 8, 16 }, g[5] = { 1, 2, 4, 8, 16 };
    cout << "+-----+-----+-----+" << endl;
    cout << "|  P  |  m  |  g  |" << endl;
    cout << "+-----+-----+-----+" << endl;
    cout << "|  " << P[3] << "  |  " << m[2] << "  |  g  |" << endl;
    cout << "+-----+-----+-----+" << endl;
    cout << "| " << P[4] << "  |  m  |  " << g[0] << "  |" << endl;
    cout << "+-----+-----+-----+" << endl;
    cout << "|  P  |  " << m[1] << "  |  " << g[3] << "  |" << endl;
    cout << "+-----+-----+-----+" << endl;
    cout << "Enter your answear for g: ";
    cin >> answearG;
    cout << endl;
    cout << "Enter your answear for m: ";
    cin >> answearM;
    cout << endl;
    cout << "Enter your answear for P: ";
    cin >> answearP;
    cout << endl;

    if (answearG == g[1] && answearM == m[4] && answearP == P[4])
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }
}*/


void firstExerciseLevelTwo()
{
    srand((unsigned)time(NULL));

    float result1, result2, result3;
    int weight[7] = { 10, 12, 24, 43, 70, 80, 96 };


    int indexWeightOne = rand() % 7;
    int indexWeightTwo = rand() % 7;
    int indexWeightThree = rand() % 7;

    Table tableOne;

    tableOne.add_row({ "P", "m", "g" });
    tableOne.add_row({ to_string(weight[indexWeightOne]), "...", "10" });
    tableOne.add_row({ to_string(weight[indexWeightTwo]), "..." , "10" });
    tableOne.add_row({ to_string(weight[indexWeightThree]), "..." , "10" });

    cout << tableOne << endl;
    cout << endl;
    cout << "Enter your answers:";
    cin >> result1 >> result2 >> result3;

    if (result1 == (weight[indexWeightOne] / 10) && result2 == (weight[indexWeightTwo] / 10) && result3 == (weight[indexWeightThree] / 10))
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }
}
