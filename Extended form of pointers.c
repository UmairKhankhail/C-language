
  // Any pointer must contain the address of one point short than its level e.g **q contains the address of *p and *p contains the address of zero level variable x

main()
{
        int x=5,*p,**q,***r;
        printf("%d \n",x);
        p=&x;
        printf("%u \n",p);
        q=&p;
        printf("%d \n",q);
        r=&q;
        printf("%u \n",r);
        ***r=10;
        printf("%d",x);
        getch();

}
