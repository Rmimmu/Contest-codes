#include <iostream>
using namespace std;

int testcase(int n) {
    int penalty[100001] = {0}; // Array to store maximum penalties per day
    int day;

    for (int i = 1; i <= n; i++) {
        cin >> day;
        penalty[day] = max(penalty[day], i); // Store the max penalty for the day
    }

    int sum = 0;
    for (int i = 0; i <= 100000; i++) {
        sum += penalty[i]; // Sum only the non-zero penalties
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << testcase(n) << endl;
    }

    return 0;
}
/*My code which exceeded runtime error:
#include <iostream>
using namespace std;

int testcase(int n) {

    int arr[100], sum=0,maxi1,maxi2;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        maxi1=0,maxi2=0;
        for(int j=i+1; j<n; j++) {

            if(arr[i]==arr[j]){
                    maxi1=maxi2;
                    maxi2=j+1;

            }


        }
        if(maxi2==0){sum=sum+i+1;}
        else if(maxi1==maxi2) {
                     sum=sum+maxi2;
                    }



    }

   return sum;


    }

    int main() {

        int t;
        cin>>t;
        while(t--) {
            int n;
            cin>>n;

            cout<<testcase(n)<<endl;


        }
      return 0;


    }



*/


