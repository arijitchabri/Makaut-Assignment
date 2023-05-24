#include <stdio.h>
#include <stdbool.h>

int resourceAvailable[3] = {3, 6, 4};           // Initialize the available resources.
int executionPattern[3] = {-1, -1, -1};         // This is for how the resources are being executed.

bool checkResource(int processResourceNeed[], int processResourceOccupied[]) {
    int i;
    for(i = 0; i < 3; i++) {
        // If all the resources are not available then return false.
        if(resourceAvailable[i] < processResourceNeed[i]) {
            return false;
        }
    }
    for(i = 0; i < 3; i++) {
        // If all the resources are available then adding up the resources and storing the pattern of execution.
        resourceAvailable[i] += processResourceOccupied[i];
        executionPattern[i] = i+1;
    }
    return true;
}

bool checkIfSafeorNot(int processResourceNeed[3][3], int processResourceOccupied[3][3]) {
    int processExecuted[3] = {0, 0, 0};
    int i, j, k = 0;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            // Looping 2 times so that if a process successfully executed then
            //previous process can try to execute based on resource availability.

            if(processExecuted[j] == 1) {
                continue;   // If already been executed then pass.
            }
            if(checkResource(processResourceNeed[j], processResourceOccupied[j])) {
                processExecuted[j] = 1; // If successfully executed then marked as process executed.
            }
        }
    }
    // Only if all the processes successfully executed then only it will return true.
    for(i = 0; i < 3; i++) {
        if(processExecuted[i] == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Initializing the occupied space of the processes.
    int processResourceOccupied[3][3] = {
        {1, 0, 3},
        {2, 0, 0},
        {1, 1, 3}
    };
    // Initializing resource need to finish execution.
    int processResourceNeed[3][3] = {
        {3, 4, 7},
        {5, 3, 7},
        {3, 6, 4}
    };

    if(checkIfSafeorNot(processResourceNeed, processResourceOccupied)) {
        printf("The system is in safe state.\n");
        for(int i = 0; i < 2; i++) {
            printf("P%d ----> ", executionPattern[i]);
        }
        printf("P%d\n", executionPattern[2]);
    }
    else {
        printf("The process is in unsafe state.\n");
    }
    return 0;
}
