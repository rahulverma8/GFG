
#include<bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long maxsum=0,sum=0;
        int l=0;
        for(int i=0;i<Arr.size();i++){
            if(i<K){
                sum+=Arr.at(i);
            }
            else{
                sum-=Arr.at(l);
                sum+=Arr.at(i);
                l++;
            }
            if(sum>maxsum) maxsum=sum;
    }
    return maxsum;
}

};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 

