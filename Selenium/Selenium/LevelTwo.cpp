#include "LevelTwo.h"

string convertToString(float value)
{
    return to_string(value).erase(2, 7);
}

void showFirstExerciseLevelTwo()
{  
    char firstWord[100];
    int lengthForFirstWord;
    char secondWord[100];
    int lengthForSecondWord;
    char thirdWord[100];
    int lengthForThirdWord;
    char forthWord[100];
    int lengthForForthWord;
    char fifthWord[100];
    int lengthForFifthWord;
    int check = 0;
  
    Table tableDefinitions; //Initialize table

    cout << "Write down the correct word" << endl;

    // Set the table values
    tableDefinitions.add_row({ "Word", "Definition"});
    tableDefinitions.add_row({  "...", "continuous physical force exerted on or against an object by something in contact with it" }); //pressure
    tableDefinitions.add_row({  "..." , "the force that attracts a body towards the centre of the earth, or towards any other physical body having mass" }); //gravity
    tableDefinitions.add_row({  "..." , "the rate of change of velocity per unit of time" }); //acceleration
    tableDefinitions.add_row({ "..." , "the time rate at which an object is moving along a path" }); //speed
    tableDefinitions.add_row({ "..." , "the rate and direction of an object's movement" }); //velocity


    cout << tableDefinitions << endl; // Print the table
    cout << endl;
    cout << "All of the answers are lower case." << endl << endl;
    cout << "Enter your answer for the first word: ";
    cin >> firstWord;
    cin.getline(firstWord, 100, '\n');
    lengthForFirstWord = strlen(firstWord);
    for (int i = 0; i < lengthForFirstWord; i++)
    {
        if (firstWord[i] == 'p')
        {
            if (firstWord[i + 1] == 'r')
            {
                if (firstWord[i + 2] == 'e')
                {
                    if (firstWord[i + 3] == 's')
                    {
                        if (firstWord[i + 4] == 's')
                        {
                            if (firstWord[i + 5] == 'u')
                            {
                                if (firstWord[i + 6] == 'r')
                                {
                                    if (firstWord[i + 7] == 'e')
                                    {
                                        check++; 
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "Enter your answer for the second word: ";
    cin >> secondWord;
    cin.getline(secondWord, 100, '\n');
    lengthForSecondWord = strlen(secondWord);
    for (int i = 0; i < lengthForSecondWord; i++)
    {
        if (secondWord[i] == 'g')
        {
            if (secondWord[i + 1] == 'r')
            {
                if (secondWord[i + 2] == 'a')
                {
                    if (secondWord[i + 3] == 'v')
                    {
                        if (secondWord[i + 4] == 'i')
                        {
                            if (secondWord[i + 5] == 't')
                            {
                                if (secondWord[i + 6] == 'y')
                                {
                                    check++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "Enter your answer for the third word: ";
    cin >> thirdWord;
    cin.getline(thirdWord, 100, '\n');
    lengthForThirdWord = strlen(thirdWord);
    for (int i = 0; i < lengthForThirdWord; i++)
    {
        if (thirdWord[i] == 'a')
        {
            if (thirdWord[i + 1] == 'c')
            {
                if (thirdWord[i + 2] == 'c')
                {
                    if (thirdWord[i + 3] == 'e')
                    {
                        if (thirdWord[i + 4] == 'l')
                        {
                            if (thirdWord[i + 5] == 'e')
                            {
                                if (thirdWord[i + 6] == 'r')
                                {
                                    if (thirdWord[i + 7] == 'a')
                                    {
                                        if (thirdWord[i + 8] == 't')
                                        {
                                            if (thirdWord[i + 9] == 'i')
                                            {
                                                if (thirdWord[i + 10] == 'o')
                                                {
                                                    if (thirdWord[i + 11] == 'n')
                                                    {
                                                        check++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "Enter your answer for the forth word: ";
    cin >> forthWord;
    cin.getline(forthWord, 100, '\n');
    lengthForForthWord = strlen(forthWord);
    for (int i = 0; i < lengthForForthWord; i++)
    {
        if (forthWord[i] == 's')
        {
            if (forthWord[i + 1] == 'p')
            {
                if (forthWord[i + 2] == 'e')
                {
                    if (forthWord[i + 3] == 'e')
                    {
                        if (forthWord[i + 4] == 'd')
                        {
                            check++;
                        }
                    }
                }
            }
        }
    }

    cout << "Enter your answer for the fifth word: ";
    cin >> fifthWord;
    cin.getline(fifthWord, 100, '\n');
    lengthForFifthWord = strlen(fifthWord);
    for (int i = 0; i < lengthForFifthWord; i++)
    {
        if (fifthWord[i] == 'v')
        {
            if (fifthWord[i + 1] == 'e')
            {
                if (fifthWord[i + 2] == 'l')
                {
                    if (fifthWord[i + 3] == 'o')
                    {
                        if (fifthWord[i + 4] == 'c')
                        {
                            if (fifthWord[i + 5] == 'i')
                            {
                                if (fifthWord[i + 6] == 't')
                                {
                                    if (fifthWord[i + 7] == 'y')
                                    {
                                        check++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

   

    // Check if user's input is correct or incorrect
    if (check == 5) 
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


void displayExerciseLevelTwo()
{
    showFirstExerciseLevelTwo();
    system("cls");
    showSecondExerciseLevelTwo();
    system("cls");
}