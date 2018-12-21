#include<stdio.h>
const int a=9;
int main()
{
	a=5;
	printf("%d",a);
}

//[Error] assignment of read-only variable 'a' as the constant once defined can not be updated.
