#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

bool ImportVectors(const string& inputFilePath,
                   size_t& n,
                   double& S,
                   double*& v1,
                   double*& v2);

string ArrayToString(const size_t& n,
                     const double* const& v);
                     
double return_V(const double S,
                      const size_t n,
                      const double* v1,
                      const double* v2);

double rate_of_return(const double S, const double V);