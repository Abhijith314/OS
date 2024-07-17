#include <stdio.h> 
 
// Process struct to store process details 
struct Process { 
    int pid;       // Process ID 
    int burst;     // Burst time 
    int arrival;   // Arrival time 
    int start;     // Start time 
    int completion; // Completion time 
    int turnaround; // Turnaround time 
    int waiting;   // Waiting time 
}; 
 
int main() { 
    int n; 
    printf("Enter the number of processes: "); 
    scanf("%d", &n); 
 
    struct Process p[n]; 
 
    // Get process details 
    for (int i = 0; i < n; i++) { 
        p[i].pid = i+1; 
        printf("Enter burst time and arrival time for process %d: ", p[i].pid); 
        scanf("%d %d", &p[i].burst, &p[i].arrival); 
    } 
 
    // Sort processes based on arrival time 
    for (int i = 0; i < n-1; i++) { 
        for (int j = 0; j < n-i-1; j++) { 
            if (p[j].arrival > p[j+1].arrival) { 
                struct Process temp = p[j]; 
                p[j] = p[j+1]; 
                p[j+1] = temp; 
            } 
        } 
    } 
 
    int current_time = 0; 
    for (int i = 0; i < n; i++) { 
        // Find the process with the shortest burst time among the available processes 
        int min_idx = -1, min_burst = 9999; 
        for (int j = 0; j < n; j++) { 
            if (p[j].arrival <= current_time && p[j].burst < min_burst) { 
                min_idx = j; 
                min_burst = p[j].burst; 
            } 
        } 
 
        if (min_idx != -1) { 
            p[min_idx].start = current_time; 
            current_time += p[min_idx].burst; 
            p[min_idx].completion = current_time; 
            p[min_idx].turnaround = p[min_idx].completion - p[min_idx].arrival; 
            p[min_idx].waiting = p[min_idx].turnaround - p[min_idx].burst; 
        } else { 
            current_time = p[i].arrival; 
            i--; 
        } 
    } 
 
    // Print the results 
    printf("\nProcess\tBurst\tArrival\tStart\tCompletion\tTurnaround\tWaiting\n"); 
    for (int i = 0; i < n; i++) { 
        printf("%d\t%d\t%d\t%d\t%d\t\t%d\t\t%d\n", 
               p[i].pid, p[i].burst, p[i].arrival, p[i].start, 
               p[i].completion, p[i].turnaround, p[i].waiting); 
    } 
 
    return 0; 
} 
