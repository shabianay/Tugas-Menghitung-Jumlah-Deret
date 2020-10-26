#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
 {
   int n,i,bil;
   printf("Masukan Jumlah Angka= ");scanf(" %d",&n);
   
   for(i=1; i<=n; i++)
    {
      bil=(i*4-1);
      printf(" %d",bil);
    }
  
  getch();
 }

