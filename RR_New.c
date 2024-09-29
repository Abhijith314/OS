#include<stdio.h>
struct process {
int pno,bt,rbt,tat,wt,at;
};
void main()
{
int n=4,i,tq=3,j,comp[n];
float ttat,twt,atwt,atat;
printf("Enter the number of process : %d",n);
//scanf("%d",&n);
struct process p[n],temp;
p[0].pno=1;
p[0].at=2;
p[0].bt=2;
p[1].pno=2;
p[1].at=5;
p[1].bt=6;
p[2].pno=3;
p[2].at=0;
p[2].bt=4;
p[3].pno=4;
p[3].at=4;
p[3].bt=7;
printf("Enter the Process no., Arrival time and Burst time of :-\n");
for(i=0;i<n;i++) {
printf("Process : %d %d %d\n",p[i].pno,p[i].at,p[i].bt);
//scanf("%d %d %d",&p[i].pno,&p[i].at,&p[i].bt);
p[i].rbt=p[i].bt;
}
printf("\nEnter the time quantum : %d\n",tq);
//scanf("%d",&tq);
for(i=0;i<n-1;i++) {
	for(j=i+1;j<n;j++) {
		if(p[i].at>p[j].at) {
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
		}
	}
}
for (i=0; i<n; i++)
comp[i]=-1;

//printf("GANTT CHART\n0");
int time=0,completedp=0,t,readyq[20],nxt,pro,k=0,flag=0;
i=0,j=0;
do {
	if(p[i].rbt>0 || p[i].at<=time) {
		if(p[i].rbt>tq) {
			//queue[j]=i;
			readyq[j]=p[i].pno;
			printf("j%d   qP%d\n",j,readyq[j]);
			j++;
			time=time+tq;
			p[i].rbt-=tq;
			//printf("  P%d  %d\n",p[i].pno,time);
			pro=i;
			for (t=j; t<=time; t++) {
				for(k=0; k<n; k++) {
					if(comp[k]==i){
						flag=1;
					}

				}
				if (p[(pro+1)%n].at<=time && flag!=1) {
					//queue[j]=(i+1)%n;
					readyq[j]=p[(pro+1)%n].pno;
					printf("j%d  iqP%d  i%d  pr%d  t%d\n",j,readyq[j],i,(pro+1)%n,t);
					j++;
					pro++;
				}
			}
				
					//queue[j]=i;
					readyq[j]=p[i].pno;
					printf("j%d  eqP%d  i%d  pr%d  t%d\n",j,readyq[j],i,(pro+1)%n,t);
					j++;
					pro++;
				
			
		}
		else {
			time=time+p[i].rbt;
			p[i].tat=time;
			p[i].wt=p[i].tat-p[i].bt;
			p[i].rbt=0;
			comp[completedp]=i;
			completedp++;
			printf(" comp%d  %d\n",completedp,p[i].pno);
			//printf("  P%d  %d",p[i].pno,time);
			if(completedp==n) {
				break;
			}
		}
		if(i==n-1) {
		i=0;
		}
		else {
			i++;
		}
	}
	else {
	time=p[i].at;
    printf("  IDEAL  %d",time);
	}
	
	scanf("%d",&nxt);
}while(nxt==1);
printf("\nProcess no.\tBurst time\tTurnaround time\tWaiting time\n");
for(i=0;i<n;i++) {
printf("P%d\t\t%d\t\t%d\t\t%d\n",p[i].pno,p[i].rbt,p[i].tat,p[i].wt);
}
ttat=p[n-1].tat;
twt=p[n-1].wt;
atat=ttat/n;
atwt=twt/n;
printf("Average Turnaround time = %f\n",atat);
printf("Average Waiting time = %f\n",atwt);
}
