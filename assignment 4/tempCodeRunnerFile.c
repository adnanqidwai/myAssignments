  while ((ch=fgetc(ptr))!='<')
    {
        a[ch]++;
        printf("%c",ch);
    }
    for (int i = 1; i < 128; i++)
    {
        if (a[i]!=0)
        {
            printf("%c occurs %d times\n",i,a[i]);
        }
        
    }