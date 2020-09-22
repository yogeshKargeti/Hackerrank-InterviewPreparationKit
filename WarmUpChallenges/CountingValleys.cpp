#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
  int upstep=0,downstep=0,valley=0,i;
  for(i=0;i<s.size();i++)
  {
      if(s[i]=='U')
      {
          if(downstep==0)
            upstep++;
          else
            downstep--;
      }
      else
      {
          if(upstep==0)
            { downstep++;
              if(downstep==1)
                valley++;
            }
          else
            upstep--;
      }
  }
      return valley;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
