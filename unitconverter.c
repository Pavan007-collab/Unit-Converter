#include <stdio.h>

void convertLength() {
    float meters, kilometers, miles, feet;

    printf("Enter the value in meters: ");
    scanf("%f", &meters);

    kilometers = meters / 1000;
    miles = meters / 1609.34;
    feet = meters * 3.28084;

    printf("%.2f meters is %.2f kilometers\n", meters, kilometers);
    printf("%.2f meters is %.2f miles\n", meters, miles);
    printf("%.2f meters is %.2f feet\n", meters, feet);
}

void convertTemperature() {
    float celsius, fahrenheit, kelvin;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    kelvin = celsius + 273.15;

    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
    printf("%.2f Celsius is %.2f Kelvin\n", celsius, kelvin);
}

void convertWeight() {
    float kilograms, grams, pounds, ounces;

    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilograms);

    grams = kilograms * 1000;
    pounds = kilograms * 2.20462;
    ounces = kilograms * 35.274;

    printf("%.2f kilograms is %.2f grams\n", kilograms, grams);
    printf("%.2f kilograms is %.2f pounds\n", kilograms, pounds);
    printf("%.2f kilograms is %.2f ounces\n", kilograms, ounces);
}

int main() {
    int choice;

    printf("Unit Converter\n");
    printf("1. Convert Length (meters)\n");
    printf("2. Convert Temperature (Celsius)\n");
    printf("3. Convert Weight (kilograms)\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            convertLength();
            break;
        case 2:
            convertTemperature();
            break;
        case 3:
            convertWeight();
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
