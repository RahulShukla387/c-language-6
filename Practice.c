// Practice problem1

// #include<stdio.h>
// int main(){
//  int i ;
//  printf("the address of i is%p \n",&i);   
//  printf("the address of i is%u ",&i);   
// }

// Practice problem 3
// #include<stdio.h>
// void value_change(int*); // function prototype
// void value_change(int* x){ // function definition
// *x = *x * 10;
// }
// int main(){
// int a = 30;
// printf("the value of the a is %d\n",a); // print the value of a 
// value_change(&a); // it commond to print 10 times
// printf("the value of the a is %d\n",a); // print 10 times
// }


// practice problem 4
// #include<stdio.h>
// //function prototype 
// int swap(int* ,int*);
// int swap(int* x ,int* y){
//     int temp;
//     temp = *x;
//     *x=*y;
//     *y=temp;
// }
// int main(){
//     int a = 5 , b =6;
// //     printf("the value of a is %d and b is %d ",&a,&b); // it will print the address of the a and b
// // for swapping use like that
// swap(&a,&b);
// printf("the value of a is %d and b is %d",a,b);
// }


// practice problem 5
#include<stdio.h>
    // function prototype
    int num(int , int);
    // function definition
    int num(int x , int y){
        int sum = x+y;
        // float average = (x+y)/2.0;
        printf("the sum is %d", sum);
        // printf("the average is %f", average);
    }
int main(){
sum(5,3);
// average(5,3);
}