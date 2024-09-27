// Simple C++ program to count occurrences
// of pat in txt.
#include <iostream>
using namespace std;

int countFreq(string& pat, string& txt)
{
	int M = pat.length();
	int N = txt.length();
	int res = 0;

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
		/* For current index i, check for
		pattern match */
		int j;
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		// if pat[0...M-1] = txt[i, i+1, ...i+M-1]
		if (j == M) {
			res++;
		}
	}
	return res;
}

int countFreq2(string &pat,string &txt){
    int cnt = 0;
    int i = 0;
    while(i<txt.length()){
        int j = 0;
        while(txt[i] == pat[j]){
            i++;
            j++;
            if(i > txt.length()) break;
            if(j>pat.length()){
                cnt++;
                break;
            }
        }
        j=0;
    }
    return cnt;
}
int main()
{
	string txt = "aabcdeab";
	string pat = "ab";
	cout << countFreq2(pat, txt);
	return 0;
}
