#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int scores[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        scores[i] = x;
    }
    
    int result[2];
    
    int max_first_score = scores[0];
    int min_first_score = scores[0];
    
    int most_points_count = 0;
    int least_points_count = 0;
    
    for(int i=1;i<n;i++){
        if(scores[i] > max_first_score){
            max_first_score = scores[i];
            most_points_count++;
        }
        else if(scores[i] < min_first_score){
            min_first_score = scores[i];
            least_points_count++;
        }
        else{
            continue;
        }
    }
    
    result[0] = most_points_count;
    result[1] = least_points_count;

    cout << result[0] << " " << result[1];
}