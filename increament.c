#include <stdio.h>

int main() {
    int x = 4,a;
     a=x++ + x++ + x++;
     /* here the x++ value is 4 after execution of x it becomes 5
        after that 2nd x++ value is 5 after the execution the value is 6;
        so the 3rd x++ value will not increament first it stores the value in the varaible a 
        so the answer is :4+5+6
        */
    printf("%d\n", a);
    return 0;
}
