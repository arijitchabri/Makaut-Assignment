// C program to implement First Come First Serve (FCFS) algorithm

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, temp, j;
    float avg_waiting_time, avg_turnaround_time;
    int total_waiting_time = 0, total_turnaround_time = 0;
    printf("Enter the number of process: \n");
    scanf("%d", &n);
    int p[n], at[n], bt[n], tat[n], wt[n], ct[n];
    printf("Enter each process: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Enter the arival time of each process: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &at[i]);
    printf("Enter the burst time of each process: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &bt[i]);

    // Sorting data on the basis of arrival time
    for (i = 0; i < n - 1; i++)
    {
        temp = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (at[j] > at[j + 1])
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
                temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;
            }
        }
    }

    // Calculating completion time
    ct[0] = at[0] + bt[0];
    for (i = 1; i < n; i++)
    {
        if (ct[i - 1] < at[i])
        {
            ct[i] = at[i] + bt[i];
        }
        else
        {
            ct[i] = ct[i - 1] + bt[i];
        }
    }

    // Calculating waiting time and turnaround time for each process
    for (i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        total_waiting_time += wt[i];
        total_turnaround_time += tat[i];
    }

    // Calculate avg waiting time and turn around time
    avg_waiting_time = (float)total_waiting_time / n;
    avg_turnaround_time = (float)total_turnaround_time / n;

    printf("\nFCFS Scheduling:\n");
    printf("Process\tAT\tBT\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);

    return 0;
}
