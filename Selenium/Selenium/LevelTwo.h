#pragma once

#include <iostream>
#include <time.h> // library for time
#include <tabulate.hpp> //external library for tables
#include <iomanip>
#include <string>

/**
 * .Finds size of array
 */
#define SIZE(x) (sizeof(x)/sizeof(x[0]))

//Namespace from tabulate.hpp
using namespace tabulate;
using namespace std;

// Pause game until input
void pause();
// Printing every exercise
int displayExerciseLevelTwo();