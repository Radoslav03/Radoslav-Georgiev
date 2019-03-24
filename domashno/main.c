#include <stdio.h>
double radko (double S,int n ){
double a;
    a=S;
for(int i=0;i<=n;i++){
     a=(a+(S/a))/2;
    }
return a;
}
int main()
{
 printf("%f",radko(49,100));
}
