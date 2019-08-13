
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <climits>
#include <map>
#include <tuple>
#include <stack>
#include <queue>
using namespace std;
//P31 Challenge Programming Competition
//Can we find several numbers that they sum up to target
vector<int> a = {1,2,4,7};
int n = 4;
int target = 15;
vector<int> seq;
void VectorPrint( vector<int> seq){
    
    cout<<"The composite numbers: ";
    if( seq.size() == 0) return;
    else{
        for( int i = 0; i< seq.size(); i++ )
            cout<<seq[i]<<" ";
    }
    cout<<endl;
    return;
}

bool dfs(int i, int sum, vector<int> seq){
    if( i == n ){
        
        if( sum == target){
            VectorPrint(seq);
            return true;
        }
        else
            return false;
    }
    else{
        
        vector<int> newSeq = seq;
        newSeq.push_back(a[i]);
        
        if(dfs( i+1, sum+a[i],newSeq) || dfs( i+1, sum, seq))
            return true;
        else
            return false;
        
    }
    
};


int main(){
    cout<<dfs(0,0,seq);
    return 0;
    


    
}
