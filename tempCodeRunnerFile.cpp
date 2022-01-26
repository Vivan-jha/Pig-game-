	#include<bits/stdc++.h>

	using namespace std;

	int main(){
		
       int t;
       while(t--){
        int n,k;
        cin>>n>>k;
        
        int  array1[n];
        int  array2[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>array1[i];


        }

        for (int i = 0; i < n; ++i)
        {
            cin>>array2[i];

        }
        for (int i = 0; i < n; ++i)
        {
         if (k>=array1[i])
        {
       
            k = k+array2[i];
        }

        }
        
           

        cout<< k <<endl;




       }
       }


       



	   
		








