#include<stdio.h>
int main()
{
	int i,num,f;
		printf("Enter limit:\n");     
	     scanf("%d",&num);
		 printf("The prime numbers from 1 to %d are",num);         
	     for(i=2;i<=num;i++)       
	     { 
	        int count=0;
	        for(f=1;f<=i;f++)            
	        {
	            if(i % f == 0)   
				{    
				    count+=1;        
			    }   
		    }
			if(count==2) 
			{
		        printf("%4d ",i);
            }
        }
}
