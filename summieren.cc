#include<fstream>
#include<iostream>

int adding();

int main(){
  adding();
}

int adding(){
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  int number;
  int number2;
  int sum;
  for(int n = 0; n < 234; ++n){ 
    fin >> number;
    fin >> number2;
    sum = number + number2;
    fout << sum << std::endl;
    sum = 0;
  }
  fin.close();
  fout.close();
}