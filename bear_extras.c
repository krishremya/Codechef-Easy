    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
        int tc;
        scanf("%d",&tc);
        while(tc--)
        {
            int n;
            scanf("%d",&n);
            int A[n];
            for(int i=0;i<n;i++)
            {
                scanf("%d",&A[i]);
                
            }
            
             int  i,key, j;
             for (i = 1; i < n; i++)
            {
                key = A[i];
                j = i-1;
     
                while (j >= 0 && A[j] > key)
                 {
                     A[j+1] = A[j];
                     j = j-1;
                 }
                A[j+1] = key;
            }
     
            if(A[1]-A[0]!=1)
            printf("%d\n",A[0]);
            else if(A[n-1]-A[n-2]!=1)
            printf("%d\n",A[n-1]);
            else
            {
                for(int i=1;i<n-2;i++)
                {
                    if(A[i+1]-A[i]!=1)
                    printf("%d\n",A[i+1]);
                    
                }
            }
            
        }
        return 0;
     
    } 
