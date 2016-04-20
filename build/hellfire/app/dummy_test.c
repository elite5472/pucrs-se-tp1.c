#include <prototypes.h>

void task(void){
	int32_t tid;

	tid = HF_CurrentTaskId();
	printf("T%d", tid);
	int32_t x;
	for (;;){
		x++;
	}
}

void ApplicationMain(void){
	HF_AddPeriodicTask(task, 4, 1, 4, "t1", 2048, 0, 0);
	HF_AddPeriodicTask(task, 5, 2, 5, "t2", 2048, 0, 0);
	HF_AddPeriodicTask(task, 7, 1, 3, "t3", 2048, 0, 0);

	HF_Start();
}

