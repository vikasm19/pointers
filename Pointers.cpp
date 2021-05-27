//Pointers.

#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int *xptr= &x;
    
    //To print addres of x;
    cout<<"Address of x: "<<xptr<<"\n";
    
    //To print value of x;
    cout<<"Value of x: "<<*xptr<<"\n";
    
    //Re-assigning the another addres to the variable;
    int y = 10;
    int *yptr = &y;
    xptr = &y;
    cout<<"Addres of y: "<<xptr<<"\n";
    cout<<"Value of y: "<<*xptr<<"\n";
    return 0;
}