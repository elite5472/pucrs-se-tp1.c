#include <prototypes.h>

void task(void){
	int32_t tid;

	tid = HF_CurrentTaskId();
	for (;;){
		printf("T%d-", tid);
	}
}

void ApplicationMain(void){
    HF_AddPeriodicTask(task, 5, 1, 5, "t1", 2048, 0, 0);
    HF_AddPeriodicTask(task, 10, 2, 10, "t2", 2048, 0, 0);
    HF_AddPeriodicTask(task, 15, 3, 15, "t3", 2048, 0, 0);
    HF_AddPeriodicTask(task, 20, 4, 20, "t4", 2048, 0, 0);
    HF_AddPeriodicTask(task, 25, 5, 25, "t5", 2048, 0, 0);

	HF_Start();
}