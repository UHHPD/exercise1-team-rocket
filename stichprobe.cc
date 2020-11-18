#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
  ifstream fin("datensumme.txt");
  ifstream gin("datensumme.txt");
  double sum = 0, var= 0 ;
  int a;
  double mean, varN, std;
  for(int i = 0; i < 234; ++i){ // mean loop
    fin >> a;
    sum += a;
  }
  mean = sum/234; // mean value
  for (int i =0; i<234;i++){ // variance loop
    gin >> a;
    var = var + (a-mean)*(a-mean);
  }
  varN = var/234; // variance value
  std = sqrt(varN); // standard deviation

  cout << "Mean : " << mean << endl;
  cout << "Variance : " << varN << endl;
  cout << "Standard deviation : " << std << endl;
 }