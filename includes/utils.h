#ifndef SORT_H_
#define SORT_H_
//contains sort, getNext, getSize, and handleMissingDate function declerations and all neccesary includes
#include <iostream>
#include <string>
#include <vector>
#include "constants.h"

void sort(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses); //this maybe

process getNext(std::vector<process> &myProcesses);

int getSize(std::vector<process> &myProcesses);

int handleMissingData(std::vector<process> &myProcesses);

#endif /* SORT_H_ */

