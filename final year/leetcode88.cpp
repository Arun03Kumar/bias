class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        // vector<int> newArray(m + n);

        // for(int i = 0; i < m; i++)
        // {
        //     newArray.push_back(nums1[i]);
        // }

        // for(int i = 0; i < n; i++){
        //     newArray.push_back();
        // }

        // // arr -> 1, 2, 3, 2, 5, 6
        // sort(arr.begin(), arr.end());

        for (int i = 0; i < newArray.size(); i++)
        {
            nums1[i] = newArray[i];
        }

        // O(n + n + nlogn) -> O( nlogn) -> O(nlogn)

        // O(1) < O(log n) < O(n) < O(nlogn) < O(n^2) < O(2^n) < O(n!)

        // two pointer -> variables jo kisi bhi element ko point karte hai, ya kisi bhi element ko point karte hai

        // [1,2,3,0,0,0]
        // [2,5,6]

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] < nums2[j])
            {
                nums1[k] = nums2[j];
                j--;
            }
            else
            {
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }

        while (i >= 0)
        {
            nums1[k] = nums2[i];
            i--;
            k--;
        }

        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }

        // 7,
        // 1, 2, 3, 6

        // nums1 -> 7, 0, 0, 0, 7

        [ 1, 2, 3, 0, 0, 6 ]
            [2, 5, 6]

            [2, 3, 5, 6]
            [2, 3, 5]

            int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0)
        {

            if (nums2[j] > nums1[i])
            {
                nums1[k] = nums1[i];
                i--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (i >= 0)
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }

        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }

        int x = 0, 1, 2,
    }
};