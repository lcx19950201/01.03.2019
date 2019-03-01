#include <iostream>
#include <fstream>
using namespace std;



void Readtxt(const char * FN, int **& M,int & n, int & m)
{


	fstream fin = fstream(FN, ios::in);
	if (fin.good())
	{
	
		fin >> n >> m;
		M = new int *[n];
		for (int i = 0; i <n; i++)
		{
			M[i] = new int[m];
			for (int j = 0; j < m; j++)fin >> M[i][j];

		}
		fin.close();
	}
	
}

int main()
{
	int n, m;
	int **M = NULL;
	char FileName[] = "input.txt";
	Readtxt(FileName,M,n, m);

	if (M != 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << n << "" << m << "\n";
			for (int j = 0; j < m; j++)
				cout << M[i][j] << "\n";
		}
		for (int i = 0; i < n; i++)
		
			delete[] M[i];
			delete[] M;
		
			

		M = NULL;

	}
	system("pause");
		return 0;
}
