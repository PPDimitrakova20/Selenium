#pragma once

#include <iostream>
#include <iomanip>
#include <conio.h> // _kbhit(), _getch()

//Macro to find size of array
#define SIZE(x) (sizeof(x)/sizeof(x[0]))

using namespace std;

// Printing every exercise
int displayExerciseLevelThree();
// Pause game until input
void pause();
// Randomising values
void pickValue(int arr[], int& value, int size);
// Randomising every exercise
void randomiseExercises(int randEx[]);