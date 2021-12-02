#include "LevelTwo.h"

string convertToString(float value)
{
    return to_string(value).erase(2, 7);
}

void showFirstExerciseLevelTwo()
{
    srand((unsigned)time(NULL));

    //Initialize variables for user response
    float result1; 
    float result2;
    float result3;

    //Initialize array with values for the exercise
    float weight[7] = { 10, 12, 24, 43, 70, 80, 96 };

    //Initialize variables for random numbers values
    int indexWeightOne = rand() % SIZE(weight);
    int indexWeightTwo = rand() % SIZE(weight);
    int indexWeightThree = rand() % SIZE(weight);

    Table tableOne; //Initialize table

    cout << "Complete the table" << endl;

    // Set the table values
    tableOne.add_row({ "P", "m", "g" });
    tableOne.add_row({ convertToString(weight[indexWeightOne]), "...", "10" });
    tableOne.add_row({ convertToString(weight[indexWeightTwo]), "..." , "10" });
    tableOne.add_row({ convertToString(weight[indexWeightThree]), "..." , "10" });

    cout << tableOne << endl; // Print the table
    cout << endl;
    cout << "Enter your answers: ";
    cin >> result1 >> result2 >> result3; // User input

    // Check if user's input is correct or incorrect
    if (result1 == (weight[indexWeightOne] / 10) 
        && result2 == (weight[indexWeightTwo] / 10) 
        && result3 == (weight[indexWeightThree] / 10) )
    {
        cout << "Correct!" << endl;
        
    }
    else
    {
        cout << "Incorrect!" << endl;
    }
    pause();
}

void showSecondExerciseLevelTwo()
{
    srand((unsigned)time(NULL));

    //Initialize variables for user response
    float resultOne;
    float resultTwo; 
    float resultThree;

    //Initialize array with values for the exercise
    float work[4] = { 9, 18, 36, 45};
    float strength[6] = { 1, 3, 6, 9, 18, 36 };
    float road[6] = { 1, 3, 6, 9, 18, 36 };

    //Initialize variables for random numbers values
    int indexWorkOne = rand() % SIZE(work);
    int indexWorkTwo = rand() % SIZE(work);

    int indexStrengthOne = rand() % SIZE(strength);
    int indexStrengthTwo = rand() % SIZE(strength);

    int indexRoadOne = rand() % SIZE(road);
    int indexRoadTwo = rand() % SIZE(road);

   

    Table tableTwo; //Initialize table

    cout << "Complete the table" << endl;

    // Set the table values
    tableTwo.add_row({ "A", "F", "s" });
    tableTwo.add_row({ "...",convertToString(strength[indexStrengthOne]), convertToString(road[indexRoadOne])});
    tableTwo.add_row({ convertToString(work[indexWorkOne ]), convertToString(strength[indexStrengthTwo]), "..."});
    tableTwo.add_row({ convertToString(work[indexWorkTwo]), "...", convertToString(road[indexRoadTwo])});

    cout << tableTwo << endl; // Print the table
    cout << endl;
    cout << "Enter your answers: ";
    cin >> resultOne >> resultTwo >> resultThree; // User input

    // Check if user's input is correct or incorrect
    if (resultOne == (strength[indexStrengthOne] * road[indexRoadOne]) 
        && resultTwo == (work[indexWorkOne] / strength[indexStrengthTwo]) 
        && resultThree == (work[indexWorkTwo] / road[indexRoadTwo]))
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }
    pause();
}

void showThirdExerciseLevelTwo()
{
    srand((unsigned)time(NULL));

    //Initialize variables for user response
    float firstResult;
    float secondResult;
    float thirdResult;

    //Initialize array with values for the exercise
    float pressure[3] = { 4, 8, 16 };
    float strength[3] = { 8, 12, 16 };
    float area[5] = { 1, 2, 4, 8, 16 };

    //Initialize variables for random numbers values
    int indexPressureOne = rand() % SIZE(pressure);
    int indexPressureTwo = rand() % SIZE(pressure);

    int indexStrengthOne = rand() % SIZE(strength);
    int indexStrengthTwo = rand() % SIZE(strength);

    int indexAreaOne = rand() % SIZE(area);
    int indexAreaTwo = rand() % SIZE(area);



    Table tableThree; //Initialize table

    cout << "Complete the table" << endl;

    // Set the table values
    tableThree.add_row({ "p", "F", "S" });
    tableThree.add_row({ "...", convertToString(strength[indexStrengthOne]), convertToString(area[indexAreaOne])});
    tableThree.add_row({ convertToString(pressure[indexPressureTwo]), "...", convertToString(area[indexAreaTwo])});
    tableThree.add_row({ convertToString(pressure[indexPressureOne]), convertToString(strength[indexStrengthTwo]), "..." });

    cout << tableThree << endl; // Print the table
    cout << endl;
    cout << "Enter your answers: ";
    cin >> firstResult >> secondResult >> thirdResult; // User input

    // Check if user's input is correct or incorrect
    if (firstResult == (strength[indexStrengthOne] / area[indexAreaOne]) 
        && secondResult == (pressure[indexPressureTwo] * area[indexAreaTwo])
        && thirdResult == (strength[indexStrengthTwo] / pressure[indexPressureOne]))
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
    }
    pause();
}

void displayExerciseLevelTwo()
{
    showFirstExerciseLevelTwo();
    system("cls");
    showSecondExerciseLevelTwo();
    system("cls");
    showThirdExerciseLevelTwo();
    system("cls");
}