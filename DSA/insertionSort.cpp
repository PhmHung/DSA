#include <bits/stdc++.h>
//https://leetcode.com/problems/max-consecutive-ones-iii/description/
using namespace std;
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'insertionSort1' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */

// We start with second element of the array as first element in the array is assumed to be sorted.
// Compare second element with the first element and check if the second element is smaller then swap them.
// Move to the third element and compare it with the first two elements and put at its correct position
// Repeat until the entire array is sorted.
void insertionSort1(int n, vector<int> arr) {
    for(int i=1;i<n;i++)
    {
        int  tmp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[i] > tmp)
        {
            //doi cho
            arr[j+1] = arr[i];
            j--;
        }

        //cap nhat key moi
        arr[j+1] = key;
    }
}

int main()
{
    freopen("inp.txt","r",stdin);
    //freopen("oup.txt","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    insertionSort1(n, arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

// int main()
// {
//     freopen("inp.txt","r",stdin);
//     //freopen("oup.txt","w",stdout);
//     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//     vector <int> arr ={1, 2, 6, 4, 5, 3};
//     cout<<findKthLargest(arr,3)<<" "<<findKthSmallest(arr,3)<<endl;
    
// }
