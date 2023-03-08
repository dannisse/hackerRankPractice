#include <iostream>
#include <cstdio>
using namespace std;
/* PROMPT
Input format: You will be given two positive integers, a and b (a<=b), separated by a newline \n
Output format: For each integer n, in the inclusive interval [a,b]:

If 1 <= n <= 9,  then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n > 9 and it is an even number, then print "even".
Else if n > 9 and it is an odd number, then print "odd".
*/

int main() {
    int a,b,n; // declare integer n 
    cin >> a>> b>> n;
    
    if (a <= b)
    {
        
        for (int n=a; n<=b; n++) {
            if (n > 9)
            {
                if (n % 2==0) {
                    cout << "even"<< endl; 
                }
                else{
                    cout << "odd" << endl;
                }
            }
            
            else {
                if (n==1){
                    cout<< "one" << endl;
                }
                else if ( n==2) {
                    cout << "two" << endl;
                }
                else if (n==3){
                    cout << "three" << endl;
                }
                else if (n==4){
                    cout << "four" << endl;
                }
                else if (n==5){
                    cout << "five" << endl;
                }
                else if (n==6){
                    cout << "six" << endl;
                }
                else if (n==7){
                    cout << "seven" << endl;
                }
                else if (n==8){
                    cout << "eight" << endl;
                }
                else if (n==9){
                    cout << "nine" << endl;
                }
            }
        }

    return 0;
}
}

//Shorter way to solve is to use vectors, but the prompt did not go over that, so for now we will use if else-if else statements
