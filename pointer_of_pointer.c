#include<stdio.h>
int main(){
    int i = 4;
    int* j = &i;
    int**k = &j;
    printf("the value of i is %d\n",i); // print value of i 
    printf("the value of i is %d\n",*j); // print value of i
    printf("the value of i is %d\n",*(&i)); // print value of i
    printf("the value of i is %d\n",**(&j)); // print value of i
    printf("the address of i is %u\n",&i); // it will represent the address of i 
    printf("the address of j is %u\n",&j); // it will represent the address of j 
// Note: tum aisa samjho ki * aur & ek dusre ke opposite hai ye ek dusre ko kaat denge
// jaise *&i it will return i because & and * get cancelled
return 0;
}