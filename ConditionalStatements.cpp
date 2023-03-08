#include <iostream>
using namespace std;

//solution without the use of arrays
int main()
{
    int n;
    cin>>n;
    
    if(n>9)
    {
        cout<<"Greater than 9";
    }
    else
    {
        if(n==1)
        {
            cout<<"one";
        }
        else if(n==2)
        {
            cout<<"two";
        }
        else if(n==3)
        {
            cout<<"three";
        }
        else if(n==4)
        {
            cout<<"four";
        }
        else if(n==5)
        {
            cout<<"five";
        }
        else if(n==6)
        {
            cout<<"six";
        }
        else if(n==7)
        {
            cout<<"seven";
        }
        else if(n==8)
        {
            cout<<"eight";
        }
        else if(n==9)
        {
            cout<<"nine";
        }
        
    }
}

/* solution if arrays were used:

int main(){
    int n; // declare n as an int number 
    
  //create an array (not apart of lesson, in that case, make if else-if else conditional statements instead for each number until 9)
    string arr[9] =   
    {"one","two","three",
    "four","five","six",
    "seven","eight","nine"};
    
    cin >> n; //input n
    
    cout << arr[n-1]; //output the array position of the input (whatever you put in) minus 1
    
    //conditional if the n is greater than 9, then output message "Greater than 9"
    if(n > 9){
        cout << "Greater than 9" << endl;
    }
    return 0;
}*/
