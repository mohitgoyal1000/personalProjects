#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//#define int janEnd = 31;
//#define int febEnd = 59;
//#define int marchEnd = 90;
//#define aprilEnd = 120;
//#define mayEnd = 151;
//#define juneEnd = 181;
//#define julyEnd = 212;
//#define augEnd = 243;
//#define int septEnd = 273;
//#define int octEnd = 304;
//#define int novEnd = 334;
//#define int decEnd = 365;


int calculateYearDay(int month, int day)
{
    int yearDay;

   if(month == 1)
   {
     yearDay = day + 0;
   }
   else if(month ==2)
   {
       yearDay = day + 31 ;
   }
   else if(month ==3)
   {
       yearDay = day + 59 ;
   }
   else if(month ==4)
   {
       yearDay = day + 90;
   }
   else if(month ==5)
   {
       yearDay = day + 120 ;
   }
   else if(month ==6)
   {
       yearDay = day + 151 ;
   }
   else if(month ==7)
   {
       yearDay = day + 181 ;
   }
   else if(month ==8)
   {
       yearDay = day + 212 ;
   }
   else if(month ==9)
   {
       yearDay = day + 243 ;
   }
   else if(month ==10)
   {
       yearDay = day + 273 ;
   }
   else if(month ==11)
   {
       yearDay = day + 304 ;
   }
   else if(month ==12)
   {
       yearDay = day + 334 ;
   }

   return(yearDay);

}

int calculateReturnMonth(int returnYearDay)
{
    int returnMonth ;
   if( returnYearDay > 0 && returnYearDay <= 31)  //calculating month using year day//
    {
        returnMonth = 1;
    }
    else if( returnYearDay > 31 && returnYearDay <=59 )
    {
        returnMonth  = 2;
    }
    else if( returnYearDay > 59 && returnYearDay <= 90)
    {
        returnMonth  = 3;
    }
    else if( returnYearDay >90 && returnYearDay  <= 120)
    {
        returnMonth  = 4;
    }
    else if (returnYearDay> 120 && returnYearDay <=151)
    {
        returnMonth  = 5;
    }
    else if( returnYearDay > 151 && returnYearDay <= 181)
    {
        returnMonth  = 6;
    }
    else if( returnYearDay > 181 && returnYearDay <= 212)
    {
        returnMonth  = 7;
    }
    else if( returnYearDay > 212 && returnYearDay <= 243)
    {
        returnMonth  = 8;
    }
    else if( returnYearDay > 243 && returnYearDay <= 273)
    {
        returnMonth  = 9;
    }
    else if( returnYearDay > 273 && returnYearDay <= 304)
    {
        returnMonth  = 10;
    }
    else if( returnYearDay > 304 && returnYearDay <= 334)
    {
        returnMonth  =11;
    }
    else if( returnYearDay > 334 && returnYearDay <= 365)
    {
        returnMonth  = 12;
    }

    return(returnMonth);

}

int calculateReturnDay(int returnMonth, int returnYearDay)
{
    int returnDay;
    if(returnMonth  == 1) //calculating return day using month day//
    {
        returnDay = returnYearDay;
    }
    else if(returnMonth  == 2)
    {
        returnDay = returnYearDay - 31;
    }
    else if(returnMonth  == 3)
    {
        returnDay = returnYearDay - 59;
    }
    else if(returnMonth  == 4)
    {
        returnDay = returnYearDay - 90;
    }
    else if(returnMonth  == 5)
    {
        returnDay = returnYearDay - 120;
    }
    else if(returnMonth  == 6)
    {
        returnDay = returnYearDay - 151;
    }
    else if(returnMonth  == 7)
    {
        returnDay = returnYearDay - 181;
    }
    else if(returnMonth  == 8)
    {
        returnDay = returnYearDay - 212;
    }
    else if(returnMonth  == 9)
    {
        returnDay = returnYearDay - 243;
    }
    else if(returnMonth  == 10)
    {
        returnDay = returnYearDay - 273;
    }
    else if(returnMonth  == 11)
    {
        returnDay = returnYearDay - 304;
    }
    else if(returnMonth  == 12)
    {
        returnDay = returnYearDay - 334;
    }

    return(returnDay);

    }





int LEAPcalculateYearDay(int month, int day)
{
    int yearDay;

   if(month == 1)
   {
     yearDay = day + 0;
   }
   else if(month ==2)
   {
       yearDay = day + 31 ;
   }
   else if(month ==3)
   {
       yearDay = day + 60 ;
   }
   else if(month ==4)
   {
       yearDay = day + 91;
   }
   else if(month ==5)
   {
       yearDay = day + 121 ;
   }
   else if(month ==6)
   {
       yearDay = day + 152 ;
   }
   else if(month ==7)
   {
       yearDay = day + 182 ;
   }
   else if(month ==8)
   {
       yearDay = day + 213 ;
   }
   else if(month ==9)
   {
       yearDay = day + 244 ;
   }
   else if(month ==10)
   {
       yearDay = day + 274 ;
   }
   else if(month ==11)
   {
       yearDay = day + 305 ;
   }
   else if(month ==12)
   {
       yearDay = day + 335 ;
   }

   return(yearDay);

}

