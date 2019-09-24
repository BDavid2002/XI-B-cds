#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a,b=0,max1=-99999,max2=-99999;
    ifstream in("bac.txt");
    while(in >> a)
    {
        if(a%2==1)
        {
            b++;
        }
        if(b==3)
        {
            if(a%2==0)
            {
                if(a>max2)
                {
                    max1=max2;
                    max2=a;
                }
            }
        }
        if(b>3)
        {
            break;
        }
    }
    cout << max1 << " " << max2;
    }
