// Standard libraries
#include <iostream>
#include <string>
#include <random>	//random_device rd; rd(); // genereates a random number

// Library headers
#include "lgStack.h"
#include "lgQueue.h"
#include "lgError.h"

using namespace std;

void lgError(string message, string where);
void lgWarning(string message, string where);