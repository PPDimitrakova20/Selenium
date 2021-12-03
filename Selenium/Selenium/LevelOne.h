#pragma once

#include <iostream>
#include <time.h> // library for time
#include <conio.h> // _getch, _kbhit

//Macro to find size of array
#define SIZE(x) (sizeof(x)/sizeof(x[0]))

using namespace std;

void displayExerciseLevelOne();
void pickValue(int arr[], int &value, int size);
void randomiseExercises(int randEx[]);