#include <stdio.h>

int main() {
    // Define movie titles and rental fees using individual variables
    char firstMovieName[] = "First Movie";
    int firstMovieRate = 100;
    int firstMovieAvailable = 5;

    char secondMovieName[] = "Second Movie";
    int secondMovieRate = 150;
    int secondMovieAvailable = 3;

    char thirdMovieName[] = "Third Movie";
    int thirdMovieRate = 120;
    int thirdMovieAvailable = 7;

    char fourthMovieName[] = "Fourth Movie";
    int fourthMovieRate = 80;
    int fourthMovieAvailable = 2;

    char fifthMovieName[] = "Fifth Movie";
    int fifthMovieRate = 200;
    int fifthMovieAvailable = 4;

    int selectedMovie, rentalDays;

    // Display the menu
    printf("******** Movie Rental System ********\n\n");
    printf("Please select a movie for rent:\n");
    printf("1. %s => Rs.%d per day, Available: %d\n", firstMovieName, firstMovieRate, firstMovieAvailable);
    printf("2. %s => Rs.%d per day, Available: %d\n", secondMovieName, secondMovieRate, secondMovieAvailable);
    printf("3. %s => Rs.%d per day, Available: %d\n", thirdMovieName, thirdMovieRate, thirdMovieAvailable);
    printf("4. %s => Rs.%d per day, Available: %d\n", fourthMovieName, fourthMovieRate, fourthMovieAvailable);
    printf("5. %s => Rs.%d per day, Available: %d\n\n", fifthMovieName, fifthMovieRate, fifthMovieAvailable);

    // Get user input
    printf("Enter the number of the movie you want to rent: ");
    scanf("%d", &selectedMovie);

    // Validate user input
    if (selectedMovie < 1 || selectedMovie > 5) {
        printf("Invalid movie selection. Please enter a number between 1 and 5.\n");
        return 1;
    }

    // Get rental duration
    printf("Enter the number of days you want to rent the movie: ");
    scanf("%d", &rentalDays);

    // Calculate rental cost
    int rentalCost;
    switch (selectedMovie) {
        case 1:
            rentalCost = firstMovieRate * rentalDays;
            break;
        case 2:
            rentalCost = secondMovieRate * rentalDays;
            break;
        case 3:
            rentalCost = thirdMovieRate * rentalDays;
            break;
        case 4:
            rentalCost = fourthMovieRate * rentalDays;
            break;
        case 5:
            rentalCost = fifthMovieRate * rentalDays;
            break;
    }

    // Check if the movie is available
    if (selectedMovie == 1 && firstMovieAvailable <= 0) {
        printf("Sorry, %s is not available for rent.\n", firstMovieName);
        return 1; 
    } else if (selectedMovie == 2 && secondMovieAvailable <= 0) {
        printf("Sorry, %s is not available for rent.\n", secondMovieName);
        return 1;
    } else if (selectedMovie == 3 && thirdMovieAvailable <= 0) {
        printf("Sorry, %s is not available for rent.\n", thirdMovieName);
        return 1;
    } else if (selectedMovie == 4 && fourthMovieAvailable <= 0) {
        printf("Sorry, %s is not available for rent.\n", fourthMovieName);
        return 1;
    } else if (selectedMovie == 5 && fifthMovieAvailable <= 0) {
        printf("Sorry, %s is not available for rent.\n", fifthMovieName);
        return 1;
    }

    // Update the availability of the selected movie
    switch (selectedMovie) {
        case 1:
            firstMovieAvailable--;
            break;
        case 2:
            secondMovieAvailable--;
            break;
        case 3:
            thirdMovieAvailable--;
            break;
        case 4:
            fourthMovieAvailable--;
            break;
        case 5:
            fifthMovieAvailable--;
            break;
    }

    // Display the rental details
    printf("\nRental Details:\n\n");
if (selectedMovie == 1) {
    printf("Movie: %s\n", firstMovieName);
} else if (selectedMovie == 2) {
    printf("Movie: %s\n", secondMovieName);
} else if (selectedMovie == 3) {
    printf("Movie: %s\n", thirdMovieName);
} else if (selectedMovie == 4) {
    printf("Movie: %s\n", fourthMovieName);
} else if (selectedMovie == 5) {
    printf("Movie: %s\n", fifthMovieName);
} else {
    printf("Unknown Movie");
}
     printf("Rental Days: %d\n", rentalDays);
    printf("Total Cost: Rs.%d\n", rentalCost);

    return 0;
}
