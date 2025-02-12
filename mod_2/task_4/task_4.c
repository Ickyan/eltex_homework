#include <stdio.h>
#include <stdalign.h>
#include <stdint.h>
#include <string.h>

struct Person{
    char Name[20];
    char Surname[30];
    int Age;
    double GPA;
    char Gender;  
    int ID;       
};

typedef struct {
    char Name[20];
    char Surname[30];
    uint8_t Age;
    float GPA;
    uint8_t Gender; 
    uint16_t ID;    
} CompressedPerson;

int main() {
    printf("Size of Person: %zu bytes\n", sizeof(struct Person));
    printf("Alignment of Person: %zu bytes\n", alignof(struct Person));
    printf("Size of CompressedPerson: %zu bytes\n", sizeof(CompressedPerson));
    printf("Alignment of CompressedPerson: %zu bytes\n", alignof(CompressedPerson));
    return 0;
}
