#include<stdio.h>
int main()
{
    int d,y,m,D,M,Y,TD;
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int brr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int D1=0,M1=0,M2=0;
    
    printf("Enter Start Date: ");
    scanf("%d%d%d",&d,&m,&y);
    printf("Enter End Date: ");
    scanf("%d%d%d",&D,&M,&Y);

    for(int i=y; i<=Y; i++)
    {
        if(i%4==0 &&(i%400==0||i%100!=0))
        {
            D1=D1+366;
        }
        else
        {
            D1=D1+365;
        }
    } 

    if(y%4==0 &&(y%400==0||y%100!=0))
    {
        for(int i=1; i<m; i++)
        {
            M1=M1+brr[i-1];
        }
        M1=M1+d;
    }
    else
    {
        for(int i=1; i<m; i++)
        {
            M1=M1+arr[i-1];
        }
        M1=M1+d;
        
    }  
    
    if(Y%4==0 &&(Y%400==0||Y%100!=0))
    {
        for(int i=M+1; i<=12; i++)
        {
            M1=M1+brr[i-1];
        }
        M1=M1+(brr[M-1]-D);
    }
    else
    {
        for(int i=M+1; i<=12; i++)
        {
            M1=M1+arr[i-1];
        }
        M1=M1+(brr[M-1]-D);
    }

    TD=D1-M1;
    printf("\n%d",TD);




    return 0;
}
// Output: The program calculates the total number of days between two dates, accounting for leap years.