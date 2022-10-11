#include<stdio.h>
int a,b,c;
main()
{
  int add,subs,divid,multiply,choice;
while(1)
{
  printf("\n1.Addition:");
  printf("\n2.Substraction:");
  printf("\n3.multiplication:");
  printf("\n4.Division:");

  printf("\nenter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
case 1: printf("Enter two numbr");
     scanf("%d%d",&a,&b);
     c=a+b;
     printf("sum is %d",c);
       break;
case 2: printf("Enter two numbr");
     scanf("%d%d",&a,&b);
     c=a-b;
     printf("subs is %d",c);
       break;
case 3: printf("Enter two numbr");
     scanf("%d%d",&a,&b);
     c=a*b;
     printf("multiply is %d",c);
       break;
case 4: printf("Enter two numbr");
     scanf("%d%d",&a,&b);
     c=a/b;
     printf("divid is %d",c);
       break;
default:
    printf("invalid ");
    return 0;
}
  }

  getch();

}

