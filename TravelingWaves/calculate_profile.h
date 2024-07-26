/* -----------------------------------------------------------------------------
 *
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception OR LGPL-2.1-or-later
 * Copyright (C) 2024 by Shamil Magomedov
 *
 * This file is part of the deal.II code gallery.
 *
 * -----------------------------------------------------------------------------
 */

#ifndef CALCULATE_PROFILE
#define CALCULATE_PROFILE

#include "Parameters.h"
#include "Solution.h"
#include "LimitSolution.h"
#include "IntegrateSystem.h"
#include "AuxiliaryFunctions.h"

namespace TravelingWave
{
  void compute_limit_sol_left_part(const Parameters &parameters, 
                                    const double wave_speed, 
                                    const double u_0, 
                                    const double T_0, 
                                    const double lambda_0, 
                                    SolutionStruct &LimitSol, 
                                    const double root_sign = 1.);

	void compute_initial_guess_detonation(const Parameters &params, SolutionStruct &initial_guess, const double root_sign = 1.);
	void compute_initial_guess_deflagration(const Parameters &params, SolutionStruct &initial_guess);

  void calculate_profile(Parameters& parameters,
                          const bool continuation_for_delta=false /* Compute with the continuation. */, 
                          const double delta_start=0.01 /* The starting value of delta for the continuation method. */, 
                          const unsigned int number_of_continuation_points=10);

} // namespace TravelingWave

#endif
