#pragma once

#include <iostream>

//Macro to find size of array
#define SIZE(x) (sizeof(x)/sizeof(x[0]))

using namespace std;

void displayExerciseLevelThree();
void pause();
void pickValue(int arr[], int& value, int size);
void randomiseExercises(int randEx[]);