// #include <bits/stdc++.h>
// using namespace std;

#include<stdio.h>
#include<math.h>
long long n,k,ar[30],a[30],b[30],hey[2100],count=0;

int recur(long long q,long long r)
{ 
    long long c=0,m=1,i,j;

    for(i=r;i<n;i++) {
        ar[q]=i;
        for(k=1;k<=n;k++) {
            if(q==k-1) {
                for(j=0;j<k;j++){
                    c = c + b[ar[j]];
                    m = m*a[ar[j]];
                }
                count++;
                hey[count] = fabs(m-c);
            }
            if(q<k-1)
                recur(q+1,i+1);
        }
        c=0;
        m=1;
    }

return 0;
}

int main(){
    long long swape,i,j;

    scanf("%lld",&n);
    for(i=0;i<n;i++) {
        scanf("%lld %lld",&a[i],&b[i]);
    }
    recur(0,0);

    for (j = 1 ; j <= count; j++) {
        for (k = 1 ; k <= count-j; k++) {
            if (hey[k] > hey[k+1]) {
                swape = hey[k];
                hey[k] = hey[k+1];
                hey[k+1] = swape;
            }
        }
    }

    printf("%lld",hey[1]);

    return 0;
}