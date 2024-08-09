#include <bits/stdc++.h>
using namespace std;

//pass by value
//it sends a copy to the function,original value remains unchanged 
/*
void change(string s){
    s[0] = 't';
    cout << s << endl ;
}
int main(){
    string s = "raj";
    change(s);
    cout << s << endl;
    return 0;
}
*/
// pass by reference
//only change in syntax is &, other ways also possible
void change(string &s){ 
    s[0] = 't';
    cout << s << endl ;
}
int main(){
    string s = "raj";
    change(s);
    cout << s << endl;
    return 0; 
}

//arrays are always called by reference no need to add &
//rest all will be by default called by value and will require & in order to call by refernece
