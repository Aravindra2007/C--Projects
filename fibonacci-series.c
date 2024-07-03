//print fibonacci series upto n terms
#include <stdio.h>

int main()
 {
    int T, a = 0, b = 1, nextTerm;
    printf("Enter T ");
    scanf("%d", &T);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= T; ++i)
        {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        }
    return 0;
}
