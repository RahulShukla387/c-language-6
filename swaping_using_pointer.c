// #include<stdio.h>
// // for swaping we have to use pointer directly we can not swap
// void swap(int* a,int* b);
// void swap(int*a , int*b){
//     int temp; // create a bucket temp so that change the value 
//     temp = *a; // assign the value of a into the temp bucket
//     *a = *b; // changing a into b
//     *b = temp; // assigning b into the temp 
// }
// int main(){
// int a = 4, b= 6;
// swap(&a,&b); // to call by reference we have to use & it will assign the address
// printf("the value of a is %d and b is %d",a,b);
// return 0;
//}

// Practice problem 6
#include<stdio.h>
int main(){
    char i = 'A';
    char*j = &i;
    printf("the value of i is %d\n",i);
    printf("the value of i is %p\n",&i);
    printf("the value of i is %p\n",j);
    printf("the value of i is %p\n");
}