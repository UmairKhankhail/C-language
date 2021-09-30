main()
{
    int prev=0;
    int curr=1;
    int next=0;
    for(int i=0;i<10;i++)
    {
        next=prev+curr;
        printf("%d\n",prev);
        prev=curr;
        curr=next;

    }
}
