#pragma once

#include <iostream>
#include <time.h> // library for time
#include <conio.h> // _getch, _kbhit

//Macro to find size of array
#define SIZE(x) (sizeof(x)/sizeof(x[0]))

using namespace std;

// Printing every exercise
int displayExerciseLevelOne();
// Randomising values
void pickValue(int arr[], int &value, int size);
// Randomising every exercise
void randomiseExercises(int randEx[]);