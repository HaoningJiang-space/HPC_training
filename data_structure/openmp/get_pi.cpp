#include<iostream>
#include<omp.h>
#include <math.h>
using namespace std;
int main(){
    int n = 1000000;
    double sum = 0.0;
    #pragma omp parallel for reduction(+:sum) // This creates a team of threads and sum is shared among all threads
    for(int i = 1; i <= n; i++){
        sum += 1.0 / i / i;
    }
    cout << sqrt(6.0 * sum) << endl;
    return 0;


}
