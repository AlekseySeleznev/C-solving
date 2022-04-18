// https://stepik.org/lesson/57650/step/5?thread=solutions&unit=35411

int main() {
  int i, k;
    scanf("%d %d", &i, &k);
    for (; i<=k; printf("%d ", k--));
}

// THE SAME AS 

int main() {
    // put your code here
    int K, M;
    scanf("%d %d", &K, &M);
    
    for (int i = M; i >= K; i--) {
        printf("%d ", i);
    }
    // put your code here
    return 0;
}
