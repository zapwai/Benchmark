#include <iostream>
#include <cstdio>
#include <ctime>
#include <random>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]){
  clock_t start;
  double duration;
  start = clock();

  istringstream ss(argv[1]);
  int N;
  if (!(ss >> N))
    cerr << "Invalid " << argv[1] << '\n';

  default_random_engine engine(random_device{}());
  default_random_engine generator;
  normal_distribution<double> distribution(0.0,1.0);

  for (int i = 0; i < N; i++){
    double number = distribution(engine);
    cout << number << endl;
  }
  
  duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;

  cout << "-~-~-~-~--~-~-~-~--~-~-~-~-" << endl;
  cout << "duration was " << duration << endl;

  return 0;
}
// http://stackoverflow.com/questions/2797813/how-to-convert-a-command-line-argument-to-int
// For converting command options to integers!

//  http://stackoverflow.com/questions/22105867/seeding-default-random-engine

// g++ file.cpp -std=c++11
