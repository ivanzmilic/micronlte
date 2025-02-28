#include <stdio.h>
#include <stdlib.h>
#include <cmath>

// Modify the existing opacity / emissivity vector (wavelength dependent), by adding 
// Hydrogen b-f opacity for a given level

int H_bf(double * op, double * em, double pop, int level, double T, double * wave);
int H_ff(double * op, double * em, double pop, int level, double T, double * wave);
int H_bb(double * op, double * em, double pop, int level, double T, double v_los, double n_Htot, double v_turb,
		double * wave);

int e_thom(double n_e, double * wave);

