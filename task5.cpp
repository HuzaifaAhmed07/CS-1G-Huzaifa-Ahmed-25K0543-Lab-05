#include <stdio.h>

int main() {
    int hasPrerequisite, isCourseFull;

    
    printf("Do you have the prerequisite? (1 = Yes, 0 = No): ");
    scanf("%d", &hasPrerequisite);

    printf("Is the course full? (1 = Yes, 0 = No): ");
    scanf("%d", &isCourseFull);

    if (hasPrerequisite == 1) {
        // Student has prerequisite 
        if (isCourseFull == 0) {
            printf("Enrolled successfully\n");
        } else {
            printf("Cannot enroll: course is full\n");
        }
    } else {
        // Student does not have prerequisite
        if (isCourseFull == 1) {
            printf("Cannot enroll: prerequisite missing and course is full\n");
        } else {
            printf("Cannot enroll: prerequisite missing\n");
        }
    }

    return 0;
}

