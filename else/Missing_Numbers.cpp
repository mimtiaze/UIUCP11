#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int>missingNumbers(vector <int> arr , vector <int> brr)
{
    vector<int>missing;
    int check,count1=0,count2=0;
        for(int i=0;i<brr.size();i++)
        {
            int check = brr[i];
            for(int j=0;j<arr.size();j++)
            {
                if(check==arr[i])count1++;
            }
            for(int k=0;k<brr.size();k++)
            {
                if(check==brr[i])count2++;
            }
            if(count1!=count2)missing.push_back(check);
        }

        return missing;
}
int main()
{
    vector<int>arr;
    vector<int>brr;
    int n1,n2;

    cin >> n1;
    for(int i=0;i<arr.size();i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> n2;
    for(int i=0;i<brr.size();i++)
    {
        int temp;
        cin >> temp;
        brr.push_back(temp);
    }
    vector <int> missing = missingNumbers(arr,brr);
    for(int i=0;i<missing.size();i++)
    {
        cout << missing[i] << " ";
    }
}
