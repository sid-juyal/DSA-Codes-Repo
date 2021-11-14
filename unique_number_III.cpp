#include<iostream>
using namespace std;
//Every number is repeated thrice(3 times) except one number that is unique.
int main()
{
    int n;
    cin>>n;
    int cnt[64]={0};  //Array of fixed size O(1)
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        int j=0;
        while(num>0)
        {
            int last_digit=(num&1);
            cnt[j]+=last_digit;
            j++;
            num=num>>1;
        }
    }
    //Iterate over the array to form array by taking mode of each element by 3(a[i]mode3).
    //Finally convert the binary number to the decimal form.
    int p=1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cnt[i]%=3;
        ans+=(cnt[i]*p);
        p=p<<1;
    }
    cout<<"Ans is: "<<ans<<endl;
    return 0;
}
