#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - creates an infinite loop to maintain the program running
 * Return: 0 always
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);	/* Introduces a delay to reduce CPU usage */
	}
	return (0);	/* Program ends (unreachable in this context) */
}

/**
 * main - creates 5 zombie processes
 * Return: 0 always
 */
int main(void)
{
	int i;
	pid_t zombie_pid;	/* Stores the process ID of the created zombie */

	for (i = 0; i < 5; i++)
	{
		zombie_pid = fork();	/* Create a child process */
		if (!zombie_pid)	/* If it's a child process */
			return (0);	/* Child process exits */
		printf("Zombie process created, PID: %d\n", zombie_pid);
	}

	infinite_while();	/* Calls an infinite loop function */
	return (0);	/* Program ends (unreachable in this context) */
}
