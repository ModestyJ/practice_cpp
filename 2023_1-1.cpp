#include <iostream>
using namespace std;
#define N 20
int main()
{
    int a,b,c,d;
    d=0;
    for(a=2; a<N; a++)
    {
        b=2;
        c=0;
        while(b<a)
        {
            if(a%b==0) c=1;
            b++;
        }
        if(!c) d++;
    }
    cout << d;
}
