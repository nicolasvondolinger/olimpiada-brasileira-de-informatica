#include <iostream>

using namespace std;

//#define _los.base::sync_with_stdio(0);cin.fle(0);
//#define endl '\n'
//#define f first;
//#define s second;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){

  int soma, x, y, number, total = 0;

  cin >> soma >> x >> y;

  for (int i = x; i <= y; i++){
    number = i;
    for(int j = 0; j < 6; j++){
      total += number % 10;
      number /= 10;
    }
    if (total == soma){
      cout << i << endl;
      break;
    }
    total = 0;
  }

  total = 0;

  for (int i = y; i >= x; i--){
    number = i;
    for(int j = 0; j < 6; j++){
      total += number % 10;
      number /= 10;
    }
    if (total == soma){
      cout << i << endl;
      break;
    }
    total = 0;
  }
  

  return 0;
}