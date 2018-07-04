#include <stdint.h>
#include <stdio.h>
#include <RTL.h>
#include <LPC17xx.h>
#include "uart.h"
#include "MPU9250.h"
#include "IOControls.h"


//Declare semaphore1
OS_SEM lock1, lock2, lock3 ;

float XZAngle = 0;

/*Read the accelerometer, gyroscope and magnetometer data and 
store nine values in memory*/

__task void taskPotentiometer(void){
	float value;
	while(1){
		os_sem_wait(&lock1, 0xffff);
		value	= checkPotentiometer();
		printf("%d\n", value);
		os_sem_send(&lock2);
		os_tsk_pass();
	}
	
}


__task void taskJoyStick(void){
	float value;
		while(1){
		os_sem_wait(&lock2, 0xffff);

		value	= checkJoyStick(XZAngle);
		os_sem_send(&lock3);
		os_tsk_pass();

	}
}


__task void taskButton(void){
	int value;
	while(1){
		os_sem_wait(&lock3, 0xffff);

		value = ButtonCurrentlyPressed();
		
		os_sem_send(&lock1);		
		os_tsk_pass();
	}

}

__task void Start_task(void){
	//Initialize semaphores and set the first one to one
	os_sem_init(&lock1,1);
	os_sem_init(&lock2,0);
	os_sem_init(&lock3,0);

	// create all the other tasks
	initIOControls();
	os_tsk_create(taskPotentiometer, 1);
	os_tsk_create(taskJoyStick, 1);
	os_tsk_create(taskButton, 1);
	
	// delete this task when done
	os_tsk_delete_self();
}

int main(void){
	printf("\n");
	
	//Create and initialize Start Task
	os_sys_init(Start_task);
	
	return 0;
	

}
