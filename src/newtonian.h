#include <stdio.h>
#include <math.h>
#include <stdbool.h>

double getGravitation(double const G, double m1, double m2, double r) {

	double F = G*((m1*m2)/pow(r,2));
	return F;
}

double getAcceleration(double force, double mass) {

	double acceleration = force/mass;
	return acceleration;
}

double getBarycenter(double m1, double m2, double a) {

	double barycenter = a * (m2/(m1+m2));
	return barycenter;
}

bool printParameters(double m1, double m2, double center_dist) {

	printf("%s%0.2f%s\n", "Mass A: ", m1, " kg");
	printf("%s%0.2f%s\n", "Mass B: ", m2, " kg");
	printf("%s%0.2f%s\n", "center_dist: ", center_dist, " metres");

	return true;
}

bool printBarycenters(double center_dist, double barycenter) {

	printf("%s%0.14f%s\n", "barycenter from primary: ", barycenter, " metres");
	printf("%s%0.14f%s\n", "barycenter from secondary: ", center_dist-barycenter, " metres");

	return true;
}

bool printForce(double force) {

	printf("%0.14f%s\n\n", force, " Newtons");

	return true;
}

bool printAcceleration(double accelMassA, double accelMassB) {

	printf("%s%0.14f%s\n", "Accel. Mass A: ", accelMassA, " m/s^2");
	printf("%s%0.14f%s\n", "Accel. Mass B: ", accelMassB, " m/s^2");

	return true;
}