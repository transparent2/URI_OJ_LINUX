#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c) printf("%d eh o maior\n",a);
    else if(b>a && b> c) printf("%d eh o maior\n",b);
    else printf("%d eh o maior\n",c);
    return 0;
}
