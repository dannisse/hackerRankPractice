#include <iostream>
#include <algorithm>
using namespace std;

/* PROMPT:
Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives
*/

// define the int variables a, b, c, d
int max_of_four (int a, int b, int c, int d){
    int max_val = max({a, b, c, d}); // max_val is a function that finds the maximum value of the 4 integers
    return max_val; // returns the max value of the four numbers
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d); //%d prints the int value in decimal form
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
