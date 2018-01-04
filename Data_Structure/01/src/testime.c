#include<stdio.h>
#include<time.h>

clock_t start,stop;
/* clock_t clock() return*/
double duration;
/* record times s */
int main(void)
{
	/* prepare work */
		start = clock();
		myFunction();
		
		stop = clock();
		duration = ((double)(stop-start))/CLK_TCK;
		/* run times */
		return 0;
}
double f1(int n,double a[],double x)
{
	int i;
	double p = a[0];
	for(i=1;i<=n;i++)
		p += (a[i]*pow(x,i));
	return p;
}
double f2(int n,double a[],double x)
{
	int i;
	double p = a[n];
	for(i=n;i>0;i--)
		p = a[i-1]+x*p;
	return p;
}
