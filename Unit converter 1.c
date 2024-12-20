#include<stdio.h>
void convertlength(double value,int choice) {
    switch (choice){
        case 1:// meters to kilometers
        printf("%.2f meters =.2f kilometers\n",value,value / 1000);
        break;
        case 2://meters to miles
        printf("%.2f meters = .2f miles\n",value,value / 1609.34);
        break;
        case 3://meters to feet
        printf("%.2f meters = .2f feet\n",value,value *3.28084);
        break;
        case 4://kilometers to meters
        printf("%.2f kilometers =%.2f meters\n",value,value *1000);
        break;
        case 5:// miles to meters
        printf("%.2f miles = %.2f meters\n", value,value *1609.34);
        break;
        case 6:// feet to meters
        printf("%.2f feet = %.2f meters\n",value,value / 3.28084);
        break;
        default:
        printf("invaid choice!\n"); 
    }
}
int main() {
    double value;
    int choice;
    printf("Unit converter\n");
    printf("choose the conversion type:\n");
    printf("1. meters to kilometers\n");
    printf("2. meters to miles\n");
    printf("3. meters to feet\n");
    printf("4. kilometers to feet\n");
    printf("5. miles to meters\n");
    printf("6. feet to meters\n");
    printf("Enter your choice (1-6):");
    scanf("%d", &choice);
    printf("Enter a value to convert:");
    scanf("%1f",&value);
    convertlength(value,choice);
    return 0;
}