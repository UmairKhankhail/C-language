

    // We can just add and subtract integers from pointers to form an address.

    // Pointer+n= Pointer + sizeof (type of pointer)*n

    // Pointer-Pointer= literal subtraction / sizeof(type of pointer)


main()
{
    int a,b;
    int *p,*q;

    p=&a;
    q=&b;

    printf("%u \n",p);
    printf("%u \n",p+3);

    printf("%u \n",q);
    printf("%u \n",p-q);
}
