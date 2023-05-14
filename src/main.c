#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "newtonian.h"
#include "massbody.h"

void main() {

	// mass (kg), distance (m), time (s) = force (N)
	double const gravitational_constant = 6.674 * (pow(10.0, -11.0));
	double force, massA, massB, center_dist, accelMassA, accelMassB, barycenter;

	int bodyCount = 2;
	MassBody MassBodyArray[bodyCount];

	massA = 500.0;
	massB = 200.0;
	center_dist = 1.0;

	force = getGravitation(gravitational_constant, massA, massB, center_dist);
	accelMassA = getAcceleration(force, massA);
	accelMassB = getAcceleration(force, massB);
	barycenter = getBarycenter(massA, massB, center_dist);

	printf("%s\n\n", "|| Newton's Law of Universal Gravitation ||");

	printParameters(massA, massB, center_dist);
	printBarycenters(center_dist, barycenter);
	printForce(force);
	printAcceleration(accelMassA, accelMassB);
	fflush(stdout);

	MassBody bodyA = {500.0, 0.0, 1.0, 1.0};
	MassBody bodyB = {200.0, 0.0, 5.0, 7.0};

	MassBodyArray[1] = bodyA;
	MassBodyArray[2] = bodyB;

	double pointDist = getPointDistance(&bodyA, &bodyB);
	printf("%f%s\n", pointDist, " | Dist between bodyA & bodyB");
	printMassBody(&bodyA);
	printMassBody(&MassBodyArray[1]);
	fflush(stdout);
}