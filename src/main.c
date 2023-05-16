#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "newtonian.h"
#include "massbody.h"

void main() {

	// mass (kg), distance (m), time (s) = force (N)
	double const gravitational_constant = 6.674 * (pow(10.0, -11.0));

	int bodyCount = 2;

	BodyArray[0].Type = isLength;
	BodyArray[0].Value.Length = bodyCount;

	MassBody bodyA = {500.0, 0.0, 1.0, 1.0};
	MassBody bodyB = {200.0, 0.0, 5.0, 7.0};

	BodyArray[1].Type = isMassBody;
	BodyArray[1].Value.BodyNumber = 1;
	BodyArray[1].Value.Body = bodyA;

	BodyArray[2].Type = isMassBody;
	BodyArray[2].Value.BodyNumber = 2;
	BodyArray[2].Value.Body = bodyB;

	double RelativePointDists[bodyCount][bodyCount];

	double pointDist = getPointDistance(&bodyA, &bodyB);
	printf("%f%s\n", pointDist, " | Dist between bodyA & bodyB");

	printMassBody(&BodyArray[1].Value.Body);
	printMassBody(&BodyArray[2].Value.Body);
	fflush(stdout);
}