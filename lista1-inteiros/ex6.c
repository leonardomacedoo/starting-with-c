#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
int maiorAB1 = 0;
int maiorAB2 = 0;
int a = 0;
int b = 0;
int c = 0;


scanf("%i", &a);
scanf("%i", &b);
scanf("%i", &c);

maiorAB1 = (a+b+abs(a-b))/2;
maiorAB2 = (maiorAB1+c+abs(maiorAB1-c))/2;

printf("%i eh o maior\n", maiorAB2);
 
    return 0;
}