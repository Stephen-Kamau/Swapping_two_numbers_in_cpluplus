#include <iostream>

using namespace std;//pass by reference

void swapFtn(int *a ,int *b)
{
    int w;
    w=*a;//w points to position of pointer a
    *a=*b;//change poimnter of pointer a to pointer b
    *b=w;//pointer b to w

}
int main()
{
    int x,y;
    cout << "Swapping" << endl;
    cout<<"Enter value x: ";
    cin>>x;
    cout<<"Enter value y: ";
    cin>>y;
    //pass the addresses or pointer to the function in order to assist in
    //changing the function
    //pointer i sproceeded by asterik
    //passsing by address is used using ampersand
    swapFtn(&x,&y);
    cout<<"x : "<<x;
    cout<<'\n'<<"y : "<<y;
    return 0;
}
