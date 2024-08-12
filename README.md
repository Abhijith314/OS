<h1>OUTPUTS</h1>
<h2>Disk SCAN with Previous position</h2>
<h3>Forward</h3>
<pre>Enter the current head position : 43
Enter the previous position : 30
Enter the number of request : 5
Enter the request : 60 77 40 20 35
The sequence is : 43 -> 60 -> 77 -> 199 -> 40 -> 35 -> 20
Total head movement = 335
</pre>
<h3>Backward</h3>
<pre>Enter the current head position : 43
Enter the previous position : 50
Enter the number of request : 5
Enter the request : 60 77 40 20 35
The sequence is : 43 -> 40 -> 35 -> 20 -> 0 -> 60 -> 77
Total head movement = 120</pre>

<h2>Bankers Algorithm</h2>
<h3>Safe sequence</h3>
<pre>Enter the number of processes : 5 
Enter the number of resources : 3
Enter the allocation matrix for each process :
P0 : 0 1 0
P1 : 2 0 0
P2 : 3 0 2
P3 : 2 1 1
P4 : 0 0 2
Enter the maximum matrix for each process :
P0 : 7 5 3
P1 : 3 2 2
P2 : 9 0 2 
P3 : 2 2 2
P4 : 4 3 3
Enter the available resources : 3 3 2

Following is system is safe and the SAFE Sequence is :
P1 -&gt; P3 -&gt; P4 -&gt; P0 -&gt;  P2
</pre>
<h3>Unsafe</h3>
<pre>Enter the number of processes : 5
Enter the number of resources : 3
Enter the allocation matrix for each process :
P0 : 0 1 0
P1 : 2 0 0
P2 : 3 0 2
P3 : 2 1 1
P4 : 0 0 2
Enter the maximum matrix for each process :
P0 : 7 5 3
P1 : 3 4 2
P2 : 9 0 2
P3 : 2 5 3
P4 : 4 3 3
Enter the available resources : 3 3 2

The following system is not safe
</pre> <br>
<h2>Semaphore </h2>
<pre>1 : Producer
2 : Consumer
3 : Exit
Enter the choice : 1
Producer produces the item : 1
Enter the choice : 1
Producer produces the item : 2
Enter the choice : 1
Buffer is full
Enter the choice : 2
Consumer consumes the item : 2
Enter the choice : 2
Consumer consumes the item : 1
Enter the choice : 2
Buffer is empty
Enter the choice : 3</pre>
<br>
<h2>First fit</h2>
<pre>Enter the no. of memory block and processes : 3 4
Enter the block size :- 
1 : 	200
2 : 	150
3 : 	80
Enter the process size :- 
1 : 	140
2 : 	50
3 : 	70
4 : 	130

Process No.	Process Size	Block no.
1		140		1
2		50		1
3		70		2
4		130		Not Allocated
</pre>
<br>
<h2>Best_Fit</h2>
<pre>Enter the number of memory blocks and processes: 3 4
Enter the block sizes:
1 : 200
2 : 150
3 : 80
Enter the process sizes:
1 : 140
2 : 50
3 : 70
4 : 130

Process No.	Process Size	Block no.
1		140		2
2		50		3
3		70		1
4		130		1
</pre><br>
<h2>Worst_Fit</h2>
<pre>Enter the number of memory blocks and processes: 3 4
Enter the block sizes:
1 : 200
2 : 150
3 : 80
Enter the process sizes:
1 : 140
2 : 50
3 : 70
4 : 130

Process No.	Process Size	Block no.
1		140		1
2		50		2
3		70		2
4		130		Not Allocated
</pre><br>
<h2>FIFO Paging</h2>
<pre>Enter the number of reference string : 7
Enter the no. of frames : 3
Enter the reference string : 1 3 0 3 5 6 3
1 : 1  -  -  
3 : 1  3  -  
0 : 1  3  0  
3 : -  -  -  
5 : 5  3  0  
6 : 5  6  0  
3 : 5  6  3  

Page fault = 6
</pre>
