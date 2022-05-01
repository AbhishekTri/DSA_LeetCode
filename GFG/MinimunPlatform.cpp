int findPlatform(int arr[], int dep[], int n)
    {
        int nump=0;
        int maxi=0;
    	
    	if(n!=0) nump++;
    	
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	for(int i=1,j=0;i<n;i++){
    	   nump++;
    	   if(arr[i]>dep[j]){
    	       nump--;
    	       j++;
    	   }
    	  
    	   maxi=max(maxi,nump);
    	}
    	return maxi;
    }
------------------------------------------------------------------------------------------------------------------------------------------------------
                                                        QUESTION
------------------------------------------------------------------------------------------------------------------------------------------------------

//Given arrival and departure times of all trains that reach a railway station. 
//Find the minimum number of platforms required for the railway station so that no train is kept waiting.
//Consider that all the trains arrive on the same day and leave on the same day. 
//Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. 
//At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.
