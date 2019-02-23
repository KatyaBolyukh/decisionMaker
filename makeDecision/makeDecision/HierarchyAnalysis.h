#pragma once

#include <iostream>
#include "AnalyticTable.h"
using namespace std;

class HierarchyAnalysis
{
private:
	int criteriaNumber;
	int alternativeNumber;
	AnalyticTable *criteriaTable;
	AnalyticTable **alternativeTable;
    double** resultTable;
	double *globalPriority;
public:
	HierarchyAnalysis(const int,const int, const double**, const double***);
	~HierarchyAnalysis();
	void fillResultTable();
	void findGlobalPriority();
	void saveToFile(string);
	void TakeFromFile(string);


};
