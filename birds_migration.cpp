#include <bits/stdc++.h>


using namespace std;


int migratoryBirds(vector<int> arr) {

    int id[6] = {0};

    int maior = 0,chosen = 0;

    int size = arr.size();

    for(int i = 0; i < size; i++){
        id[arr[i]]++;
    }

    for(int i = 1; i <= 5; i++){
    
        if(id[i] > maior){
            maior = id[i];
            chosen = i;
        }
    }

    return chosen;
}

int main(){


    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);

    int res = migratoryBirds(v);

    cout << "resultado: " << res << endl;

    return 0;

}