#include <stdio.h>

// تعريف الهيكل (Struct) لتخزين بيانات الاتصال
struct Contact {
    char first_name[50];
    char last_name[50];
    char email[100];
    char phone_number[15];
};

// وظيفة للحصول على معلومات جهة الاتصال
void getContactInfo(struct Contact contacts[10]) {
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
}

int main() {
    // تعريف مصفوفة من نوع الهيكل لتخزين 10 مخاطبين
    struct Contact contacts[10];

    // استدعاء الوظيفة للحصول على المعلومات
    getContactInfo(contacts);

    // طباعة معلومات جهات الاتصال بتنسيق أفضل
    printf("\nContacts Information:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Contact %d:\n", i + 1);
        printf("   Name: %s %s\n", contacts[i].first_name, contacts[i].last_name);
        printf("   Email: %s\n", contacts[i].email);
        printf("   Phone: %s\n", contacts[i].phone_number);
        printf("\n");
    }

    return 0;
}
