 //robotic-cleaner-tester.cpp : Defines the entry point for the console application.
//#include "stdafx.h"
#include "Simulator.h"
#include "AbstractAlgorithm.h"
#include "RandomRobotAlgorithm.h"
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "CommandLineInterpeter.h"
#include "SingletonHouseIOManager.h"

using namespace ns_robotic_cleaner_simulator;

int main(int argc, char * argv[])
{
	srand((unsigned int)time(NULL));
	House * h = SingletonHouseIOManager::instance()->ReadHouseFromFile("house1.house");
	cout << (*h);
	delete h;
	vector<string> commandLineArguments = CommandLineInterpeter::readCommandLineArguments(argc, argv);
	string configFile = commandLineArguments[0];
	string houseFolder = commandLineArguments[1];
	Simulator s = Simulator();
	s.ReadConfigFile(configFile);
	if(s.LoadHouses(houseFolder) == 0){
		cout << "Cannot load house properly. exiting";
		return EXIT_FAILURE;
	}

	s.LoadAlgorithmsAndRuns();
	s.RunAll();
	getchar();
	return EXIT_SUCCESS;
}


