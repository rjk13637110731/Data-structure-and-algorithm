void exam(floaat x[][],int m,int n){
    float sum[];
    for (int i = 0;i < m;i++){
        sum[i] = 0.0;
        for (int j = 0;j < n;j++){
            sum[i] += x[i][j];      //f(n)=m*n ---> T(n)=O(m*n)
        }
    }
    for (i = 0;i < m;i++){
        cout << i <<":"<<sum[i] << endl;
    }
}
