#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {



    if(v2 < v1 && (x2 -x1)%(v1-v2) == 0)
         return "YES";

    return "NO";
}

int main(){

    string result = kangaroo(0,2,3,4);

    cout << result << endl;

    return 0;

}