#include<iostream>
using namespace std;

//rectangle pattern
// ***
// ***
// ***
// ***
/* int main()
{
    int row, col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
} */

//Hollow rectangle pattern
// ****
// *  *
// *  *
// ****
/* int main()
{
    int row, col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
} */

//inverted half pyramid
// *****
// ****
// ***
// **
// *
/* int main()
{
    int n; //n=no. of rows
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} */

// Half pyramid after 180deg rotation
//     *
//    **
//   ***
//  ****
// *****
/* int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }   
} */

// Half pyramid using numbers
// 1
// 22
// 333
// 4444
// 55555
/* int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
} */

// Floyd's Triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14
/* int main()
{
    int n;
    cin>>n;

    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
} */

// Butterfly pattern
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
/* int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
} */

// Inverted Pattern
// 12345
// 1234
// 123
// 12
// 1
/* int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
} */

/* 0-1 pattern
1
01
101
0101
10101 */
/* int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<" 1";
            }
            else{
                cout<<" 0";
            }
        }
        cout<<endl;
    }
} */

// Rhombus Pattern
//     *****
//    *****
//   *****
//  *****
// *****
/* int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
} */


// Number pattern
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5 
/* int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
} */

//Palindromic pattern
//     1
//    212
//   32123
//  4321234
// 543212345
 



//  Star pattern
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
/* int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
} */

// zig zag pattern
//   *   *
//  * * * *
// *   *   *
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0) ||  (i==2 && j%4==0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}