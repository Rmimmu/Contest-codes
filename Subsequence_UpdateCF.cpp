/*First try to check the take the sum from arr[0] to the right and pop the highest among those part as well as decrease them 
in the sum also. Then find the minimum sum (initially min is 1e18). Then do the same from left to the end of the end
of the array and find the sum of them and then decrease them by the maximum inputs that are inside that arary. then again
compare them with the previous ans and then print the minimum one.
Data structure: priority queue.
*/

#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define int long long

using namespace std;

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n+1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }   

    int ans = 1e18;
    {
        int sum = 0;
        priority_queue<int> pq;
        for(int i = 1; i <= r; i++){
            pq.push(arr[i]);
            sum += arr[i];
        }
        for(int i = l-1; i >= 1; i--){
            sum -= pq.top();
            pq.pop();
        }
        ans = min(ans, sum);
    }

    {
        int sum = 0;
        priority_queue<int> pq;
        for(int i = l; i <= n; i++){
            pq.push(arr[i]);
            sum += arr[i];
        }
        for(int i = r+1; i <= n; i++){
            sum -= pq.top();
            pq.pop();
        }
        ans = min(ans, sum);
    }
    cout << ans << '\n';
}

signed main(){
    fastio
    int t;
    cin >> t;
    while(t--) solve();
}
