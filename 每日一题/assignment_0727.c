#include<stdio.h>
#include<string.h>
int main()
{
    int a[10]={0};
    int b[10]={0};
    int num=10;
    int count;
    for(count=1;count <= num; count++)
    {
        if(count==1)a[0]=1;
        else if(count==2) a[0]=1,a[1]=1;
        else
        {
	    memmove(b,a,(count-1)*sizeof(int));
 	    //for(int temp=0; temp<count-1;temp++) b[temp]=a[temp];	    
            a[count-1]=1;
            for(int i=1;i<count-1;i++)
	    {
		a[i] = b[i]+b[i-1];
	
  	    }

        }
        for(int j=0;j<num;j++)
    	{
	    if(a[j] !=0) printf("%d ",a[j]);
        }
 	printf("\n");
    }
  
    return 0;


}
