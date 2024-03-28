#include<omp.h> // The OpenMP header file
#include<iostream>
using namespace std;
int main()
{
#pragma omp parallel
	{
		cout << "Hello, world!" << endl;
	}
}