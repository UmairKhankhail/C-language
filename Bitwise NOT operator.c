/*
1. Bitwise NOT is a unary operator as well.

*/

main()
{
/*
    int x=2147483647; // since the integer is 4 bytes in size, therefore it can store a value ranges from -2147483648 to 2147483647
    printf("%d\n",x);
    printf("%d",sizeof(char));
*/
   int bitwise_not=~12;
   printf("%d",bitwise_not);
   int bitwise=~4;
   printf("\nThe bitwise NOT of 4 should be -5 and YES it is: %d",bitwise);
   getch();
}
