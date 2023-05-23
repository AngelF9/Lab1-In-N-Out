// burger_bot.cpp
// Name: Angel Fuentes
#include <iostream>
using namespace std;

int main() {
  cout << "Hi, what's your name?" << endl;
  string name;
  cin >> name;
  
  cout << "Hello, " <<name<< ", how many burgers would you like?" << endl;
  int num_burgers;
  cin >> num_burgers;
  
  cout << name << " would like " << num_burgers
        << " burgers. Thank you for your business!" << endl;

  return 2;
}
