#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define l long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vll vector<long long>
#define pb push_back
#define sp <<" "<<

void yes() { cout<<"YES\n";}
void no() { cout<<"NO\n";}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int k,n;
	    cin>>n>>k;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	      for(int i=0;i<n;i++){
	      if(k>=a[i]){
	          k=k-a[i];
	          b[i]=1;
	      }
	      else b[i]=0;
	    }
	      for(int i=0;i<n;i++){
	        cout<<b[i];
	    }
	    cout<<endl;
                
        
    }
    return 0;
}