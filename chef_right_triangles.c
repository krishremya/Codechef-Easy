     #include <stdio.h> 
        #include <math.h>
         
        int main() {
        	int x1,y1,x2,y2,x3,y3,d1,d2,d3,t,i,c=0;
        	scanf("\n%d",&t);
            for(i=1;i<=t;i++)
            {  scanf("\n%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
               
               d1=pow((x2-x1),2)+pow((y2-y1),2);
        	   d2=pow((x3-x2),2)+pow((y3-y2),2);
        	   d3=pow((x3-x1),2)+pow((y3-y1),2);
        	   if(d1>d2 && d1>d3)
        	   		
        		{
        			if(d1==d2+d3)
        			c=c+1;
        		}
        		else if((d2>d1)&&(d2>d3))
        		{
        			if(d2==d1+d3)
        			c=c+1;
        		}
        		else
        		{
        			if(d3==d1+d2)
        			c=c+1;
        		}
        	}
        	printf("%d",c);
        	return 0;
        }    
