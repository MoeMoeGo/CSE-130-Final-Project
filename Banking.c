#include <stdio.h>
#include <string.h>
#include <time.h>


struct Person
{
    char name[50];
    int term;
    int presidency;
} person1;

int main()
{
    time_t start = time(NULL);

    strcpy(person1.name, "Barack Obama");
    person1.term = 2;
    person1.presidency = 44;
    char guess[30];
    char correct[] = "Obama";
    printf("Guess Which President is this?(Enter the Last Name Only)\nThis president was the 44th president and had 2 terms:\n\n");
    scanf("%s", guess);

    if (strcmp(guess, correct) == 0) {
        printf("Correct!!\n\n");
        printf("Name: %s\n", person1.name);
        printf("%d Terms In Office\n", person1.term);
        printf("Served as the %dth President", person1.presidency);
    } else {
        printf("Wrong, try again!\n");
    }
    time_t end = time(NULL);
    printf("The elapsed time is %ld seconds\n", (end - start));



    return 0;
}
