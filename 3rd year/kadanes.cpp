// int mx = Integer.MIN_VALUE;
// for(int i = 0; i < arr.length; i++) {
//    int curr = arr[i];
//     for(int j = i + 1; j < arr.length; j++) {
//        curr += arr[j];
//        ans = max(ans, curr);
//     }
// }

n ^ 2->nlogn->O(n)

        int ans = 0;
int curr = 0;
// for(int i = 0; i < arr.size(); i++) {
//     if(curr < 0) curr = arr[i];
//     else curr += arr[i];

//     ans = max(ans, curr);
// }

// curr = -3
// next = 7

// -3 + 7 = 4