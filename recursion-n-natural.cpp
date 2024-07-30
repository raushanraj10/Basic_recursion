#include<iostream>
using namespace std;
void natural(int);
void reversenatural(int);
void oddprint(int n);
void reverseoddprint(int);
int sumofsquareN(int);
void even(int);
void reverseeven(int);
int main()
{
    int a;
    cin>>a;
    reverseeven(a);
    a=sumofsquareN(a);
    cout<<endl<<" "<<a;

}
void natural(int n)
{
    if(n==0){cout<<endl;}
    else{
    natural(n-1);
    cout<<" "<<n;}
}
void reversenatural(int n)
{
    if(n==0){cout<<endl;}
    else
    {
        cout<<" "<<n;
        reversenatural(n-1);
    }
}
void oddprint(int n)
{
    if(n>0)
    {
        oddprint(n-2);
        if(n%2==0)
            n--;
        cout<<" "<<n;
    }
}
void reverseoddprint(int n)
{
    if(n>0)
    {
           cout<<" "<<2*n-1;

        reverseoddprint(n-1);

    }
}
void even(int n)
{
    if(n==0){}
    else
    {
        even(n-1);
        cout<<" "<<n;
    }
}
void reverseeven(int n)
{
    if(n>0)
    {
        cout<<" "<<n;
        reverseeven(n-1);
    }
}
int sumofsquareN(int n)
{
    if(n==1)
        return n;
    else
    {
       n=n*n + sumofsquareN(n-1);
       return n;
    }
}
















