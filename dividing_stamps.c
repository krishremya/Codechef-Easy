        #include <stdio.h>
        int main() 
        {
        	int n,s=0,b=0;
        	scanf("%d",&n);
        	int c[n];
        	for(int i=1;i<=n;i++)
        	{
        	      scanf("%d",&c[i]);
        	      s=s+c[i];
        	      b=b+i;
        	      
        	  }
        	  if(s==b)
        	  printf("YES");
        	  else
        	  printf("NO");
        	  
        	
        return 0;	  
        	 }  
