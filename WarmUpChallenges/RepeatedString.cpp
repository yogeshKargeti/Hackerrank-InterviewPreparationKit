#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
long long int x=0,ct=0;
vector<int> v(s.length());
int i;
if(s == "a")
return n;
else if(s.length()==1)
return 0;
else
{
  for(i=0;i<s.length();i++)
  { if(s[i]=='a')
      ct++;
      v[i]=ct;
  }
  if(ct==0)
  return 0;
  else
  {
      x=ct*(n/s.length());
      n=n%s.length();
      x=x+v[n-1];
      return x;
  }
}
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
