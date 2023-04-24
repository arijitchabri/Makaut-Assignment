
#include<stdio.h>
#include<string.h>
int main()
{
    int et[20],at[10],n,i,j,temp,st[10],ft[10],wt[10],ta[10];
    int totwt=0,totta=0;
    float awt,ata;
    char pn[10][10],t[10];
    //clrscr();
    printf("Enter the number of process:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter process name, arrival time& execution time:");
        //flushall();
        scanf("%s%d%d",pn[i],&at[i],&et[i]);
    }
    //Sorting of all processes as per burst time ascending order
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            if(et[i]<et[j])
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;
                temp=et[i];
                et[i]=et[j];
                et[j]=temp;
                strcpy(t,pn[i]);
                strcpy(pn[i],pn[j]);
                strcpy(pn[j],t);
            }
        }
    for(i=0; i<n; i++)
    {
        if(i==0) //For the first time
            st[i]=at[i]; //Start time equals to arrival time
        else
            st[i]=ft[i-1]; //This process start time is prev process finish time
            
        wt[i]=st[i]-at[i]; //Start time to arrival time diff
        ft[i]=st[i]+et[i]; //Finish 
        ta[i]=ft[i]-at[i]; //Duration including waiting
        totwt+=wt[i];
        totta+=ta[i];
    }
    awt=(float)totwt/n;
    ata=(float)totta/n;
    printf("\nPname\tArrival Time\tExecution Time\tWaiting Time\tTA Time\tCompletion Time");
    for(i=0; i<n; i++){
        printf("\n%s\t%5d\t\t%5d\t\t%5d\t\t%5d\t%14d",pn[i],at[i],et[i],wt[i],ta[i],ft[i]);
       }
    printf("\nAverage waiting time is:%f",awt);
    printf("\nAverage turnaroundtime is:%f",ata);
    printf("\n");
    return 0;
}

