#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n],b[n];
    int i,j,c=-1,k=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c=i-j;

                if(c<0)
                    c=-1*c;
                b[k++]=c;
            }
        }

    int min=b[0];
    if(c==-1)
    {
        min=c;
    }
    else
    {
        for(i=0;i<k;i++)
        {
            if(b[i]<min)
            {
                min=b[i];
            }
        }
    }
    printf("%d",min);
}
