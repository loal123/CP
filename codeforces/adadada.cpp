#include <iostream>
using namespace std;

int main() {
	int t,n,j,i;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    
	    int a[n];
	    
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count,max=0;
	    for(i=0;i<n;i++){count=0;
	        for(j=0;j<n;j++){
	            if(a[j]==a[i])count++;
	        }
	        if(max<count)max=count;
	    }
	    
	    cout<<max<<endl;
	    
	}
	return 0;
}
