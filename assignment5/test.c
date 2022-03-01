#include <stdio.h>



int LDS (long long int array[], int start, int length, int *index) {
    length = length - start;

    int ldsSubset[length];
    for (int i = 0; i < length; i++)
    {
        ldsSubset[i] = 1;
    }
    

    int max1 = 0;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < i; j++) {
            if (array[i+start] < array[j+start] && ldsSubset[i] < ldsSubset[j] + 1) {
                ldsSubset[i] = ldsSubset[j] + 1;
            }
        }
    }
    

    for (int i = 0; i < length; i++)
    {
        if (ldsSubset[i] > max1) {
            max1 = ldsSubset[i];
            *index = i;
        }
    }
    
    return max1;

}


int main() {

    int index;
    int ans;

    int N, M;
    
    scanf("%d %d", &N, &M);

    long long int houses[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &houses[i]);
    }

    // ans = LDS(houses, 0, N, &index);
    // if (M >= N) {
    //     ans = LDS(houses, 0, N, &index);
    // } else if ((index) <= M) {
    //     ans += LDS(houses, M, N, &index);
    // }

    if (M >= N || M < 1) {
        ans = LDS(houses, 0, N, &index);
    } else {
        ans = LDS(houses, 0, M, &index);
        printf("%d ",ans);
        if (index+1 <= M) {        
            ans += LDS(houses, M, N, &index);
        }
        
        //printf("%d %d\n", LDS(houses, 0, M, &index), LDS(houses, M, N, &index));
    }

    printf("%d", ans);


    return 0;

}