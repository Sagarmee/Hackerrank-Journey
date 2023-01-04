#include <bits/stdc++.h>
using namespace std;

int main()
{
    // size of stringlist
    int n;
    cin >> n;

    // create a stringlist of string
    string stringList[n];
    for (int i = 0; i < n; i++)
    {
        // take a str from user
        string str;
        cin >> str;

        // insert a str in stringList
        stringList[i] = str;
    }

    // size of queryList
    int q;
    cin >> q;

    // create a queryList of string
    string queryList[q];
    for (int i = 0; i < q; i++)
    {
        // take a query from user
        string query;
        cin >> query;

        // insert a query in queryList
        queryList[i] = query;
    }

    // create result the size of query
    int result[q];
    // and count the matching pattern
    int count = 0;

    // logic start
    //  queryList outerloop
    for (int i = 0; i < q; i++)
    {
        // stringList innerLooop
        for (int j = 0; j < n; j++)
        {
            if (queryList[i] == stringList[j])
            {
                count++;
            }
        }
        result[i] = count;
        count = 0;
    }

    // logic end

    for (int i = 0; i < q; i++)
    {
        cout << result[i] << endl;
    }
}