int LEAPcalculateReturnMonth(int returnYearDay)
{
    int returnMonth ;
   if( returnYearDay > 0 && returnYearDay <= 31)  //calculating month using year day//
    {
        returnMonth = 1;
    }
    else if( returnYearDay > 31 && returnYearDay <=60 )
    {
        returnMonth  = 2;
    }
    else if( returnYearDay > 59 && returnYearDay <= 91)
    {
        returnMonth  = 3;
    }
    else if( returnYearDay >91 && returnYearDay  <= 121)
    {
        returnMonth  = 4;
    }
    else if (returnYearDay> 121 && returnYearDay <=152)
    {
        returnMonth  = 5;
    }
    else if( returnYearDay > 152 && returnYearDay <= 182)
    {
        returnMonth  = 6;
    }
    else if( returnYearDay > 182 && returnYearDay <= 213)
    {
        returnMonth  = 7;
    }
    else if( returnYearDay > 213 && returnYearDay <= 244)
    {
        returnMonth  = 8;
    }
    else if( returnYearDay > 244 && returnYearDay <= 274)
    {
        returnMonth  = 9;
    }
    else if( returnYearDay > 274 && returnYearDay <= 305)
    {
        returnMonth  = 10;
    }
    else if( returnYearDay > 305 && returnYearDay <= 335)
    {
        returnMonth  =11;
    }
    else if( returnYearDay > 335 && returnYearDay <= 366)
    {
        returnMonth  = 12;
    }

    return(returnMonth);

}

int LEAPcalculateReturnDay(int returnMonth, int returnYearDay)
{
    int returnDay;
    if(returnMonth  == 1) //calculating return day using month day//
    {
        returnDay = returnYearDay;
    }
    else if(returnMonth  == 2)
    {
        returnDay = returnYearDay - 31;
    }
    else if(returnMonth  == 3)
    {
        returnDay = returnYearDay - 60;
    }
    else if(returnMonth  == 4)
    {
        returnDay = returnYearDay - 91;
    }
    else if(returnMonth  == 5)
    {
        returnDay = returnYearDay - 121;
    }
    else if(returnMonth  == 6)
    {
        returnDay = returnYearDay - 152;
    }
    else if(returnMonth  == 7)
    {
        returnDay = returnYearDay - 182;
    }
    else if(returnMonth  == 8)
    {
        returnDay = returnYearDay - 212;
    }
    else if(returnMonth  == 9)
    {
        returnDay = returnYearDay - 244;
    }
    else if(returnMonth  == 10)
    {
        returnDay = returnYearDay - 274;
    }
    else if(returnMonth  == 11)
    {
        returnDay = returnYearDay - 305;
    }
    else if(returnMonth  == 12)
    {
        returnDay = returnYearDay - 335;
    }

    return(returnDay);

    }




main()
{
    int month,day,year,numDays,returnMonth,returnYearDay,returnDay,yearDay;

    printf("enter day :");
    scanf("%d",&day);
    printf("enter month :");
    scanf("%d",&month);
    printf("enter year :");
    scanf("%d",&year);
    printf("enter number of days : ");
    scanf("%d",&numDays);



    if(year%4 == 0)
    {

        returnYearDay = calculateYearDay(month,day) + numDays;

        if( returnYearDay <= 366)
        {
            returnMonth = LEAPcalculateReturnMonth(returnYearDay);
            returnDay = LEAPcalculateReturnDay(returnMonth,returnYearDay);
        }

        else if( returnYearDay > 366)
        {
            returnYearDay = returnYearDay - 366;
            year = year + 1;

            if ((year%4) == 0)
            {
                 printf("LEAP");
                 returnMonth = LEAPcalculateReturnMonth(returnYearDay);
                 returnDay =  LEAPcalculateReturnDay(returnMonth,returnYearDay);
            }

            else if((year%4) == 1||2||3)
            {
                printf("notLEAP");
                 returnMonth = calculateReturnMonth(returnYearDay);
                 returnDay = calculateReturnDay(returnMonth,returnYearDay);
            }


        }}


    else if(year%4 == 1||2||3)
    {
        returnYearDay = calculateYearDay(month,day) + numDays;

        if( returnYearDay <= 365)
        {
            returnMonth = calculateReturnMonth(returnYearDay);
            returnDay = calculateReturnDay(returnMonth,returnYearDay);
        }

        else if( returnYearDay > 365)
        {
            returnYearDay = returnYearDay - 365;
            year = year + 1;

            if ((year%4) == 0)
            {

                 returnMonth = LEAPcalculateReturnMonth(returnYearDay);
                 returnDay =  LEAPcalculateReturnDay(returnMonth,returnYearDay);
            }

            else if((year%4) == 1||2||3)
            {

                 returnMonth = calculateReturnMonth(returnYearDay);
                 returnDay = calculateReturnDay(returnMonth,returnYearDay);
            }


        }}

        printf("date is %d/%d/%d\n\n", returnDay,returnMonth,year);

        system("Pause");
        return 0;






}
























