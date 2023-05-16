#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Allocates 32 bytes of memory
typedef struct Struct_MassBody {
	double Mass;
	double Acceleration;
	double PosX;
	double PosY;
} MassBody;

struct {
	enum {isLength, isMassBody} Type;
	union {
		int Length;
		int BodyNumber;
		MassBody Body;
	} Value;
} BodyArray[10];

bool MassBodyFactory(int bodyCount, MassBody *MassBodyArray) {

	return true;

};

bool printMassBody(MassBody *Instance) {
	printf("%f%s\n", Instance->Mass, " | Mass");
	printf("%f%s\n", Instance->Acceleration, " | Acceleration");
	printf("%f%s\n", Instance->PosX, " | PosX");
	printf("%f%s\n", Instance->PosY, " | PosY");
	return true;
};

bool arrayInputTest(double *doubleArray) {
	return true;
};

// bool fillRelativeDistArray(double *RelativeDistArray, MassBody *MassBodyArray, int sizeMBArray) {

// 	for (int i = 0; i < sizeMBArray; i++) {

// 		MassBody MBInstance = MassBodyArray[i];
// 		RelativeDistArray[i][0] = 0.0;

// 		for (int j = 1; j < sizeMBArray; j++) {

// 			double distanceValue = getPointDistance(&MBInstance, &MassBodyArray[j]);
// 			RelativeDistArray[i][j] = distanceValue;
// 		}
// 	}

// 	return true;
// };

double getPointDistance(MassBody *BodyA, MassBody *BodyB) {

	double A_PosX = BodyA->PosX;
	double A_PosY = BodyA->PosY;
	double B_PosX = BodyB->PosX;
	double B_PosY = BodyB->PosY;

	double DeltaXSquare = pow(B_PosX - A_PosX, 2);
	double DeltaYSquare = pow(B_PosY - A_PosY, 2);

	double PointDist = sqrt(DeltaXSquare + DeltaYSquare);

	return PointDist;
};