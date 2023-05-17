#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "newtonian.h"
#include "massbody.h"

void main() {

	// mass (kg), distance (m), time (s) = force (N)
	double const gravitational_constant = 6.674 * (pow(10.0, -11.0));

	int bodyCount = 3;

	BodyArray[0].Type = isLength;
	BodyArray[0].Value.Length = bodyCount;

	MassBody bodyA = {500.0, 0.0, 1.0, 1.0};
	MassBody bodyB = {200.0, 0.0, 5.0, 7.0};
	MassBody bodyC = {419.0, 0.0, -10.0, 4.0};

	BodyArray[1].Type = isMassBody;
	BodyArray[1].Value.BodyNumber = 1;
	BodyArray[1].Value.Body = bodyA;

	BodyArray[2].Type = isMassBody;
	BodyArray[2].Value.BodyNumber = 2;
	BodyArray[2].Value.Body = bodyB;

	BodyArray[3].Type = isMassBody;
	BodyArray[3].Value.BodyNumber = 3;
	BodyArray[3].Value.Body = bodyC;

	double RelativePointDists[bodyCount][bodyCount];

	double pointDist = getPointDistance(&bodyA, &bodyB);
	printf("%f%s\n", pointDist, " | Dist between bodyA & bodyB");

	// printMassBody(&BodyArray[1].Value.Body);
	// printMassBody(&BodyArray[2].Value.Body);

	for (int i = 1; i<=BodyArray[0].Value.Length; i++) {
		printf("%s\n", " ");
		printf("%d%s\n", i, ": ");
		printMassBody(&BodyArray[i].Value.Body);
		printf("%s\n", "");
	}

	double AA_pointDist = getPointDistance(&bodyA, &bodyA); // Alcoholics Anonymous pointDist
	double AB_pointDist = getPointDistance(&bodyA, &bodyB);
	double AC_pointDist = getPointDistance(&bodyA, &bodyC); // Alternating Current pointDist

	double BA_pointDist = getPointDistance(&bodyB, &bodyA);
	double BB_pointDist = getPointDistance(&bodyB, &bodyB); // Ball Bearing pointDist
	double BC_pointDist = getPointDistance(&bodyB, &bodyC); // British Columbia pointDist

	double CA_pointDist = getPointDistance(&bodyC, &bodyA); // Cyanoacrylate pointDist
	double CB_pointDist = getPointDistance(&bodyC, &bodyB); // Citizen's Band pointDist
	double CC_pointDist = getPointDistance(&bodyC, &bodyC); // Closed Caption pointDist

	printf("%s\n", "");
	printf("%f\n", AA_pointDist);
	printf("%f\n", AB_pointDist);
	printf("%f\n", AC_pointDist);

	printf("%s\n", "");
	printf("%f\n", BA_pointDist);
	printf("%f\n", BB_pointDist);
	printf("%f\n", BC_pointDist);

	printf("%s\n", "");
	printf("%f\n", CA_pointDist);
	printf("%f\n", CB_pointDist);
	printf("%f\n", CC_pointDist);

	fflush(stdout);
}