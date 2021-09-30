// <, >,  <=, >=

// ==, !=

main()
{
    int x=5>10;
    int y=4!=100;
    int z=5>3>2;
    printf("%d",y);
    printf("%d",x);
    printf("\nInteresting answer: %d",z); // 0 b/c 5>3=1 and 1>2=0
    getch();
}
