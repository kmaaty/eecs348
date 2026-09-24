#include <stdio.h>

static void print_combinations(int score) {
    int count = 0;

    for (int a = 0; a * 8 <= score; a++) {
        int rem1 = score - 8 * a;

        for (int b = 0; b * 7 <= rem1; b++) {
            int rem2 = rem1 - 7 * b;
            
            for (int c = 0; c * 6 <= rem2; c++) {
                int rem3 = rem2 - 6 * c;

                for (int d = 0; d * 3 <= rem3; d++) {
                    int rem4 = rem3 - 3 * d;

                    if (rem4 >= 0 && rem4 % 2 == 0) {
                        int e = rem4 / 2;

                        printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", a, b, c, d, e);
                        count++;
                    }
                }
            }
        }
    }
    
    if (count == 0) {
        printf("No possible combinations of scoring plays for this score.\n");
    }
}

int main(void) {
    int score;

    while (1) {
        printf("Enter the NFL score (Enter 1 to stop): ");

        if (scanf("%d", &score) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n');
            continue;
        }

        if (score == 1) break;

        if (score < 0) {
            printf("Invalid score: score cannot be negative.\n");
            continue;
        }

        printf("Possible combinations of scoring plays if a team's score is %d:\n", score);
        print_combinations(score);
    }
    return 0;
}