/* Find FCFS
        Legends
        AT = Arrival Time
        BT = Burst Time
        ST = Starting Time
        WT = Waiting Time
        CT = Completion Time
        TAT = Turn Around Time
*/
#include <stdio.h>

struct processControl
{
    int id;
    int AT, BT;
    int ST, WT, CT, TAT;
} pcb[20] = {0};

void main()
{
    int n, i, c;
    printf("Write the number of Process: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the process id: ");
        scanf("%d", &pcb[i].id);
        printf("\n\tArrival Time: ");
        scanf("%d", &pcb[i].AT);
        printf("\n\tBurst Time: ");
        scanf("%d", &pcb[i].BT);
    }

    printf("\nProcess ID\tArrival Time\tBurst Time\tStart Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");

    for (i = 0; i < n; i++)
    {
        if (c < pcb[i].AT)
        {
            c = pcb[i].AT;
        }
        pcb[i].ST = c;

        pcb[i].CT = pcb[i].ST + pcb[i].BT;

        pcb[i].TAT = pcb[i].CT - pcb[i].AT;

        pcb[i].WT = pcb[i].TAT - pcb[i].BT;

        c = pcb[i].CT;

        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               pcb[i].id,
               pcb[i].AT,
               pcb[i].BT,
               pcb[i].ST,
               pcb[i].CT,
               pcb[i].WT,
               pcb[i].TAT);
    }
}