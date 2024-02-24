/* Alex is managing a software project and wants to ensure that his team meets the project deadlines. He has set up certain conditions that need to be met for the project to progress smoothly.
If Alex's project requires both the frontend and backend modules to be completed before integration can begin, and the frontend is complete but the backend is not, will the integration phase start?*/

#include<stdio.h>
#include<stdbool.h>
int main() {
    bool frontend, backend, integration = false;
    int frontendInput, backendInput;
    printf("Provide answer in 0 OR 1\n");
    printf("Dear Alex, Have you completed your Frontend and Backend modules?");
    scanf("%d%d", &frontendInput, &backendInput);

    frontend = frontendInput == 1 ? true : false;
    backend = backendInput == 1 ? true : false;

    if (frontend == true && backend == true) {
        integration = true;
    } else {
        integration = false;
    }
    printf(integration == true ? "Integration started...\n" : "Failure of Integration.\n");
    return 0;
}