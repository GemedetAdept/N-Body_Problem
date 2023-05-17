#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "massbody.h"

typedef struct Struct_MassBodyData {
	
	enum {isStart, isMassBody, isEnd} State;

	MassBody Body;
	double PhysicalParams[3];
	double RelativeDistances[10];

} SimData[10];

bool PopulateSimData(int bodyCount, ) {
	return true;
};