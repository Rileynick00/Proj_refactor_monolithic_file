//contains load and save file definitions and all neccesary includes
#include <iostream>
#include <string>
#include <vector>
#include "../includes/fileio.h"
#include "../includes/constants.h"

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int load(const std::string filename, std::vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int save(const std::string filename, std::vector<process> &myProcesses){
	return UNIMPLEMENTED;
}
