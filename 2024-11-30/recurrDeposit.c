#include <stdio.h>
#include <math.h>

int main() {
    float deposit, maturityAmount = 0, interestRate;
    int duration;
    printf("Enter monthly installment amount: ");
    scanf("%f", &deposit);
    printf("Enter interest rate per annum (in percentage): ");
    scanf("%f", &interestRate);
    printf("Enter duration of deposits in months: ");
    scanf("%d", &duration);

    // Monthly and quarterly rates
    float monthlyRate = interestRate / 12 / 100;
    float quarterlyRate = interestRate / 4 / 100;

    printf("\nMonth\tDeposit\t\tInterest\tMaturity Amount\n");
    printf("------------------------------------------------------\n");

    // Loop through each month and accumulate interest
    for (int month = 1; month <= duration; month++) {
        maturityAmount += deposit;  // Add monthly deposit
        
        float interestAccrued;
        // Compound interest quarterly (every 3 months)
        if (month % 3 == 0) {
            maturityAmount *= (1 + quarterlyRate);
            interestAccrued = maturityAmount * quarterlyRate;
        } else {
            interestAccrued = maturityAmount * monthlyRate;
            maturityAmount += interestAccrued;  // Apply monthly interest
        }

        // Print the results in tabular format for each month
        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", month, deposit, interestAccrued, maturityAmount);
    }

    printf("------------------------------------------------------\n");
    printf("Total Maturity amount after %d months: %.2f\n", duration, maturityAmount);

    return 0;
}