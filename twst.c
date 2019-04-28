#include<stdio.h>
#include<math.h>
int a[10000];
double e=0.001;
int n;

double f(double x)
{
	double sum=0;
	for(int i=0;i<=n;i++)
	{
		sum+=a[i]*pow(x,n-i);
	}
	return sum;
}

double falsi(double a,double b)
{
	double c;
	while((b-a)>=e)
	{
		c=(a*f(b)-b*f(a))/(f(b)-f(a));
		if(f(c)==0)
		{
			return c;
		}
		else if(f(a)*f(c)<0)
		{
			b=c;
		}
		else
		{
			a=c;
		}
	}
	return c;
}

int main()
{
	printf("enter the maximum power: \n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	
	int a=0,b=0,i=0,j=0;
	
	if(f(0)<0)
	{
		while(f(i)<=0 && f(j)<=0)
		{
			i++;
			j--;
			printf("jkxbcvf\n");
		}
		if(f(i)>0)
		{
			a=i-1;
			b=i;
		}
		else
		{
			a=j;
			b=j-1;
		}
	}
	
	else
	{
		while(f(i)>=0 && f(j)>=0)
		{
			i++;
			j--;
		}
		if(f(i)<0)
		{
			a=i-1;
			b=i;
		}
		else
		{
			a=j;
			b=j-1;
		}
	}
	printf("%d %d",a,b);
	printf("%lf",falsi(a,b));
}
