#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int main(){
  clock_t start;
  double duration;
  start = clock();
  //  Run Stuff
  duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;

  std::cout << "-~-~-~-~--~-~-~-~--~-~-~-~-" << endl;
  std::cout << "duration was " << duration << std::endl;

  return 0;
}
