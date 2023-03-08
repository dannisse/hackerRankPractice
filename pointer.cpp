#include <iostream>
#include <stdio.h>

/*Complete the update function in the editor below.

Update has the following parameters:

int *a: an integer
int *b: an integer

The function is declared with a void return type, so there is no value to return. Modify the values in memory so that "a" contains their sum and 
"b" contains their absoluted difference.
*/

//TODO
void update(int *a,int *b) {
    int a1 = *a; // assign value in a1 to *a
    int b1 = *b; // assign value in b1 to *b
    *a=a1 + b1; // adds up the values a1 and b1 to get new updated value *a
    *b=abs(a1-b1); // takes the absolute value of a1-b1 (as stated in prompt, absolute difference)
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
