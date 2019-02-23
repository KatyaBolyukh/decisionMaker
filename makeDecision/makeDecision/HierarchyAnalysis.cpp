#include "HierarchyAnalysis.h"
#include "AnalyticTable.h"



HierarchyAnalysis::HierarchyAnalysis(const int crNum, const int altNum, const double** inputMatrix, const double*** inputAltMatrix)
{
	criteriaNumber = crNum;
	alternativeNumber = altNum;
	criteriaTable = new AnalyticTable(crNum, inputMatrix);
	alternativeTable = new AnalyticTable*[criteriaNumber];
	for (int i = 0; i < crNum; i++)
		alternativeTable[i] = new AnalyticTable(altNum, inputAltMatrix[i]);

	resultTable = new double*[alternativeNumber];
	for (int i = 0; i < crNum; i++)
			resultTable[i] = new double[criteriaNumber];

	globalPriority = new double[alternativeNumber];

}
HierarchyAnalysis::~HierarchyAnalysis()
{
	for (int i = 0; i < criteriaNumber; i++)
		delete[] resultTable[i];

	delete[]resultTable; resultTable = 0;

	delete[] globalPriority; globalPriority = 0;

	for (int i = 0; i < criteriaNumber; i++)
		delete[] alternativeTable[i];

	delete[]alternativeTable; alternativeTable = 0;
	return;
}
void HierarchyAnalysis::fillResultTable()
{
	for (int i = 0; i < alternativeNumber; i++)
		for (int j = 0; j < criteriaNumber; j++)
			resultTable[i][j] = alternativeTable[j]->vectorPriority[i];
}
void HierarchyAnalysis::findGlobalPriority()
{
	double sum = 0;
	for (int i = 0; i < alternativeNumber; i++)
	{
		sum = 0;
		for (int j = 0; j < criteriaNumber; j++)
			sum += resultTable[i][j] *criteriaTable->vectorPriority[j];

		globalPriority[i] = sum;
	}

	return;
}
void HierarchyAnalysis::saveToFile(string name)
{
	/*FILE *ff;
	if ((ff = fopen(name+".csv", "w+")) == NULL)
	{
		//printf("Can't open file %s\n");
		//printf("Press any key to continue");

		//TODO !!!!
		//search for windows FORMS
		return;
	}

	fprintf(ff, "\r\n\r\n\r\n\" h = \";%f;\" Pe = \";%f;\" Cu = \";%f   \r\n", H, PE, KU);

	fprintf(ff, "\r\n\"Result of function\"");
	fprintf(ff, "\r\n\"         \";;\"x   \";\"Accurate   \";\"Left    \"");

	fclose(ff);
	*/

}
void HierarchyAnalysis::TakeFromFile(string name)
{
	/*FILE *ff;
	if ((ff = fopen(name + ".csv", "w+")) == NULL)
	{
		//printf("Can't open file %s\n");
		//printf("Press any key to continue");

		//TODO !!!!
		//search for windows FORMS
		return;
	}

	fprintf(ff, "\r\n\r\n\r\n\" h = \";%f;\" Pe = \";%f;\" Cu = \";%f   \r\n", H, PE, KU);

	fprintf(ff, "\r\n\"Result of function\"");
	fprintf(ff, "\r\n\"         \";;\"x   \";\"Accurate   \";\"Left    \"");

	fclose(ff);
	*/

}
