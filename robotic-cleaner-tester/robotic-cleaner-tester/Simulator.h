#ifndef Simulator_h__
#define Simulator_h__

#include "Point.h"
#include "Matrix.h"
#include <iostream>
#include "House.h"
#include <map>
#include "AlgorithmSingleRun.h"


namespace ns_robotic_cleaner_simulator
{

class Simulator
{
private:
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Members ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//Battery  startingBattery;
	vector<House *> _houses;
	vector<AbstractAlgorithm *> _algorithms;
	map<string, int> _configs;
	vector< AlgorithmSingleRun *> _runs;
	Battery * _defaultBattery;

public:
	Simulator(void);
	Simulator(_TCHAR * configFilePath);
	~Simulator(void);

	void SimulateAll(void);
	void ReadConfigFromFile(_TCHAR * configFilePath);
	void InitializeRuns();
	int LoadHouses( _TCHAR * houseFolder);
	int LoadAlgorithms();
};

} // end of namespace ns_robotic_cleaner_simulator

#endif // Simulator_h__