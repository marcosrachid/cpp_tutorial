
int factorial(int n) {
    int fat = 1;

    for (int i = 1; i < n; i++)
        fat = fat * (i + 1);
    return fat;
}

int pow_base_2(int n) {
    return n * n;
}