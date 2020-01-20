#include <stdio.h>
#include <stdlib.h>

int no_weekend(float base) {
    float sat_mult;
    float sun_mult;

    float week_hours;
    float sat_hours;
    float sun_hours;
    float pay;

    printf("How many hours did you work during the weekdays?\n");
    scanf("%f", &week_hours);

    pay = week_hours * base;

    printf("Your weeks pay is: %f\n", pay);
    return 0;
}

int yes_weekend(float base) {
    float sat_mult;
    float sun_mult;

    float week_hours;
    float sat_hours;
    float sun_hours;
    float pay;

    printf("How many hours did you work during the weekdays?\n");
    scanf("%f", &week_hours);

    printf("How many hours did you work Saturday?\n");
    scanf("%f", &sat_hours);

    printf("How many hours did you work Sunday?\n");
    scanf("%f", &sun_hours);

    printf("What is your Saturday multiplier? (e.g. 25%% extra would be 1.25)\n");
    scanf("%f", &sat_mult);

    printf("What is your Sunday multiplier? (e.g. 50%% extra would be 1.5)\n");
    scanf("%f", &sun_mult);

    pay = (week_hours + sat_hours * sat_mult + sun_hours * sun_mult) * base;

    printf("Your weeks pay is: %f\n", pay);
    return 0;
}
int main()
{
    float base;
    char weekend_work;



    printf("What is your base hourly pay per hour?\n");
    scanf("%f", &base);

    printf("Did you work on the weekend? (y or n)\n");
    scanf("%s", &weekend_work);

    if (weekend_work == 'y') {
        yes_weekend(base);
    } else if (weekend_work == 'n') {
        no_weekend(base);
    } else {
        printf("You didnt enter y or n\n");
    }

    return 0;
}
