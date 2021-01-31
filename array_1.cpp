vector<int> duplicates(int a[], int n) 
{
    map<int,int>mp;
    vector<int>v;
     for(int i=0;i<n;i++)
     {
        mp[a[i]]++;
     }
     for(auto i=mp.begin();i!=mp.end();i++)
     {
        if(i->second>1)
        {
          v.push_back(i->first);
        }
     }
     if(v.size()==0)
     {
         v.push_back(-1);
         return v;
     }
     else
     {
         return v;
     }
}


// method 2 #########################3

vector<int> duplicates(int arr[], int n) 
{
    map<int,int>mp;
    vector<int>v;
    int c = 1;
    for(int i = 0; i < n; i++)
    {
        int ind = arr[i] % n;
        arr[ind] += n;
        
        if(arr[ind]/n == 2)
        {
            v.push_back(ind);
            c = 0;
        
        }
    }
    sort(v.begin(),v.end());
    
    if(c)
    {
        v.push_back(-1);
        return v; 
    }
    else
    {
       return v;
    }
}
