#include <stdio.h>

int main() {
    int dayNumber;

    do {
        // اطلب من المستخدم إدخال رقم اليوم
        printf("Enter a number (1-7) to display the corresponding day of the week: ");
        scanf("%d", &dayNumber);

        // قم بفحص إذا كان الرقم بين 1 و 7
        if (dayNumber >= 1 && dayNumber <= 7) {
            // عرض يوم الأسبوع المقابل للرقم
            switch (dayNumber) {
                case 1:
                    printf("Day of the week: Saturday\n");
                    break;
                case 2:
                    printf("Day of the week: Sunday\n");
                    break;
                case 3:
                    printf("Day of the week: Monday\n");
                    break;
                case 4:
                    printf("Day of the week: Tuesday\n");
                    break;
                case 5:
                    printf("Day of the week: Wednesday\n");
                    break;
                case 6:
                    printf("Day of the week: Thursday\n");
                    break;
                case 7:
                    printf("Day of the week: Friday\n");
                    break;
            }
        } else {
            // إعادة طلب إذا كان الرقم خارج النطاق المطلوب
            printf("Invalid input. Please enter a number between 1 and 7.\n");
        }

    } while (dayNumber < 1 || dayNumber > 7); // كرر المدخلات حتى يتم إدخال رقم صحيح

    return 0;
}
