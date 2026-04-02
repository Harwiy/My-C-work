#include<stdio.h>
int dayTbl[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
					{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

struct date {
	int day;
	int month;
	int year;
	int yearDay;
	char *monthName;	
}date;

struct
{int mon;
char *name;
}month[] = {{1,"January"}, {2,"February"}, {3,"March"}, {4,"April"},{5,"May"}, {6,"June"}, {7,"July"}, {8,"August"},
            {9,"September"}, {10,"October"}, {11,"November"}, {12,"December"}, {-1,""}};
            
 char *monthName(int mon)
 {
	int m;
	for(m=0;month[m].mon>0;m++)
	 if(month[m].mon==mon) return month[m].name;
	 return NULL;
	}
int dayofyear(int d,int m,int y)
{
	int i,leap,day=d;
	leap=(y%4==0&&y%100)||(y%400==0);
	for(i=0;i<m-1;i++) day+=dayTbl[leap][i];
	return day;
		   }     
		   
int main()
{
	int leap,days;
	char ans;
	printf("\n\tDate Conversion Program\n");
	for(;;)
	{
	printf("Month=");scanf("%d",&date.month);
	if(date.month>=1&&date.month<=12) break;
	printf("\t Month must be between 1 to 12.\n");
	}
	date.monthName=monthName(date.month);
	printf("The name of the %d(th)month is %s.\n",date.month,date.monthName);
    leap=(date.year%4==0&&date.year%100)||date.year%400==0;
    days=dayTbl[leap][date.month-1];
    for(;;)
    {
    	printf("Day =");scanf("%d",&date.day);
    	if(date.day>=1&&date.day<=days) break;
    	printf("\tDay must be between 1 to %d.\n",days);
	}
	date.yearDay=dayofyear(date.day,date.month,date.year);
	printf("\tThe days of the year are %d.\n",date.yearDay);
	

	 return 0;   
}   
