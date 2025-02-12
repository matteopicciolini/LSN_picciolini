/****************************************************************
*****************************************************************
    _/    _/  _/_/_/  _/       Numerical Simulation Laboratory
   _/_/  _/ _/       _/       Physics Department
  _/  _/_/    _/    _/       Universita' degli Studi di Milano
 _/    _/       _/ _/       Prof. D.E. Galli
_/    _/  _/_/_/  _/_/_/_/ email: Davide.Galli@unimi.it
*****************************************************************
*****************************************************************/
#pragma once

#include <iostream>
#include <fstream>
#include <ostream>
#include <cmath>
#include <iomanip>
#include <filesystem>
#include <string>
#include <version_config.h>
#include "random.h"

int seed[4];
Random rnd;
int nconf = 1;

//parameters, observables
const int m_props = 1000;
int iv, ik, it, ie, iw;
double vtail, ptail, bin_size, nbins, sd;
double walker[m_props];

//Exercise 07 parameters
double v_tail, w_tail;
std::ofstream instant_epot, instant_pres;
const int n_props = 5;
const int n_bins = (m_props - n_props);
double err_gr[n_bins];
std::string invet_str;
std::string print_instant;

// averages
double blk_av[m_props], blk_norm, accepted, attempted;
double glob_av[m_props], glob_av2[m_props];
double stima_pot, stima_pres, stima_kin, stima_etot, stima_temp, stima_gr;
double err_pot, err_press, err_kin, err_etot, err_temp, err_gdir;

//configuration
const int m_part = 108;
double x[m_part],    y[m_part],    z[m_part];
double xold[m_part], yold[m_part], zold[m_part];
double vx[m_part],  vy[m_part],   vz[m_part];

// thermodynamical state
int npart;
double beta, temp, energy, vol, rho, box, rcut;

// simulation
int iNVET, nstep, nblk, restart;
double delta;

//pigreco
const double pi = 3.1415927;

//functions
void Input(void);
void Reset(int);
void Accumulate(void);
void Averages(int);
void Move(void);
void ConfFinal(void);
void ConfXYZ(int);
void Measure(void);
double Boltzmann(double, double, double, int);
double Pbc(double);
double Error(double,double,int);
double Force(int, int);
void Usage(int argc, char* argv[]);
void Delete_old_files();


//Usage and filename
std::string phase;
std::string eq;
std::string random_lib_path = std::string(ROOT_PATH) + "/random-library/";
std::string input_path, output_path, eq_str, input_form_eq_path;
std::string pattern;


//------------------------Progress bar --------------------------
std::string perc = "▪▪▪▪▪▪▪▪▪▪";

std::string Green(std::string green){
	return std::string("\033[1;32m") + green + "\033[0m";
}

std::string Gray(std::string gray){
	return std::string("\033[1;90m") + gray + "\033[0m";
}

std::string Red(std::string red){
	return std::string("\033[1;31m") + red + "\033[0m";
}

void Progress_bar(int& s, int& iblk, int& prog){
	std::cout << Red("Block number " + std::to_string(iblk) + ". Progress: ");
	std::cout << Green(perc.substr(0, 3 * s++));
	std::cout << Gray(perc.substr(3 * s, 3 * 10));
	std::cout << " " << int(prog * 100.0 / nstep) << " %\r";
	std::cout.flush();
}
//------------------------------------------------------------------


/****************************************************************
*****************************************************************
    _/    _/  _/_/_/  _/       Numerical Simulation Laboratory
   _/_/  _/ _/       _/       Physics Department
  _/  _/_/    _/    _/       Universita' degli Studi di Milano
 _/    _/       _/ _/       Prof. D.E. Galli
_/    _/  _/_/_/  _/_/_/_/ email: Davide.Galli@unimi.it
*****************************************************************
*****************************************************************/