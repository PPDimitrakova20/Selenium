#include "LevelThree.h"

void levelThree()
{
    int valueOne, valueTwo, valueThree, valueFour, valueFive;
    char answerOne;
    int answerTwo;

    cin >> valueOne >> valueTwo >> valueThree >> valueFour >> valueFive;

    cout << R"(
    Which circuit is a parallel circuit?


    +-----|I--|I------+     +-----|I--|I------+     +-----|I--|I------+
    |                 |     |                 |     |                 |
    |                 |     |                 |     |      _____      |
    |                 |     |                 |     +------|___|------+
    |                 |     |                 |     |                 |
    |      _____      |     |  _____   _____  |     |      _____      |
    +------|___|------+     +--|___|---|___|--+     +------|___|------+

    A                      B                       C 
)";

    cout << "Enter your answer: ";

    cin >> answerOne;

    if (answerOne == 'C' || answerOne == 'c')
    {
        cout << "Correct";
    }
    else
    {
        cout << "Incorrect";
    }

    system("cls");

    cout << R"(
     What is the total resistance of the three resistors connected in series?
    
       )" << valueOne << " ohm   " << valueTwo << " ohm   " << valueThree << " ohm" << R"(
       _____   _____   _____
    ---|___|---|___|---|___|---


    A) 25 ohm o
    B) 2.5 ohm
    C) 0.25 ohm
)";

    cout << "Enter your answer: ";

    cin >> answerTwo;

    if (answerTwo == valueOne + valueTwo + valueThree)
    {
        cout << "Correct";
    }
    else
    {
        cout << "Incorrect";
    }

    system("cls");

    cout << R"(
    What is the correct reading on meter V1 in the following circuit?

    The lamps are identical.
    

                    )" << valueFour << R"( V
                +---(V)----+
        )" << valueFive << R"( A     |          |
    +---(A)-----+--|I--|I--+----(A2)---+
    |                                  |
    |                                  |
    |                                  |
    +--+--(X)---+---(A1)---+--(X)---+--+
       |        |          |        |
       +--(V1)--+          +--(V2)--+


    A) 1 A
    B) 2 V
    C) 3 V o    
)";
}