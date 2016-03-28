#ifndef RandomRobotAlgorithm_h__
#define RandomRobotAlgorithm_h__

#include "AbstractAlgorithm.h"
#include "Battery.h"
//#include "Direction.h"
#include "Point.h"
//#include "Sensor.h"
#include <vector>

namespace ns_robotic_cleaner
{
	class RandomRobotAlgorithm : public AbstractAlgorithm
	{
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Members ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		private:
			//const AbstractSensor robotSensor;  //compiler says error
			const AbstractSensor& robotSensor;   //the sensor is passed to the algorithm by
			//the simulator when the algorithm is initialized
			map<string,int> configs;
			const Battery& robotBattery;

		public:
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Functions ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			Direction step();
			vector< Point > getPossibleDirections( const Point& currentLocation);  //returns the legal
			//points we can go to, i.e. points which aren't walls or outside the house


	};
} // end of namespace ns_robotic_cleaner

//Class RandomRobotAlgorithm		 implements algorithm � includes random step()
//	members (private):
//	const AbstractSensor robotSensor;
//map<string,int> configs;
//const battery & robotBattery;
//functions:
//void SetSensor(const AbstractSensor & sensor)
//void SetConfiguration(map<string,int> configs) Notice:  we don't implement since function
	//ReadCongFromFile in class Simulator does the job instead

//	Direction step()
//	void AboutToFinish(StepTillFinishing)



#endif //RandomRobotAlgorithm