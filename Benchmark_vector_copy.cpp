#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int main(){
  clock_t start1, start2;
  double duration1, duration2;

  int a[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233};
  int a_length = sizeof(a)/sizeof(a[0]);

  start1 = clock();
  
  int b[a_length];            // cell-by-cell
  for (int i=0; i < a_length; i++){ 
    b[i] = a[i];
  }

  duration1 = ( clock() - start1 ) / (double) CLOCKS_PER_SEC;


  start2 = clock();

  int c[a_length];		// vector copy

  copy(a, a + a_length, c);
  
  duration2 = ( clock() - start2 ) / (double) CLOCKS_PER_SEC;

  std::cout << "-~-~-~-~--~-~-~-~--~-~-~-~-" << endl;
  std::cout << "Cell-by-cell copying duration was " << duration1 << std::endl;
  std::cout << "Vector copying duration was " << duration2 << std::endl;

  // cout << "a sequence: ";
  // for (int i = 0; i < a_length ; i++){
  //   cout << a[i] << " ";
  // }
  // cout << endl;
  // cout << "b sequence: ";
  // for (int i = 0; i < a_length ; i++){
  //   cout << b[i] << " ";
  // }
  // cout << endl;
  // cout << "c sequence: ";
  // for (int i = 0; i < a_length ; i++){
  //   cout << c[i] << " "; 
  // }
  // cout << endl;
  return 0;
}
