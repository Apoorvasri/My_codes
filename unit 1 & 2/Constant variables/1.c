#include<stdio.h>
const int a=10;
int  main()
{
  int a;
  printf("%d",a);
}
/*See,the above code will give the output 0 as the variable a
 is allocated memory and will be read from the memory and the variable
 only get allocated in the memory will have default value 0 but in the
 previous case when only constant was declared it read from the only code having the constant
 value 10.*/
