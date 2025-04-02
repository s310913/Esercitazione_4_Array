#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include "Utils.hpp"

using namespace std;

int main()
{
	std::string inputFile = "data.txt";
	size_t n;
	double S;
	double *ptrW = nullptr;
	double *ptrR = nullptr;
	
	ImportVectors(inputFile, n, S, ptrW, ptrR);
	double V = return_V(S, n, ptrW, ptrR);
	double rate = rate_of_return(S,V);
	
	ofstream printout("result.txt");
	printout << fixed << std::setprecision(2) << "S = " << S << ", n = " << n << endl;
	printout << "w = " << ArrayToString(n,ptrW) << endl;
	printout << "r = " << ArrayToString(n,ptrR) << endl;
	printout << fixed << std::setprecision(4) << "Rate of return of the portfolio:  " << rate << endl;
	printout << fixed << std::setprecision(2) << "V: " << V << endl;
	
	cout << fixed << std::setprecision(2) << "S = " << S << ", n = " << n << endl;
	cout << "w = " << ArrayToString(n,ptrW) << endl;
	cout << "r = " << ArrayToString(n,ptrR) << endl;
	cout << fixed << std::setprecision(4) << "Rate of return of the portfolio:  " << rate << endl;
	cout << fixed << std::setprecision(2) << "V: " << V << endl;
	
    return 0;
}

