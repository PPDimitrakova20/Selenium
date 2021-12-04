#include "LevelTwo.h"

string convertToString(float value)
{
    return to_string(value).erase(2, 7);
}

bool showFirstExerciseLevelTwo()
{  
    int correctAnswersFirstExerciseLevelTwo = 0;

    string pressure;
    string gravity;
    string acceleration;
    string speed;
    string velocity;
    bool check;
  
    Table tableDefinitions; //Initialize table

    cout << endl;
    cout << "   Write down the correct word" << endl;
    cout << endl;

    // Set the table values
    tableDefinitions.add_row({ "Word", "Definition"});
    tableDefinitions.add_row({  "...", "continuous physical force exerted on or against an object by something in contact with it" }); //pressure
    tableDefinitions.add_row({  "..." , "the force that attracts a body towards the centre of the earth, or towards any other physical body having mass" }); //gravity
    tableDefinitions.add_row({  "..." , "the rate of change of velocity per unit of time" }); //acceleration
    tableDefinitions.add_row({ "..." , "the time rate at which an object is moving along a path" }); //speed
    tableDefinitions.add_row({ "..." , "the rate and direction of an object's movement" }); //velocity


    cout << tableDefinitions << endl; // Print the table
    cout << endl;
    cout << "   All of the answers are in lower case." << endl << endl;
    cout << "   Enter your answer for the first word: ";

    //Check pressure
    cin >> pressure;

    if (pressure == "pressure")
    {
        cout << "   Correct!" << endl << endl;     
        correctAnswersFirstExerciseLevelTwo++;
    }
    else
    {
        cout << "   Incorrect!" << endl << endl;        
    }

    //Check gravity
    cout << "   Enter your answer for the second word: ";

    cin >> gravity;
    
    if (gravity == "gravity")
    {
        cout << "   Correct!" << endl << endl;  
        correctAnswersFirstExerciseLevelTwo++;
    }
    else
    {
        cout << "   Incorrect!" << endl << endl;        
    }

    //Check acceleration
    cout << "   Enter your answer for the third word: ";

    cin >> acceleration;
     
    if (acceleration == "acceleration")
    {
        cout << "   Correct!" << endl << endl;  
        correctAnswersFirstExerciseLevelTwo++;
    }
    else
    {
        cout << "   Incorrect!" << endl << endl;        
    }

    //Check speed
    cout << "   Enter your answer for the forth word: ";
    cin >> speed;

    if (speed == "speed")
    {
        cout << "   Correct!" << endl << endl; 
        correctAnswersFirstExerciseLevelTwo++;
    }
    else
    {
        cout << "   Incorrect!" << endl << endl;        
    }

    //Check velocity
    cout << "   Enter your answer for the fifth word: ";
    cin >> velocity;
    
    if (velocity == "velocity")
    {
        cout << "   Correct!" << endl << endl;
        correctAnswersFirstExerciseLevelTwo++;
    }
    else
    {
        cout << "   Incorrect!" << endl;        
    }

    if (correctAnswersFirstExerciseLevelTwo == 5)
    {
        return true;
    }
    else
    {
        return false;
    }

    pause();
}

bool showSecondExerciseLevelTwo()
{
    srand((unsigned)time(NULL));

    //Initialize variables for user response
    float resultOne;
    float resultTwo; 
    float resultThree;

    //Initialize array with values for the exercise
    float work[] = { 9, 18, 36, 54};
    float strength[] = { 1, 3, 6, 9, 18, 36 };
    float road[] = { 1, 3, 6, 9, 18, 36 };

    //Initialize variables for random numbers values
    int indexWorkOne = rand() % SIZE(work);
    int indexWorkTwo = rand() % SIZE(work);

    int indexStrengthOne = rand() % SIZE(strength);
    int indexStrengthTwo = rand() % SIZE(strength);

    int indexRoadOne = rand() % SIZE(road);
    int indexRoadTwo = rand() % SIZE(road);

    Table tableTwo; //Initialize table

    cout << endl;
    cout << "   Complete the table" << endl;
    cout << endl;

    // Set the table values
    tableTwo.add_row({ "A", "F", "s" });
    tableTwo.add_row({ "...",convertToString(strength[indexStrengthOne]), convertToString(road[indexRoadOne])});
    tableTwo.add_row({ convertToString(work[indexWorkOne ]), convertToString(strength[indexStrengthTwo]), "..."});
    tableTwo.add_row({ convertToString(work[indexWorkTwo]), "...", convertToString(road[indexRoadTwo])});

    cout << tableTwo << endl; // Print the table
    cout << endl;
    cout << "   Enter your answers: ";
    cin >> resultOne >> resultTwo >> resultThree; // User input

    if (!cin) {
        cout << endl;
        cout << "   Incorrect input!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl << "   Enter your answers: ";
        cin >> resultOne >> resultTwo >> resultThree;
    }

    // Check if user's input is correct or incorrect
    if (resultOne == (strength[indexStrengthOne] * road[indexRoadOne]) 
        && resultTwo == (work[indexWorkOne] / strength[indexStrengthTwo]) 
        && resultThree == (work[indexWorkTwo] / road[indexRoadTwo]))
    {
        cout << "   Correct!" << endl;
        return true;
    }
    else
    {
        cout << "   Incorrect!" << endl;
        return false;
    }
    pause();
}


int displayExerciseLevelTwo()
{
    int correctAnswersLevelTwo = 0;

    correctAnswersLevelTwo += showFirstExerciseLevelTwo();

    pause();

    system("cls");

    correctAnswersLevelTwo += showSecondExerciseLevelTwo();

    pause();

    system("cls");

    cout << endl;
    cout << "   Level 2 completed! Correct exercises: " << correctAnswersLevelTwo << "/2";

    pause();

    system("cls");

    return correctAnswersLevelTwo;
}