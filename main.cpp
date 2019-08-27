#include <iostream>
#include <string>
using namespace std;

int FizzBuzz(int num) {
int i;
if(num > 1 && num <= 50){
     for( i = 1; i <= num; i++){

      if(i % 5 == 0){
          cout << "Buzz ";
      }
     else if(i % 3 == 0){
         cout << "Fizz ";
     }
     else if(i % 5 == 0 && i % 3 == 0){
          cout << "FizzBuzz ";
      }
      else{
          cout << i << " ";
      }

    }
}

  return num;

}

int main() {
  int fizzbuzz;

  cout << "Enter a Number:";
  cin >> fizzbuzz;
  FizzBuzz(fizzbuzz);
  return 0;

}
