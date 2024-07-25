/* -----------------------------------------------------------------------------
 *
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception OR LGPL-2.1-or-later
 * Copyright (C) 2024 by Umair Hussain
 *
 * This file is part of the deal.II code gallery.
 *
 * -----------------------------------------------------------------------------
 */

#include "PhaseFieldSolver.h"

PhaseFieldSolver::PhaseFieldSolver()
: mpi_communicator(MPI_COMM_WORLD)
, n_mpi_processes(Utilities::MPI::n_mpi_processes(mpi_communicator))
, this_mpi_process(Utilities::MPI::this_mpi_process(mpi_communicator))
, pcout(std::cout, (this_mpi_process == 0))
, fe(FE_Q<2>(1), 2)
, dof_handler(triangulation)
, time(0.0)
, final_time(1.)
, time_step(.0002)
, theta(0.5)
, epsilon(0.01)
, tau(0.0003)
, gamma(10.)
, latent_heat(1.4)
, alpha(0.9)
, t_eq(1.)
, a(0.01)
{}
