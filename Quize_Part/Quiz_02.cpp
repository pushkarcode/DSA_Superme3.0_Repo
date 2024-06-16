#include <iostream>
#include <limits.h>
using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	double area = width * height;
// 	cout << area << endl;
// 	return 0;
// }

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n%10;
//         sum = sum + digit*factor;
//         factor = 2*factor++;
//         n /= 10;
//     }
//     cout<<sum;
//     return 0;
// }

// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<"prime :"<<i<<endl;
//         }
//      else cout<<i<<endl;

//     }
//     return 0;
// }

// int main() {
// 	int n,a=0;
// 	cin>>n;
//     int z = n,digits=0;
//     while(z!=0){
//         z = z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k = n%10,z=digits-1;
//         while(z--){
//             k = k*10;
//         }
//         a = a + k;
//         digits--;
//         n = n/10;
//     }
//     cout<<a;
//     return 0;
// }

// bool checkMember(int n)
// {
//     int f1 = 1, f2 = 1;
//     if (n == 0 && n == 1)
//     {
//         return true;
//     }
//     else
//     {
//         while (1)
//         {
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if (temp == n)
//             {
//                 return false;
//             }
//             else if (temp > n)
//             {
//                 return true;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (checkMember(n))
//     {
//         cout << false << endl;
//     }
//     else
//     {
//         cout << true << endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-1;
//     while(i<n){
//         int k=0,gaps=n-1-i;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-1;
//     while(i<n){
//         int k=0,gaps=n-1-i;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }

#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << j+1;
//         }
//         for (int j = 0; j < 2 * i ; j++)
//         {
//             cout<<"*";
//         }
//         for (int j = n-i; j > 0; j--)
//         {
//             cout<<j;
//         }
//         cout << endl;
//     }

// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     int second = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (max > arr[i] && arr[i] > second)
//         {
//             second = arr[i];
//         }
//     }
//     cout << second;
//     return 0;
// }

int main()
{
    int i, j, n;
    cin >> n;
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < n-i+1; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}