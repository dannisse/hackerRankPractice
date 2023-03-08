#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int x; //%d
    long y; //%ld
    char ch; //%c
    float z; //%f
    double d; //%d
    
    scanf("%d %ld %c %f %lf", &x, &y, &ch, &z, &d);
    printf("%d\n%ld\n%c\n%f\n%lf\n", x, y, ch, z, d);
    return 0;
}

//what i did wrong: the output needed every data type on a new line, so i needed to add "\n" after each type in the printf function. no spaces.
