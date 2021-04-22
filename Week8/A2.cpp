#include <iostream>
using namespace std;

int main()
{ 
 char a[4] = "abc"; 
 for (char *cp = a; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 } 
 return 0;
}
//Kich thuoc kieu int la 4.
//Kich thuoc kieu double la 8.
