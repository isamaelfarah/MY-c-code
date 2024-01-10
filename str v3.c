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
int searchContact(const char search_name[], struct Contact contacts[10]) {
    for (int i = 0; i < 10; ++i) {
        // استخدام strcmp للمقارنة بين الأسماء
        if (strcmp(search_name, contacts[i].first_name) == 0) {
            return i; // إرجاع مؤشر إلى المخاطب إذا تم العثور عليه
        }
    }

    return -1; // -1 يعني أن المخاطب غير موجود
}

// وظيفة لتحرير معلومات المخاطب
void editContact(struct Contact *contact) {
    printf("Enter new information for the contact:\n");
    printf("First Name: ");
    scanf("%s", contact->first_name);
    printf("Last Name: ");
    scanf("%s", contact->last_name);
    printf("Email: ");
    scanf("%s", contact->email);
    printf("Phone Number: ");
    scanf("%s", contact->phone_number);
    printf("Contact information updated successfully.\n");
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
        // عرض معلومات المخاطب
        printf("\nContact Information:\n");
        printf("   Name: %s %s\n", contacts[found_index].first_name, contacts[found_index].last_name);
        printf("   Email: %s\n", contacts[found_index].email);
        printf("   Phone: %s\n", contacts[found_index].phone_number);

        // اتاحة الفرصة للمستخدم لتحرير المعلومات
        char response;
        printf("Do you want to edit contact information? (y/n): ");
        scanf(" %c", &response); // إضافة فراغ هنا لتجنب مشكلات التنسيق
        if (response == 'y' || response == 'Y') {
            editContact(&contacts[found_index]);
        }
    } else {
        printf("\nContact not found for the name: %s\n", search_name);
    }

    return 0;
}
