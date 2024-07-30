#include<iostream>
using namespace std;
int sumofN(int);
int sumofodd(int);
int sumofeven(int);;
int fictorial(int);
int sumofdigit(int);
int fibo(int);
int power(int);
int hcf(int);


int sumofN(int n)
{
    if(n==1)
        return n;
    else
    {
        n=n + sumofN(n-1);
        return n;
    }
}
int sumofodd(int n)
{
    if(n==1)
        return n;
    else
    {
        n=(2*n-1)+sumofodd(n-1);
        return n;
    }
}
int sumofeven(int n)
{
    if(n==1)
        return n;
    else
    {
        n=2*n-2 + sumofeven(n-1);
        return n;
    }
}
int fictorial(int n)
{
    if(n==0)
        return 1;
    else
    {
        n=n*fictorial(n-1);
        return n;
    }

}
int sumofdigit(int n)
{
    if(10>n)
        return n;
    else
    {
        n=n%10 + sumofdigit(n/10);
        return n;
    }

}
int fibo(int n)
{
    int a,b;
    if(n==0||n==1)
        return n;
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int power(int a, int b)
{
    if(b==1)
        return a;
    else
    {
        return a*power(a,b-1);
    }
}
int hcf(int a,int b)
{
    if(a%b==0)
        return b;
    else
    {
        int c=b;
        b=a%b;
        a=c;
        return hcf(a,b);
    }
}
