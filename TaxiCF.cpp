/// https://codeforces.com/problemset/problem/158/B
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define meme(a,b) memset(a,b,sizeof(a));
#define isVowel(c) (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')

bool cmp(const pair<int,int>&p1, const pair<int,int>&p2){
    if(p1.first > p2.first) return 1;
    else if(p1.first == p2.first) return (p1.second < p2.second);
    else return 0;
}

void solve(){
    int n;
    cin >> n;

    // Count the number of groups of each size
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        if (s == 1) cnt1++;
        else if (s == 2) cnt2++;
        else if (s == 3) cnt3++;
        else if (s == 4) cnt4++;
    }

    // Initialize the number of taxis
    int taxis = 0;

    // Each group of size 4 needs its own taxi
    taxis += cnt4;

    // Pair groups of size 3 with groups of size 1
    taxis += cnt3; // Each group of size 3 needs a taxi
    cnt1 -= min(cnt1, cnt3); // Use as many groups of size 1 as possible

    // Pair groups of size 2 with other groups of size 2
    taxis += cnt2 / 2; // Two groups of size 2 fit in one taxi
    cnt2 %= 2;         // Remaining groups of size 2

    // If there's one group of size 2 left, try to pair it with groups of size 1
    if (cnt2 > 0) {
        taxis++;       // Need one more taxi for this group of size 2
        cnt1 -= min(2, cnt1); // Use up to 2 groups of size 1
    }

    // Handle remaining groups of size 1
    if (cnt1 > 0) {
        taxis += (cnt1 + 3) / 4; // Divide remaining groups of size 1 into taxis
    }

    // Output the result
    cout << taxis << endl;
}

int main()
{
    optimize();
    
    solve();

    return 0;
}
/*
explanation about the code:
Input Parsing :
We read the number of groups n and then count how many groups have sizes 1, 2, 3, and 4.
Handling Groups of Size 4 :
Each group of size 4 requires its own taxi, so we add cnt4 directly to the total number of taxis.
Pairing Groups of Size 3 with Groups of Size 1 :
Each group of size 3 requires its own taxi. If there are any groups of size 1 available, we use them to fill up space in these taxis.
Pairing Groups of Size 2 :
Two groups of size 2 can share a taxi. If there’s an odd number of groups of size 2, the last one will need its own taxi, potentially sharing space with groups of size 1.
Handling Remaining Groups of Size 1 :
Any leftover groups of size 1 are grouped into taxis of size 4.
Output :
Finally, we print the total number of taxis required.
Complexity:
Time Complexity : O(n), where n is the number of groups. We process each group once to count their sizes and perform constant-time operations afterward.
Space Complexity : O(1), as we only use a few integer variables.
input:
5
1 2 4 3 3
Execution:
cnt1 = 1, cnt2 = 1, cnt3 = 2, cnt4 = 1
Taxis for groups of size 4: taxis = 1
Taxis for groups of size 3: taxis += 2 → taxis = 3
Remaining groups of size 1 after pairing with size 3: cnt1 = 0
Taxis for groups of size 2: taxis += 1 → taxis = 4
No remaining groups of size 1.

5
1 1 2 3 4
his means there are 5 groups of schoolchildren with sizes: 1, 1, 2, 3, and 4.

Step-by-Step Execution:
Step 1: Count Groups by Size
We count how many groups have sizes 1, 2, 3, and 4:

cnt1 = 2 (two groups of size 1),
cnt2 = 1 (one group of size 2),
cnt3 = 1 (one group of size 3),
cnt4 = 1 (one group of size 4).
Step 2: Handle Groups of Size 4
Each group of size 4 requires its own taxi. Since cnt4 = 1, we need 1 taxi for this group.

taxis = 1.
Step 3: Pair Groups of Size 3 with Groups of Size 1
Each group of size 3 requires its own taxi. If there are any groups of size 1 available, they can share the taxi with the group of size 3.

cnt3 = 1: We need 1 taxi for this group.
cnt1 = 2: We use 1 group of size 1 to fill up space in this taxi.
Remaining cnt1 = 2 - 1 = 1.
taxis += 1 → taxis = 2.
Step 4: Pair Groups of Size 2
Groups of size 2 can combine with other groups of size 2 or with groups of size 1.

cnt2 = 1: There is only 1 group of size 2 , so it needs its own taxi.
cnt1 = 1: We use 1 group of size 1 to fill up space in this taxi.
Remaining cnt1 = 1 - 1 = 0.
taxis += 1 → taxis = 3.
Step 5: Handle Remaining Groups of Size 1
After pairing, there are no remaining groups of size 1 (cnt1 = 0), so no additional taxis are needed.
output: 3

5
1 2 2 2 4
We count how many groups have sizes 1, 2, 3, and 4:

cnt1 = 1 (one group of size 1),
cnt2 = 3 (three groups of size 2),
cnt3 = 0 (no groups of size 3),
cnt4 = 1 (one group of size 4).
Step 2: Handle Groups of Size 4
Each group of size 4 requires its own taxi. Since cnt4 = 1, we need 1 taxi for this group.

taxis = 1.
Step 3: Pair Groups of Size 3 with Groups of Size 1
There are no groups of size 3 (cnt3 = 0), so we skip this step.

Step 4: Pair Groups of Size 2
Groups of size 2 can combine with other groups of size 2 or with groups of size 1.

cnt2 = 3: We pair two groups of size 2 into one taxi.
Two groups of size 2 fit into one taxi → 1 taxi .
Remaining cnt2 = 3 - 2 = 1.
taxis += 1 → taxis = 2.
Now, there is 1 group of size 2 left. This group needs its own taxi, and it can potentially share space with groups of size 1.

cnt2 = 1: The remaining group of size 2 needs a taxi.
cnt1 = 1: We use 1 group of size 1 to fill up space in this taxi.
Remaining cnt1 = 1 - 1 = 0.
taxis += 1 → taxis = 3.




*/