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
