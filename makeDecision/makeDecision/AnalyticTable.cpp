#include "AnalyticTable.h"
#include <math.h> 

const double AnalyticTable::VVU[10] = { 0,0,0.58,0.9,1.12,1.24,1.32,1.41,1.45,1.49 };

AnalyticTable::AnalyticTable(const int n, const double**inputMatrix)
{
	this->n = n;
	matrix = new double*[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			matrix[i][j] = inputMatrix[i][j];

	vectorPriority = new double[n];
	lambdaMax = 0;
	VU = 0;
	IU = 0;

}
AnalyticTable::~AnalyticTable()
{
	delete[]vectorPriority; vectorPriority = 0;
	for (int i = 0; i < n; i++)
		delete[] matrix[i];

	delete[]matrix; matrix = 0;
	return;
}
void AnalyticTable::findVectorPriority()
{
	double *a_n;
	double a_i = 0;
	double a = 0;
	for (int i = 0; i < n; i++)
	{
		a_i = 0;
		for (int j = 0; j < n; j++)
			a_i *= matrix[i][j];

		a_n[i] = pow(a_i, 1/n);
		a += a_n[i];
	}

	for (int i = 0; i < n; i++)
	{
		vectorPriority[i] = a_n[i]/a;
	}
	return;
}
void AnalyticTable::findLambdaMax()
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
			sum += matrix[j][i];

		lambdaMax += sum*vectorPriority[i];
	}
}
void AnalyticTable::findIU()
{
	IU = (lambdaMax - n) / (n - 1);
}
void AnalyticTable::findVU()
{
	VU = IU / VVU[n - 1];
}
