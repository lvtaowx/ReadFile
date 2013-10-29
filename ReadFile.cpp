/*
 * ReadFile.cpp
 *
 *  Created on: Jun 21, 2013
 *      Author: lvanlv
 */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>

int main(int argc, char* argv[]){
	if(argc < 2){
		std::cout << "not enough arguments"<<std::endl;
	}


    std::ifstream file (argv[1]);
    if (! file.is_open()){
    	std::cout << "Error opening file";
    	exit(1);
    }

    std::vector<std::string> buffers;
    std::string buffer;
    while (! file.eof() ) {
    	std::getline(file, buffer);
        std::cout << buffer << std::endl;
        buffers.push_back(buffer);
    }

	return 0;
}


