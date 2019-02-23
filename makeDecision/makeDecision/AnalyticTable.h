#pragma once

#include <iostream>
using namespace std;

class AnalyticTable
{
private:
	int n;
	double **matrix ;
	
	double lambdaMax;
	double VU;
	double IU;
	static const double VVU[10];

public:
	double *vectorPriority;
	AnalyticTable(const int, const double**);
	~AnalyticTable();

	void findVectorPriority();
	void findLambdaMax();
	void findIU();
	void findVU();



};