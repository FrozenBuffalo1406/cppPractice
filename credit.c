#include <stdbool.h>
#include <stdio.h>
int splitAndSum(int Num);
int checkSum(long long lastNum);
int cardValidation(long long firstNum);
int getLength(long num);

int main(int argc, char const *argv[]) {
    long long num = 4003600000000014;

    // do {
    //     long num = get_long("Number: ");
    // } while (!num);
    printf("Number: %lli\n", num);
    int checksum = checkSum(num);
    printf("%d\n", checksum);
    return 0;
}

int cardValidation(long long num) {
    if (num / 10 * getLength(num) == (34 || 37)) {
        
    }
}
int getLength(long num) {
    int length = 0;
    while (num / 10 != 0) {
        num /= 10;
        length++;
    }
    return length;
}

int splitAndSum(int num) {
    if (num / 10 == 0)
        return num;
    else
        return splitAndSum(num / 10) + splitAndSum(num % 10);
}

int checkSum(long long lastNum) {
    long value = 0;
    int temp;
    long long num = lastNum;
    int i = 0;
    // Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
    // iteration to second-to-last digit
    while (num != 0) {
        if (i % 2 == 1) {
            temp = num % 10;
            temp *= 2;
        } else {
            temp = num % 10;
        }
        temp = splitAndSum(temp);
        value += temp;
        num /= 10;
        i++;
        printf("%d+\t\t", temp);
        printf("%d\n", value);
    }
    // If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
    if (value % 10 == 0) {
        return value;
    } else {
        return -1;
    }
}
