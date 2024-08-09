#include<bits/stdc++.h>
using namespace std;

void reversenum(int x){
    int rev = 0;
        while(x != 0){
            int rem = x % 10;
            rev = rev*10 + rem;
            x = x/10; 
        }
    cout<<rev;
}
//3 functions for armstrong of a number
//function to calculate x raised to the power y. x=a digit of number,y=total no. of digits
int power(int x,int y){
	int product = x;
	y--;
	while(y){
		product=product*x;
		y--;
	}
	return product;
}

//number of digits
int order(int x){
	int n=0;
	while (x){
		n++;
		x=x/10;
	}
	return n;
}

bool checkArmstrong(int n){
	//Write your code here
	int temp=n;
	int sum=0;
	int digits=order(n);
	while(temp>0){
		int lstdigit = temp%10; 
		sum=sum + power(lstdigit,digits);
		temp= temp/10;
	}
	if(sum == n) return true;
	else return false;
}
// int main(){
//     bool ans = checkArmstrong(1634);
//     cout<<ans;
//     return 0;
// }
//armstrong code ends here


//print all divisors of the given number

void printalldivisors(int n){
	vector<int> ls;
	// O(sqrt(n)) 
	for(int i=1;i*i<=n;i++){ // calling a function takes time so i*i 
		if(n%i==0){
			ls.push_back(i);
			if(n/i != i){
				ls.push_back(n/i);
			}
		}

	}
	//O(no of factors * log (no of factors)) 
	sort(ls.begin(),ls.end());
	// O(no of factors)
	for(auto it : ls){
		cout<<it <<" ";
	}
}


int main(){
	int n;
	//cin >> n;
	printalldivisors(36);
	return 0;		
}

