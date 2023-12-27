//
// Created by Alex on 02.12.2023.
//


# include <iostream>
using namespace std;

int main() {
    //this program calculate the event duration in seconds, knowing obviously
    // beginning and ending times of the event.

    int day_start, day_end, hr_start, hr_end, min_start, min_end, sec_start, sec_end, days=0, hrs=0, min=0, sec=0;

    scanf("Dia %d",&day_start);
    scanf("%d : %d : %d\n",&hr_start,&min_start,&sec_start);
    scanf("Dia %d",&day_end);
    scanf("%d : %d : %d",&hr_end,&min_end,&sec_end);

    //day_start=5; day_end=9; hr_start=8; hr_end=06; min_start=12, min_end=13, sec_start=23, sec_end=23;


    sec = sec_end - sec_start;
    min = min_end - min_start;
    hrs = hr_end - hr_start;

    if (sec < 0){
        sec +=60;
        min -=1;
    }

    if (min < 0) {
        min += 60;
        hrs -= 1;
    }
    if (hrs < 0) {
        hrs += 24 ;
        days -= 1;
    }


    days = (day_end - day_start > 0 ) ? day_end - day_start + days: 0;

    printf("%d dia(s)\n"
           "%d hora(s)\n"
           "%d minuto(s)\n"
           "%d segundo(s)\n", days, hrs, min, sec);

    return 0;
}
