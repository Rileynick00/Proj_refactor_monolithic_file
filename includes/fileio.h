#ifndef LOAD_H_
#define LOAD_H_
//contains all load and save file declerations and neccesary includes
#include <iostream>
#include <string>
#include <vector>
#include "constants.h"

int load(const std::string filename, std::vector<process> &myProcesses);

int save(const std::string filename, std::vector<process> &myProcesses);
#endif /* LOAD_H_ */
