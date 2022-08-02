#include <iostream>
using namespace std;
int main()
{
 int t[100], i;
 double s=0;
 for(i=0; i<4; i++)
 {
 cout << "Tapez la valeur numéro " << i << " : ";
 cin >> t[i];
 s = s + t[i];
 }

 s = s/4;
 cout << "La moyenne est : " << s << endl;
 return 0;
}
