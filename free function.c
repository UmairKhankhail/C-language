main()
{
    float *f;
    f=(float*)malloc(4);
    *f=2.3;
    printf("%f",*f);
    free(f);             // This function releases the memory of dynamic memory block
    printf("\n%f",*f);
}
