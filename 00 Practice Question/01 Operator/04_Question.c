/* WAP to calculate and display a length value in Kms and Mts,
   where the value is entered in meters only. */

#include<stdio.h>
int main() {
    float meters;

    printf("Enter the length in meters: ");
    scanf("%f", &meters);

    // Convert meters to kilometers (integer division truncates decimals)
    int kilometers = (int) (meters / 1000);

    // Calculate remaining meters after removing kilometers
    float remaining_meters = meters - (kilometers * 1000);

    printf("%.0f meters is equal to %d kilometers and %.0f meters.\n", meters, kilometers, remaining_meters);
    return 0;
}