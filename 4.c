main()
{
 int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("a=%d",a);
    printf("\n");
    printf("b=%d",b);
    getch();
}

