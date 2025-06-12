#include<stdio.h>
#include<conio.h>

int main()
{
    int d,y,m,D,M,Y,TD,Y1=0,D2=1,w=0,a=0,b=1;
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int brr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int D1=0,M1=0,M2=0;
    printf("----------------------------------------------------------\n\n");
    printf("ENTER THE DATE IN ORDER THAT IS => day mothn year \n\n");
    printf("----------------------------------------------------------\n\n");
    printf("ENTER START DATE: ");
    scanf("%d%d%d",&d,&m,&y);
    printf("\n----------------------------------------------------------\n\n");
    printf("ENTER END DATE: ");
    scanf("%d%d%d",&D,&M,&Y);
    printf("\n*--------------------------------------------------------*\n\n");
    

    if(y<Y)
    {
        if((m>=1&&m<=12)&&(M>=1&&M<=12))
        {
            if(((y%4==0 &&(y%400==0||y%100!=0))&&((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>=1&&d<=31))||((m==4||m==6||m==9||m==11)&&(d>=1&&d<=30))||((m==2)&&(d>=1&&d<=29)))||(((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>=1&&d<=31))||((m==4||m==6||m==9||m==11)&&(d>=1&&d<=30))||((m==2)&&(d>=1&&d<=28))))
            {
                if(((Y%4==0 &&(Y%400==0||Y%100!=0))&&((M==1||M==3||M==5||M==7||M==8||M==10||M==12)&&(D>=1&&D<=31))||((M==4||M==6||M==9||M==11)&&(D>=1&&D<=30))||((M==2)&&(D>=1&&D<=29)))||(((M==1||M==3||M==5||M==7||M==8||M==10||M==12)&&(D>=1&&D<=31))||((M==4||M==6||M==9||M==11)&&(D>=1&&D<=30))||((M==2)&&(D>=1&&D<=28))))
                {
                    for(int i=y; i<=Y; i++)
                    {
                      if(i%4==0 &&(i%400==0||i%100!=0))
                        {
                            D1=D1+366;
                            a=a+1;
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

                    printf("THE TOTAL DAYS = %d \n\n",TD);

                    D2=a*366;
                    Y1=Y1+a;
                    TD=TD-D2;

                    for(int i=0; i<b; i++)
                    {
                        if(TD>=365)
                        {
                          TD=TD-365;
                          Y1=Y1+1;
                          b=b+1;
                        }
                    }
                    b=1;
                    for(int i=0; i<b; i++)
                    {
                        if(TD>=7)
                        {
                           TD=TD-7;
                           w=w+1;
                           b=b+1;
                        }
                    }


                    printf("\n----------------------------------------------------------\n\n");
                    printf("IN TERMS OF YEARS,WEEKS AND DAYS");
                    printf("\n*--------------------------------------------------------*\n\n");
                    printf("YEARS = %d\n",Y1);
                    printf("WEEKS = %d\n",w);
                    printf("DAYS = %d\n",TD);


                }
                else
                {   printf("\n!--------------------------------------------------------!\n\n");
                    printf("!!ERROR!!\n\n");
                    printf("Please enter end date in correct manner!\n\n");
                }
            
    
            }
            else
            {   printf("\n!--------------------------------------------------------!\n\n");
                printf("!!ERROR!!\n\n");
                printf("Please enter start date in correct manner!\n\n");
            }
            
        

        }
        else
        {
            printf("\n!--------------------------------------------------------!\n\n");
            printf("!!ERROR!!\n\n");
            printf("Please enter the month accoring to Gregorian calendar!\n\n");
        }
    }
    else
    {
        printf("\n!--------------------------------------------------------!\n\n");
        printf("!!ERROR!!\n\n");
        printf("Start year can not be greater then End year!\n\n");
    }
   
    return 0;
}
// This code calculates the total number of days, weeks, and years between two dates
// in the Gregorian calendar, accounting for leap years and validating the input dates.