#pragma once

#include <iostream>
#include <time.h> // library for time
#include <tabulate.hpp> //external library for tables
#include <iomanip>
#include <string>

//Macro to find size of array
#define SIZE(x) (sizeof(x)/sizeof(x[0]))

//Namespace from tabulate.hpp
using namespace tabulate;
using namespace std;

void pause();
void displayExerciseLevelTwo();