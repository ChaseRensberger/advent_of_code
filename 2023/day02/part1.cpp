#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  freopen("sample_input.txt", "r", stdin);
  string buf;
  sring gameId;
  int maxRed = 12;
  int maxGreen = 13;
  int maxBlue = 14;

  // got to be a better way to read formatted input
  while (cin >> buf) { // game
    getline(cin, gameId, ':');
  }
  return 0;
}
