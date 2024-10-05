#include<stdio.h>
int main(){
    float l = 35;
    float k = 18;
    float* j = &l;// j is a pointer pointing to l
    float* a = &k;// k is a pointer pointing to a
    // for seeing address use %p and &l similarly if you want to see the address in the integer use %d at placce of %p
    printf("the address of int is %p\n",&l);
    printf("the address of int j is %u\n",&j);
    printf("the address of int k is %u\n",&k);
    // value at the address give you value again * laga kr address likhne par uski value mil jaati hai samjhe 
    printf("the value at addresss is %f",*&j);
    printf("\nthe value at addresss is %f",*a);
    printf("\nthe value at addresss is %f, \n%f",*&l,*&k);
    return 0;
}