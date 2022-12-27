//算法2：
for (i = 0;i < n;i++){
    b[i] = a[n-i-1];        //S(n)=O(n)
}
for (i = 0;i < n;i++){
    a[i] = b[i];
}
