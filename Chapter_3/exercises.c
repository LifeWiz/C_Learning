// binsearch 
/* Their code
#include <stdio.h>
int binsearch(int x, int v[], int n)
{
    int low,high, mid;
    low = 0 ;
    high = n-1;
    while (low<= high) {
        mid = (low+high) /2;
        if (x<v[mid])
        high = mid -1;
        else if (x>v[mid])
            low = mid + 1; 
        else 
            return mid;
    }
}
int trim[char s[]]
{
    int n;
    for (n = strlen(s) - 1; n>= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] ! = '\n')
            break;
    s[n+ 1] = '\0\;
    return n;
}
*/