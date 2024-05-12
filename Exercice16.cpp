#include <iostream>
using namespace std ;
int main()
{ int i, n ;
for (i=0, n=0 ; i<5 ; i++) n++ ;
cout << "A : i = " << i << " n = " << n << "\n" ;
for (i=0, n=0 ; i<5 ; i++, n++) {}
cout << "B : i = " << i << " n = " << n << "\n" ;
for (i=0, n=50 ; n>10 ; i++, n-= i ) {}
cout << "C : i = " << i << " n = " << n << "\n" ;
for (i=0, n=0 ; i<3 ; i++, n+=i,
cout << "D : i = " << i << " n = " << n << "\n" ) ;
cout << "E : i = " << i << " n = " << n << "\n" ;
}

/*Résultats
A : i = 5 n = 5
B : i = 5 n = 5
C : i = 9 n = 5
D : i = 1 n = 1
D : i = 2 n = 3
D : i = 3 n = 6
E : i = 3 n = 6*/
