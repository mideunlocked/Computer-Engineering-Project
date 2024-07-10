#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
#define NUM_STUDENTS 30

typedef struct {
    char name[MAX_LENGTH];
    char matricNumber[MAX_LENGTH];
} Student;

void populateStudents(Student students[]) {
    strcpy(students[0].name, "Ariyo Nifemi Stephanie");
    strcpy(students[0].matricNumber, "22/67ms/846");

    strcpy(students[1].name, "Idiagbon Saadu Sulyman");
    strcpy(students[1].matricNumber, "22/67ms/850");

    strcpy(students[2].name, "Adeniyi Anuoluwapo Opeyemi");
    strcpy(students[2].matricNumber, "22/67ms/854");

    strcpy(students[3].name, "Amoah Edward Kwesi");
    strcpy(students[3].matricNumber, "22/67ms/855");

    strcpy(students[4].name, "Hassan Khalid");
    strcpy(students[4].matricNumber, "22/67ms/856");

    strcpy(students[5].name, "Osuolale Ariyo Emmanuel");
    strcpy(students[5].matricNumber, "22/67ms/861");

    strcpy(students[6].name, "Login Abdulrazaq Akorede");
    strcpy(students[6].matricNumber, "22/67ms/862");

    strcpy(students[7].name, "Osabusua Oluwatobiloba Babajuwon");
    strcpy(students[7].matricNumber, "22d/67ms/790");

    strcpy(students[8].name, "Unknown Student");
    strcpy(students[8].matricNumber, "22d/67ms/835");

    strcpy(students[9].name, "Unknown Student");
    strcpy(students[9].matricNumber, "22d/67ms/874");

    strcpy(students[10].name, "Ogungbade Khadijat Omobukola");
    strcpy(students[10].matricNumber, "23d/67ms/892");

    strcpy(students[11].name, "Idrees Mubarak Olamilekan");
    strcpy(students[11].matricNumber, "23d/67ms/896");

    strcpy(students[12].name, "Adeyelu Olamide Favour");
    strcpy(students[12].matricNumber, "23d/67ms/897");

    strcpy(students[13].name, "Sodiq Olawale Adisa");
    strcpy(students[13].matricNumber, "23d/67ms/910");

    strcpy(students[14].name, "Adisa Damilare Abdulwaliu");
    strcpy(students[14].matricNumber, "23d/67ms/919");

    strcpy(students[15].name, "Isaac Temitayo Emmanuel");
    strcpy(students[15].matricNumber, "23d/67ms/920");

    strcpy(students[16].name, "Lawal Happiness");
    strcpy(students[16].matricNumber, "23d/67ms/929");

    strcpy(students[17].name, "Folorunsho Desmond Ayomide");
    strcpy(students[17].matricNumber, "23d/67ms/932");

    strcpy(students[18].name, "Oyewale Ayodeji Oladele");
    strcpy(students[18].matricNumber, "23d/67ms/939");

    strcpy(students[19].name, "Hammed Ayomide Toheeb");
    strcpy(students[19].matricNumber, "23d/67ms/946");

    strcpy(students[20].name, "Ibrahim Lateef");
    strcpy(students[20].matricNumber, "23d/67ms/950");

    strcpy(students[21].name, "Abiodun Kehinde Kabirah");
    strcpy(students[21].matricNumber, "23d/67ms/956");

    strcpy(students[22].name, "Abdulrazaq Sheriff Olamilekan");
    strcpy(students[22].matricNumber, "23d/67ms/957");

    strcpy(students[23].name, "Omotosho Abdulsamad Olamilekan");
    strcpy(students[23].matricNumber, "23d/67ms/960");

    strcpy(students[24].name, "Mubarak Sulyman Adewale");
    strcpy(students[24].matricNumber, "23d/67ms/963");

    strcpy(students[25].name, "Ifanegan Olayinka");
    strcpy(students[25].matricNumber, "23d/67ms/969");

    strcpy(students[26].name, "Sebastian Maurice Essien");
    strcpy(students[26].matricNumber, "23d/67ms/970");

    strcpy(students[27].name, "Ayobami Ibrahim");
    strcpy(students[27].matricNumber, "23d/67ms/971");

    strcpy(students[28].name, "Adesoji Felix");
    strcpy(students[28].matricNumber, "23d/67ms/972");

    strcpy(students[29].name, "Tijani Taofeeq Babatunde");
    strcpy(students[29].matricNumber, "23d/67ms/974");

    strcpy(students[30].name, "Azeez AbdulQoyum");
    strcpy(students[30].matricNumber, "23d/67ms/983");
}

void displayStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Matric Number: %s\n\n", students[i].matricNumber);
    }
}

void displayStudentsData(Student students[], int size) {
    int deStudents = 0;
    int normalStudents = 0;

    for (int i = 0; i < size; i++) {
        if (strchr(students[i].matricNumber, 'd') == NULL) {
            deStudents = deStudents + 1;
        } else {
            normalStudents = normalStudents + 1;
        }
    }

    printf(" ");
    printf("Total number of normal Students: %d\n", normalStudents);
    printf("Total number of DE Students: %d\n", deStudents);
    printf("Total number of Students: %d\n", (size + 1));
}

int main() {
    Student students[NUM_STUDENTS];

    populateStudents(students);
    displayStudents(students, NUM_STUDENTS);
    displayStudentsData(students, NUM_STUDENTS);

    return 0;
}
