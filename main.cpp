#include <iostream>
using namespace std;

int main() {
  int h, v;
  double g;

  cout << "Introduceti inaltimea dumneavoastra: ";
  cin >> h;
  cout << "Introduceti varsta dumneavoastra: ";
  cin >> v;

  g = 50.0+0.75*(h-150)+0.25*(v-20);

  cout << "G ideala pentru barbat este: " << g << endl;
  cout << "G ideala pentru femei este: " << 0.9*g << endl;
  return 0;
}