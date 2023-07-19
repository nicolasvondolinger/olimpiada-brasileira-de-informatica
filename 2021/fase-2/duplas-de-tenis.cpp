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

  int n1, n2, n3, n4;

  cin >> n1 >> n2 >> n3 >> n4;
  int total = n1 + n2 + n3 + n4;
  
  int menor = n1, maior = n1;
  
  if(menor > n2) menor = n2;
  if (menor > n3) menor = n3;
  if (menor > n4) menor = n4;

  if(maior < n2) maior = n2;
  if (maior < n3) maior = n3;
  if (maior < n4) maior = n4;

  int som = total - (maior+menor);

  if (som < (maior + menor)){
    cout << (maior+menor) - som << endl;
  } else {
    cout << som - (maior+menor)<< endl;
  }

  return 0;
}