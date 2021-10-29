
// This function allocates memory to an array

main()
{
    int *ptr;
    ptr=(int*)calloc(5,4);
    *ptr=2;
    printf("%d",*ptr);
}
