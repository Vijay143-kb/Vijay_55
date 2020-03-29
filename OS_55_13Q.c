#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sched.h>
#include <semaphore.h>
#define MAX 5
#define NORTH 0
#define EAST 1
#define WEST 2
#define SOUTH 3
  
struct car
{int indir;
 int outdir;
 int no;
};  
sem_t mutex,carLock;
int conflictcount = 0;
char* getdirection(int i)
{char c[5];
 switch(i)
 {case 0:return "NORTH";
  case 1:return "EAST";
  case 2:return "WEST";
  case 3:return "SOUTH";
 }
}
