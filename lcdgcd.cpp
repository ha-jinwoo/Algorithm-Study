#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// 최대공약수 구하기
long long int gcd(long long int a, long long int b)
{
    return (b==0)? a: gcd(b,a%b);
}
// 최소공배수 구하기
long long int lcm(long long int a, long long int b){
    return a/gcd(a,b)*b;
}

int main(){
	cout<<lcm(12,16);
}
