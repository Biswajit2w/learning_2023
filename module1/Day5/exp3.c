#include <stdio.h>

struct Time {
    int hours,minutes,seconds;
   
};

struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;

    int startTimeSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

    int diffSeconds = endTimeSeconds - startTimeSeconds;

    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, diffTime;

    printf("Enter the start time : ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time : ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    diffTime = calculateTimeDifference(startTime, endTime);

    printf("Time difference: %d hours %d minutes %d seconds\n", diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}

