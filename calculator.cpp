#include <iostream>
using namespace std;

int add()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c=a+b;
    cout<<"The addition of "<<a<<" and "<< b<<" is "<<c;

    return 0;
}

int sub()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c=a-b;
    cout<<"The substraction of "<<a<<" and "<< b<<" is "<<c;

    return 0;
}

int multiply()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c=a*b;
    cout<<"The multiplication of "<<a<<" and "<< b<<" is "<<c;

    return 0;
}

int Div()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    c=a/b;
    cout<<"The division of "<<a<<" to "<< b<<" is "<<c;

    return 0;
}

int main()
{
    int c;

    cout<<" What do you want to perform \n addition= 1,\n substraction= 2,\n multiplication= 3,\n division= 4: ";

    cin>>c;

    if (c==1)

    {

        add();

    }

    else if (c==2)

    {

        sub();

    }

    else if (c==3)

    {

        multiply();

    }

    else if (c==4)

    {

        Div();

    }
}



