# Pattern Printing

**Q1. Print a solid rectangle.**
```
    int r,c;
    cin>>r>>c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
```

**Q2. Print a solid square.**
     ```int side;
     cin>>side;
     for(int i = 0; i < side; i++)
     {
         for(int j = 0; j < side; j++)
         {
             cout<<"* ";
         }
         cout<<endl;
     }```

**Q3. Print a number square.**
     ```int n;
     cin>>n;
     for(int i = 1; i <= n; i++)
     {
         for(int j = 1; j <= n; j++)
         {
             cout<<j;
         }
         cout<<endl;
     }```

**Q4. Print a star triangle.**
     ```int n;
     cin>>n;
     for(int i = 0; i <= n; i++)
     {
         for(int j = 0; j < i; j++)
         {
             cout<<"* ";
         }
         cout<<endl;
     }```

**Q5. Print a star triangle.**
     ```int n;
     cin>>n;
     for(int i = 0; i <= n; i++)
     {
         for(int j = 0; j < i; j++)
         {
             cout<<"* ";
         }
         cout<<endl;
     }```

**Q5. Print a reverse star triangle.**
     ```int n;
     cin>>n;
     for(int i = 1; i <= n; i++)
     {
         for(int j = 1; j <= n+1-i; j++)
         {
             cout<<"* ";

        }
        cout<<endl;
    }```

**Q6. Print a number triangle.**
     ```int n;
     cin>>n;
     for(int i = 1; i <= n; i++)
     {
         for(int j = 1; j <= i; j++)
         {
             cout<<j;
         }
         cout<<endl;
     }```

**Q7. Print odd number triangle.**
    ```int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a += 2;
        }
        cout << endl;
    }```

**Q7. Print alphabet square.**
    ```int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j+64)<<" ";
        }
        cout << endl;
    }```

**Q8. Print alphabet square.**
    ```int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j+64)<<" ";
        }
        cout << endl;
    }```

**Q9. Print star plus.**
    ```int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n/2 + 1 || j == n/2 + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }```

**Q10. Print alphabet square.**
    ```int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==j || i+j == n+1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }```

**Q11. Print floyd's traingle.**
    ```int n;
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }```

**Q12. Print binary traingle.  -->> ❤️**
    ```int n;
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        if(i%2 != 0) a = 1;
        else a = 0;
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            //flipping
            if(a==0) a = 1;
            else a = 0;
        }
        cout << endl;
    }```