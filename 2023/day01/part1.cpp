#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  freopen("input.txt", "r", stdin);
  string s;
  vector<char> a;
  int ans = 0;

  while (cin >> s) {
    for (int i = 0; i < s.size(); i++) {
      if (isdigit(s[i]))
        a.push_back(s[i]);
    }
    ans += stoi(string(1, a[0]) + a[a.size() - 1]);
    a.clear();
  }

  cout << ans;

  return 0;
}
