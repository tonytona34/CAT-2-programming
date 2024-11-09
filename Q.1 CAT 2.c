#include <stdio.h>
#include <string.h>
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};
int main(){
    struct employee emp={
        "John Doe",
        12345,
        "Human Resources",
        55000,50,
        "john.doe@company.com"
    };
    printf("Name:%s\n", emp.name);
    printf("id:%d\n", emp.id);
    printf("department:%s\n", emp.department);
    printf("salary:%.2f\n", empe.salary);
    printf("email:%s\n", emp.email);
	return 0;
}