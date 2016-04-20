#include <prototypes.h>

void task(void){
	int32_t tid;

	tid = HF_CurrentTaskId();
	for (;;){
		printf("T%d-", tid);
	}
}

void ApplicationMain(void){
    HF_AddPeriodicTask(task, 10, 3, 10, "t1", 2048, 0, 0);
    HF_AddPeriodicTask(task, 15, 3, 15, "t2", 2048, 0, 0);
    HF_AddPeriodicTask(task, 20, 2, 20, "t3", 2048, 0, 0);
    HF_AddPeriodicTask(task, 25, 2, 25, "t4", 2048, 0, 0);
    HF_AddPeriodicTask(task, 30, 1, 30, "t5", 2048, 0, 0);

	HF_Start();
}