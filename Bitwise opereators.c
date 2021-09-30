main()
{
    int x=23&56;
    printf("%d",x);

    int y=5|6;
    printf("\nThe bitwise answer of 23 OR 56 should be 7 and YES it is: %d",y);

    // XOR operator ^, it says that if two operands are same the result is false i.e 0 and if both are different the result is True i.e 1

    int z=10^5;
    printf("\nThe bitwise answer of 10 XOR 5 should be 15 and YES it is: %d",z);

    //Right Shift operator >>, it says that enter two zeros from the right side and last digits of the same amount will go out of the memory
    int k=12>>3;
    printf("\nThe bitwise answer of 3 times Right Shifting to 12 should be 1 and YES it is: %d",k);

    //Left Shift operator <<, enter zeros from the left side.

    int g=12<<3;
    printf("\nThe bitwise answer of 3 times Left Shifting to 12 should be 96 and YES it is: %d",g);
    getch();

}
