#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for (int i=0 ; i<=n-1 ;i++){
        for(int j=0 ; j<=n-1 ; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i = 0; i<= n-1 ; i++){
        for (int j=0; j<=i ; j++){
            cout << "* ";
        }
        cout << endl;
    }    
}

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }

}

void pattern4(int n){
    for(int i =1;i<=n;i++){
        for(int j=0;j<=i-1;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j <<" ";
        }
        cout<<endl;
    }
} 

void pattern7(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i+1;k++){
            cout<<" ";
        }
        for(int j=1;j<2*i;j++){
        cout<<"*";
       }
    cout<<endl;
    }
}
void pattern8(int n){
   for(int i=0; i<n;i++){
    for (int k=0 ;k<i;k++){
        cout<<" ";
    }
    for(int j=1;j<2*(n-i);j++){
        cout<<"*";
    }
    cout<<endl;
   }
}
void pattern9(int n){
    for(int i1=0;i1<n;i1++){
        for(int k=0;k<n-i1;k++){
            cout<<" ";
        }
        for(int j=0;j<=2*i1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i2=0;i2<n;i2++){
        for(int k=0;k<=i2;k++){
            cout<<" ";
        }
        for(int j=0;j<=2*(n-i2-1);j++){
        cout<<"*";
        }
    cout<<endl;
    } 
}
void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if (i>n) stars=2*n-i;
        for (int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    int star = 1;
    for(int i=0;i<n;i++){
        if (i%2==0) star = 1;
        else star = 0;
        for(int j=0;j<=i;j++){
            cout<< star;
            star = 1 - star;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j ;
        }
        
        for(int k=1;k<=n-i;k++){  //loop runs 3 time and double space is printed  or         
            cout<<"  ";           // k<=2(n-1) will run 6 times and print single space
        }   

        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num <<" ";
            num =num+1;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<= 'A' + i;ch++){  //'A' + 0 = A and 'A' + 2 = 'C'
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch< 'A' + (n-i);ch++){  
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }
}
void pattern16(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i ;j++){  
            cout<<ch;
            
        }
        ch = ch + 1;
        cout<<endl;
    }
}
void pattern17(int n){
    for(int i=1;i<=n;i++){
        //spaces ke liye
        for(int k=1;k<=n-i+1;k++){
            cout<<" ";
        }
        //characters ke liye
        int pivot = i;      //if i starts from 0 then pivot = (2*i+1)/2
        char ch='A';
        for(int j=1;j<2*i;j++){
            cout<<ch;
            if(j<pivot) ch++;
            else ch--;

       }
    cout<<endl;
    }
}
void pattern18(int n){
    for(int i=1;i<=n;i++){
        char ch = 'A' + (n-i);
        for(int j=1;j<=i ;j++){  
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
//this approch is diificult (making a formula for space loop)
//in this approch,dicides the pattern in vertically in 3 parts : 1. stars 2. diamond shaped spaces 3.stars towards the right
void pattern19(int n){
    for(int i=0;i<2*n;i++){
        //stars 1
        int stars=n-i;
        if(i>=n) stars=i-n+1;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //space
        int space=2*i;
        if(i>=n) space=2*(2*n-i)-2;
        for(int k=0;k<space;k++){
            cout<<" ";
        }
        //stars 2
        stars=n-i;
        if(i>=n) stars=i-n+1;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }


        cout<<endl;
    }
}
//pattern19 approch 2 is divide the pattern horizontally, first print uppeer portion then lower
void pattern19_2(int n){
    int iniS=0; //initial space
    for(int i=0;i<n;i++){
        //star
        for(int j=1;j<=n-i;j++){
        cout<<"*";
        }
        //space
        for(int j=0;j<iniS;j++)
        cout<<" ";
        
        //stars
        for(int j=1;j<=n-i;j++){
        cout<<"*";
        }
        iniS += 2;
        cout<<endl;
    }
    iniS=8;
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
        cout<<"*";
        }
        //space
        for(int j=0;j<iniS;j++)
        cout<<" ";
        
        //stars
        for(int j=1;j<=i;j++){
        cout<<"*";
        }
        iniS -= 2;
        cout<<endl;
    }

}

 void pattern20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars =i;
        if (i>n) stars=2*n-i;
        for (int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        //stars        
        for (int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces -=2;
        else spaces +=2;
    }
}
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;

    }
}
void pattern22(int n){  //for Q photo of the pattern n = 4
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right = (2*n - 2 ) - j;
            int bottom= (2 * n - 2) - i;
            cout<< (n - min(min(top,bottom),min(left,right))) << " ";
            
        }
        cout<<endl;
    }
} 
int main(){
    pattern22(4);
    return 0;
}

