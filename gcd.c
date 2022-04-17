int gcd(int x, int y){
    int max, min, result, temp;
    if (x > y) {
        max = x;
        min = y;
    } else {
        max = y;
        min = x;}

    result = max % min;

    while (result != 0) {
        temp = result;
        result = min % result;
        min = temp;
    }

    return result+min;
}

/* RECURSION
int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}
*/

/* SLOWEST SOLUTION
int gcd(int x, int y){
    int k=0;
    for (int i=1; i<=x && i<=y; i++) {
        if (x%i==0 && y%i==0) k=i;}
    return (k);
} */

/* SOLUTION 3
int gcd(int x, int y){
    int t;
    while (x) {
        t = x;
        x = y % x;
        y = t;
    }
    return y;
}
*/
