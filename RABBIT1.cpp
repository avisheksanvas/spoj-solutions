#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char ch[1000];
        int n,temp,pos=0;
        ll sum=0;
        scanf("%d ",&n);
        int *arr;
        arr = (int *)calloc(n+9,sizeof(int));
        for(int i=0;i<n;i++)
        {
            scanf("%s%d",ch,&temp);
            arr[temp]++; //hashing
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i])
            {
                temp=pos+1;
                pos+=arr[i];
                while(temp<=pos)
                {
                    sum+=(temp-i)<0?-1*(temp-i):(temp-i);
                    temp++;
                }
                if(pos==n)
                    break;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}