#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void troca (int *i, int *j) {
int *temp;
temp = i;
i = j;
j = temp;

  cout<<*i<<endl;
  cout<<*j<<endl;
  cout<<*temp<<endl;
}

int main() {

  /*
  int i=15,j,*p,*q;
p = &i;
*p=20;
cout<<*p;
j = (*p) + (*p);
cout << '\n';
cout << j;
q = &i;
*p = *q - 1;
cout << '\n';
cout << *p; 
q = &j;
*p = *q - 1;
cout << '\n';
cout << *p;

// i=20; j=40; p=39; j=19  */
  
/*j=2 ;
x =*p;
q=&i;
*p=*q-1;
q=&j;
*p=*q-1;
*/

  /*
  int num=5;
  int *ptr=&num;
  num = 2 * (*ptr);
  cout << ptr;
  
  cout<<'%d'<<num;
*/


 
int x, y, *p; y = 0;
p = &y;
x = *p;
  x = 4;
(*p)++;
--x;
(*p) += x;
/*
--x;

*/

 /* 
  cout<<x<<endl;
  cout<<*p<<endl;
  
  cout<<*p;
*/
  int num1=5;
  int *ptr1=&num1;

  int num2=6;
  int *ptr2=&num2;

  troca(ptr1, ptr2);





  string a, b;
 a = "carro";
b = "carro1";
if (a==b){
printf("são iguais");
}
else{
  if (a < b){
  printf ("%s vem antes de %s no dicionário", *(&a), *(&b));
  }
  else{
   printf ("%s vem depois de %s no dicionário", &a, &b);
    
  }
 
}


}