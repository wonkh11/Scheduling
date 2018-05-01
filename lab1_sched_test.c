/*
*	DKU Operating System Lab
*	    Lab1 (Scheduler Algorithm Simulator)
*	    Student id : 
*	    Student name : 
*
*   lab1_sched.c :
*       - Lab1 source file.
*       - Must contains scueduler algorithm test code.
*
*/

#include <aio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <assert.h>
#include <pthread.h>
#include <asm/unistd.h>

#include "lab1_sched_types.h"

/*
 * you need to implement scheduler simlator test code.
 *
 */

arrivalTime[NUM_OF_PROC] = {0, 2, 4, 6, 8};
serviceTime[NUM_OF_PROC] = {3, 6, 4, 5, 2};
tickets[NUM_OF_PROC] = {3, 5, 4, 6, 2};

int main(int argc, char *argv[]){
	int menu = 0;
	printf("select simulation scheduling that you want to see.\n");
	printf("1. FCFS  2. SJF  3. RR  4. MLFQ  5. Lottery\n");
	scanf("%d", &menu);

	switch(menu){
		case 1: FCFS();
			break;
		case 2: SJF();
			break;
		case 3: RR();
			break;/*
		case 4: MLFQ();
			break;
		case 5: Lotttery();
			break;*/
		default : printf("Plz put in value 1~5 :(");
	}
	return 0;
}
