#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
  ifstream fin("datensumme.txt");
  ifstream gin("datensumme.txt");
  ifstream kin("mittelwerte.txt");
  ifstream lin("varianzen.txt");
  ofstream fout("mittelwerte.txt");
  ofstream gout("varianzen.txt");

  double sum = 0, var= 0, sumMean = 0, sumVar = 0;
  int a;
  double mean, varN, std, k, l;
  
  for(int i = 0; i < 26; ++i){ // mean loop all the file
    sum = 0;
    var = 0;
      for (int j =0; j<9; j++){ // mean loop 9 consecutive
      fin >> a;
      sum += a;
      }
    mean = sum/9; // mean for 9
    for (int j = 0; j<9 ;j++){ // variance loop 9 consecutive
      gin >> a;
      var = var + (a-mean)*(a-mean);
      }
    varN = var/9; // variance for 9
    fout << mean << endl;
    gout << varN << endl;
    kin >> k;
    lin >> l;
    sumMean += k;
    sumVar += l;
  }
  cout << sumMean/26 << endl;
  cout << sumVar/26 << endl;
  fin.close();
  gin.close();
  fout.close();
  gout.close();
 }