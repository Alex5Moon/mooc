#include<stdio.h>
 
int f(void);

int gAll = 12;
//int gAll;
//int gAll = f();
//int gAll = 12;
//const int gAll = 12;
//int g2 = gAll;

int main(int argc,char const *argv[])
{
	printf("in %s gAll=%d\n",__func__,gAll);
	f();
	printf("agn %s gAll=%d\n",__func__,gAll);
	return 0;
}
int f(void)
{
	int gAll = 1;// 在更小的地方，你可以重新定义曾经出现过的变量，将其隐藏掉。 
	printf("in %s gAll=%d\n",__func__,gAll);
	gAll += 2;
	printf("agn %s gAll=%d\n",__func__,gAll);
	return gAll;
} 


