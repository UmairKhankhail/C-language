main()
{
    int x=5;
    x--; //post increment , it has the most lowest priority among all the operators.
    printf("%d",x);
    --x;
    printf("%d",x);
    getch();

    // concentrate here

    int y=4,z;
    y++;
    printf("%d \n",y);
    z=y++;  // because of the lowest precedency of the post unary operator
    printf("%d %d",y,z);

}
