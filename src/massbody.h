#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct Struct_MassBody {
	double Mass;
	double Acceleration;
	double PosX;
	double PosY;
} MassBody;

bool printMassBody(MassBody *Instance) {
	printf("%f%s\n", Instance->Mass, " | Mass");
	printf("%f%s\n", Instance->Acceleration, " | Acceleration");
	printf("%f%s\n", Instance->PosX, " | PosX");
	printf("%f%s\n", Instance->PosY, " | PosY");
	return true;
};

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