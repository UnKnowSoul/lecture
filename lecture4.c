#include<stdio.h>
#include<stdlib.h>

void printString(char *s){
    for (char *p=s; *p != '\0'; p++){
        printf("[%p] = %c\n", p, *p);
    }
}

void encrypt(char *s){
    for (char *p = s; *p != '\0'; p++){
        *p += 1;
    }
}

int main(){

    char s[100];
    scanf("%s", s);
    printString(s);
    encrypt(s);
    printString(s);

    // ------------------------------------------------------------------------

    // int a=100;       //เลขฐาน10
    // int b=0144;      //เลขฐาน8
    // int c=0x132;     //เลขฐาน16
    // int d=0b1010;    //เลขฐาน2

    // printf("%d %d %d %d", a, b, c, d);

    // int x=100;
    // printf("value of x = %d\n", x);
    // printf("reference of x = %lu\n", &x);
    // printf("reference of x = %p\n", &x);

    // int data[10] = {1, 2, 3, 4, 5};
    // printf("date[0] = %d\n", data[0]);
    // printf("reference of date[0] = %p\n" ,&data[0]);
    // printf("reference data = %p\n", data);

    // int x = 100;
    // int data[10] = {1, 2, 3, 4, 5};

    // int *ptr;
    // ptr = &x;
    // int *arrPtr = data;

    // printf("value of ptr = %p\n", ptr);
    // printf("reference of ptr = %p\n", &ptr);
    // printf("value of reference *ptr = %d\n", *ptr);

    // printf("arrPtr = %p\n", arrPtr);
    // printf("*arrPtr = %d\n", *arrPtr);

    // arrPtr += 1;        // => 1*int , 1*char , 1*double

    // printf("arrPtr = %p\n", arrPtr);
    // printf("*arrPtr = %d\n", *arrPtr);

    // ------------------------------------------------------------------------

    // int x;
    // char s[10];
    // char c;
    // scanf("%d", &x);
    // scanf("\n%c", &c);
    // printf("x = %d, c = %c ", x, c);

}