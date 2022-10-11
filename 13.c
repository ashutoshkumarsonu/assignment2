#include<stdio.h>

main()
{
  int add,subs,divid,multiply,choice;
while(1)
{
  printf("\n1.sunday:");
  printf("\n2.monday:");
  printf("\n3.tuesday:");
  printf("\n4.wednesday:");
   printf("\n5.thursday:");
    printf("\n6.friday:");
    printf("\n7saturday:");



  printf("\nenter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
case 1: printf("today is sunday");

       break;
case 2: printf("today is monday\nraj beta how are you");

       break;
case 3: printf("today is tuesday");

       break;
case 4: printf("today is wednesday");

       break;
case 5: printf("today is thursday");

       break;
case 6: printf("today is friday");

       break;
case 7: printf("today is saturday");

       break;


default:
    printf("########################\n");
    printf("tere papa avi soye hai");
    return 0;
}
  }

  getch();

}


