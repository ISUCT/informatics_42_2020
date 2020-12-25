#include <iostream>

using namespace std;

int* kv_dop(int *massive, int length, bool diag)
{
    massive = new int[length*length];
    for (int i=0; i<length*length; i++)
    {
        if (i<=length || (i+1)%length==0 || i%length==0 || (i>length*(length-1) && i<(length*length)))
        {
            massive[i]=length;
        }
        else
        {
            massive[i]=0;
        }
        if (diag)
        {
            if (i%(length+1)==0)
            {
                massive[i]=length;
            }
        }
    }
    return massive;
}

void kv(int b, bool d)
{
    int y;
    int *y_fake = kv_dop(&y, b, d);
    for (int i=0; i<b*b; i++)
    {

        if ((i+1)%b==0)
        {
            cout<<y_fake[i]<<endl;
            continue;
        }
        if (y_fake[i]==b)
        {
            cout<<y_fake[i];
        }
        else
        {
            if (b>=10)
            {
                for (int i=0; i<2; i++)
                {
                    cout<<" ";

                }
            }

            else
            {
                cout<<" ";
            }
        }
    }
}

int main()
{
    kv(3, true);
    return 0;
}

