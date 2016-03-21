// This is for Lab2 

#include "BMI.h"
#include "BMI.cpp"

using namespace std;

int main()
{
	int weight, height;
	BMI K;	
	
	fstream fin("filein.txt", ios::in);
	fstream fout("fileout.txt", ios::out);

	while (fin >> height >> weight)
	{
		if (height == 0 || weight == 0)
			break;

		K.setHeight(height);
		K.setWeight(weight);
		
		fout << K.compute() << " " << K.categories(K.compute()) << endl;
		
	}
	
	fin.close();
	fout.close();
	
	return 0;	

}