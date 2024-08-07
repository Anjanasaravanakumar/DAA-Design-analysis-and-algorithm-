/*Author: B.S.Anjana
  Date: 4.7.24
*/
#include <stdio.h>


void towerOfHanoi(int n, char source, char destination, char temp) {
    if (n == 1) {
        printf("Move disk 1 source %c destination %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, temp, destination);
    printf("Move disk %d source %c destination %c\n", n, source, destination);
    towerOfHanoi(n - 1, temp, destination, source);
}

int main() {
    int n;


    printf("Enter the number of disks: ");
    scanf("%d", &n);


    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods

    return 0;
}
