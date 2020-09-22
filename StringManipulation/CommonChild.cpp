#include <bits/stdc++.h>

using namespace std;

// Complete the commonChild function below.
int commonChild(string str, string str2) {
        int ls=str.length();
    int ls2=str2.length();
    int i,j;
    vector<vector<int>> val( ls+1 , vector<int> (ls2+1));
    for(i=0;i<=ls;i++){
        val[i][0]=0;
    }
    for(j=0;j<=ls2;j++){
        val[0][j]=0;
    }
    for(i=1;i<=ls;i++){
        for(j=1;j<=ls2;j++){
            if(str[i-1]==str2[j-1]){
                val[i][j]=val[i-1][j-1]+1;
            }
            else if(val[i-1][j]>=val[i][j-1]){
                val[i][j]=val[i-1][j];
            }
            else{
                val[i][j]=val[i][j-1];
            }
        }
    }
    return val[i-1][j-1];


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
