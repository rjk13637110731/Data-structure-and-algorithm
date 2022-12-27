for (i = 1;i <= n;i++){
    for (j = 1;j <= n;j++){
        c[i][j] = 0;
        for (k = 0;k < n;k++){
            c[i][j] = c[i][j] + a[i][k]*b[k][j];         //f(n)=n*n*n  ---> T(n)=O(n^3)
        }
    }
}
