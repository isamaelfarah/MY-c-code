#include <stdio.h>
#include <string.h>

// تعريف الهيكل (Struct) لتخزين بيانات الاتصال
struct Contact {
    char first_name[50];
    char last_name[50];
    char email[100];
    char phone_number[15];
};

// وظيفة للبحث عن مخاطب باسمه
int searchContact(const char search_name[], const struct Contact contacts[10]) {
    for (int i = 0; i < 10; ++i) {
        // استخدام strcmp للمقارنة بين الأسماء
        if (strcmp(search_name, contacts[i].first_name) == 0) {
            return i; // إرجاع مؤشر إلى المخاطب إذا تم العثور عليه
        }
    }

    return -1; // -1 يعني أن المخاطب غير موجود
}

int main() {
    // تعريف مصفوفة من نوع الهيكل لتخزين 10 مخاطبين
    struct Contact contacts[10];

    // تعبئة المعلومات للمخاطبين (يمكنك استبدالها بإدخال المستخدم)
    for (int i = 0; i < 10; ++i) {
        printf("Enter information for contact %d:\n", i + 1);
        printf("First Name: ");
        scanf("%s", contacts[i].first_name);
        printf("Last Name: ");
        scanf("%s", contacts[i].last_name);
        printf("Email: ");
        scanf("%s", contacts[i].email);
        printf("Phone Number: ");
        scanf("%s", contacts[i].phone_number);
        printf("\n");
    }

    // البحث عن مخاطب باستخدام الاسم
    char search_name[50];
    printf("Enter the first name to search for: ");
    scanf("%s", search_name);

    // استدعاء الوظيفة للبحث عن المخاطب
    int found_index = searchContact(search_name, contacts);

    if (found_index != -1) {
        printf("\nContact Information:\n");
        printf("   Name: %s %s\n", contacts[found_index].first_name, contacts[found_index].last_name);
        printf("   Email: %s\n", contacts[found_index].email);
        printf("   Phone: %s\n", contacts[found_index].phone_number);
    } else {
        printf("\nContact not found for the name: %s\n", search_name);
    }

    return 0;
}
