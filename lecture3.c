#include <stdio.h>

// ประกาศตัวแปร global ต่อบรรทัดที่ 37

// int k, l;

//-------------------------------------------------------------

// Function

// ReturnType FunctionName(parameter){
//     // statement

//     return ....;       // ค่าที่ต้องการเอาออกไป
// }

// Function Prototype
// ReturnType FunctionName(parameter);
// เขียน Function ที่ไหนก็ได้

int addTen(int x){
    printf("addTen x = %d\n", x);
    x = x+10;
    printf("after add addTen x = %d\n", x);
    return x;
}

int main(){

    // การเรียกใช้ Function
    int x = 100;
    int y = addTen(x);
    printf("In main x = %d, y = %d\n", x, y);

    //---------------------------------------------------------

    // การเรียกใช้ตัวแปร local และ global

    // int i = 0, j = 0;
    //     printf("%d %d %d %d\n", i, j, k, l);

    //---------------------------------------------------------

    // loop while

    // while (i < 10){
    //     printf("%d\n", i);
    //     i += 1;
    // }

    //---------------------------------------------------------

    // loop while true

    // while (1){
    //     printf("%d\n", i);
    //     i += 1;
    // }

    //---------------------------------------------------------

    // loop for

    // for (int i = 0 ; i < 10 ; i++){
    //     printf("%d\n", i);
    // }

}