CC      = g++
CC_FLAGS = -std=c++11 -g -Wall -O2 -pedantic -pthread

all: simulator

clean:
	-rm Battery.o House.o Sensor.o RandomRobotAlgorithm.o AlgorithmSingleRun.o Simulator.o robotic-cleaner-tester.o Simulator

simulator: robotic-cleaner-tester.o Simulator.o AlgorithmSingleRun.o RandomRobotAlgorithm.o Sensor.o House.o Battery.o
	$(CC) -o $@ $^
	
robotic-cleaner-tester.o: robotic-cleaner-tester.cpp Direction.h
	$(CC) -c $(CFLAGS) $<

Simulator.o: Simulator.cpp Simulator.h Direction.h
	$(CC) -c $(CFLAGS) $<	

AlgorithmSingleRun.o: AlgorithmSingleRun.cpp AlgorithmSingleRun.h AbstractSensor.h Direction.h
	$(CC) -c $(CFLAGS) $<	

RandomRobotAlgorithm.o: RandomRobotAlgorithm.cpp RandomRobotAlgorithm.h AbstractAlgorithm.h Battery.h Sensor.h
	$(CC) -c $(CFLAGS) $<
	
Sensor.o: Sensor.cpp Sensor.h AbstractSensor.h House.h SensorInformation.h
	$(CC) -c $(CFLAGS) $<
	
House.o: House.cpp House.h Point.h Direction.h Matrix.h
	$(CC) -c $(CFLAGS) $<

Battery.o: Battery.cpp Battery.h 
	$(CC) -c $(CFLAGS) $<
