
// C++ program to generate pythagorean
// triplets smaller than a given limit
#include <stdio.h>
 
// Function to generate pythagorean
// triplets smaller than limit
void pythagoreanTriplets(int limit)
{
 
    // triplet: a^2 + b^2 = c^2
    int a, b, c = 0;
 
    // loop from 2 to max_limitit
    int m = 2;
    // now loop on j from 1 to i-1
    for (int n = 1; n < m; ++n,++m) {
 
            // Evaluate and print triplets using
            // the relation between a, b and c
        a = m * m - n * n;
        b = 2 * m * n;
        c = m * m + n * n;
        limit--;
        if (limit=0){break;}
        printf("%d %d %d\n", a, b, c);
        }
}
 
// Driver Code
int main()
{
    int limit; scanf("%d",&limit);
    pythagoreanTriplets(limit);
    return 0;
}