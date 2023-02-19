#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 *      Session: Binary Search.1
 *      Instructor: Ahmed Ramadan
 *      FU-ICPC Community
 *      28 - 1 - 2023
 */

/*
 * n = 10
 * arr : 2 9 0 7 3 8 2 6 4 9
 * is x = 6 in the arr ?
 * use linear search
 * loop for all the arr elements and check if element == x ?
 * complexity O(n)
 */
void Example_1()
{
    int n = 10 ;
    vector<int> arr = {2, 9, 0, 7, 3, 8, 2, 6, 4, 9} ;
    int target = 6 ;
    bool found = 0 ;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            found=1 ;
            break;
        }
    }
    cout<<target<<" ";
    if(found) cout<<"is";
    else cout<<"is not";
    cout<<" in the array"<<endl;
}

/*
 *  assume we have arr = 2 6 6 7 9 9 9 12 16
 *  sorted in non-decreasing order
 *
 *  if we hold index = 5 , with value 9
 *  lets go right, what you notice ?
 *      -> numbers are increasing or at least remain without change : 9 or greater
 *  lets go left, what you notice ?
 *      -> numbers are decreasing or at least remain without change : 9 or lesser
 *  so it's guaranteed that for every index > 5
 *      -> arr[index] >= 9
 *  and for every index < 5
 *      -> arr[index] <= 9
 *
 */

/*
 * in Example 1 what if data is sorted ?
 *  n = 10
 * arr : 0 2 2 3 4 6 7 8 9 9
 * is 6 in the arr ?
 * use binary search
 * complexity O( log(n) )
 */
void Example_2()
{
    int n = 10 ;
    vector<int> arr = {0, 2, 2, 3, 4, 6, 7, 8, 9, 9} ;
    int target = 6 ;
    bool found = 0 ;

    int left=-1 , right=n ;
    while (left<right-1)
    {
        int middle = (left+right)/2 ;
        if(arr[middle]==target)
        {
            found=1 ;
            break;
        }
        else if(arr[middle]>target)
        {
            right=middle ;
        }
        else if(arr[middle]<target)
        {
            left= middle ;
        }
    }
    cout<<target<<" ";
    if(found) cout<<"is";
    else cout<<"is not";
    cout<<" in the array"<<endl;
}
/*
 * Problem 1
 * try to solve :
 * https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
 *
 * you have an array of size N integers SORTED in non-decreasing order.
 * you are to be asked Q queries
 * in each query you are given an integer X
 * each query asks : is X in array ?
 * output YES or NO
 *
 * (1 ≤ n,k ≤ 1e5 )
 * (-1e9 <= arr[i] <= 1e9)
 */
void solve_problem_1()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n) ;
    for(auto &it:v)
    {
        cin>>it;
    }
    while(q--)
    {
        int target;
        cin>>target;
        bool found = 0 ;
        int left=-1 , right=n;
        while(left < right-1)
        {
            int mid= (left+right)/2 ;
            if(v[mid]==target)
            {
                found=1;
                break;
            }
            if(v[mid]>target)
            {
                right= mid;
            }
            if(v[mid]<target)
            {
                left=mid ;
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

/*
 * you have an array of size N integers SORTED in non-decreasing order.
 * EACH INTEGER OCCURS NO MORE THAN ONCE
 * given an integer X.
 * if X is in the array output it's index
 * else output -1
 */
void Example_3()
{
    int n;
    cin>>n;

    vector<int> v(n) ;
    for(auto &it:v)
    {
        cin>>it;
    }

    int target;
    cin>>target ;

    int left=-1 , right=n , idx = -1 ;
    while (left<right-1)
    {
        int mid = (left+right)/2 ;
        if(v[mid]==target)
        {
            idx=mid;
            break;
        }
        else if(v[mid]>target)
        {
            right=mid ;
        }
        else if(v[mid]<target)
        {
            left= mid ;
        }
    }
    cout<<idx<<endl;
}
/*
 * problem 2
 * interactive problem
 * guessing game
 *
 * you are playing a game with your friend Ramadan
 * Ramadan is about to choose a number from 0 to 1e9
 * you are asked to guess that number
 * you have the right to ask Ramadan no more than 32 questions
 * In each question you ask him for a number x
 *
 * Is x the hidden number ?
 * if it is, Ramadan input =
 * else if x is smaller than the hidden number, Ramadan input <
 * else if x is greater than the hidden number, Ramadan input >
 *
 * you have to count number of each question you ask
 *
 * Can you guess the number that Ramadan choose ?
 *
 * notes:
 *      -> don't use printf
 *      -> don't use any code affect output displaying
 *      -> dont use ( ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL); ) for fasting input/output
 *      -> range to search in is [0:1e9] = [0:1000000000]
 */

void solve_problem_2()
{
    int left=-1 , right=1e9+1 ;
    int i=0 ;
    while(left<right-1)
    {
        int mid = (left+right)/2 ;

        cout<<++i<<" - is "<<mid<<" the hidden number ? "<<endl;
        char ch ;
        cin>>ch ;

        if(ch=='=')
        {
            cout<<"Number is "<<mid<<endl;
            break;
        }
        else if(ch=='>') right=mid ;
        else if(ch=='<') left=mid;
    }
}

/*
 * what if in problem 1:
 * occurance of integers be more than onec
 *
 * EX:
 *      index : 0 1 2 3 4 5 6 7 8  9
 *      array : 1 2 2 6 6 9 9 9 17 100
 *      what if you are asked for index of an integer x ?
 *
 *      in this problem there are 3 scenarios:
 *
 *      1- if not mentioned that which index to output
 *          -> output any index has value = x
 *          -> normal binary search
 *
 *      2- asked for the greatest index have value = x
 *          -> if x = 9 : output = 7
 *          -> if x = 2 : output = 2
 *          -> if x = 3 : output = (not found)
 *          -> Examble 4
 *
 *      3- asked for the least index has value = x
 *          -> if x = 9 : output = 5
 *          -> if x = 2 : output = 1
 *          -> if x = 3 : output = (not found)
 *          -> Examble 5
 */
void Example_4()
{
    vector<int> v={1, 2, 2, 6, 6, 9, 9, 9, 17, 100} ;

    int target;
    cin>>target ;

    int left=-1 , right=v.size() ;
    while (left<right-1)
    {
        int mid = (left+right)/2 ;
        if(v[mid]>target)
        {
            right=mid ;
        }
        else if(v[mid]<=target)
        {
            left= mid ;
        }
    }
    if(target==v[left])
    {
        cout<<"the greatest index has value = "<<target<<" is "<<left<<endl;
    }
    else
    {
        cout<<target<<" is not found in the array "<<endl;
    }
}
void Example_5()
{
    vector<int> v={1, 2, 2, 6, 6, 9, 9, 9, 17, 100} ;

    int target;
    cin>>target ;

    int left=-1 , right=v.size() ;
    while (left<right-1)
    {
        int mid = (left+right)/2 ;
        if(v[mid]>=target)
        {
            right=mid ;
        }
        else if(v[mid]<target)
        {
            left= mid ;
        }
    }
    if(target==v[right])
    {
        cout<<"the least index has value = "<<target<<" is "<<right<<endl;
    }
    else
    {
        cout<<target<<" is not found in the array "<<endl;
    }
}

/*
 * very important
 * notice the different between Example 4 and Example 5
 *
 */

/* Problem 2
 * try to solve:
 * https://www.interviewbit.com/problems/smaller-or-equal-elements/
 * Given a sorted array A of size N.
 * Find number of elements which are less than or equal to B.
 * 1 <= N <= 1e6
 * 1 <= A[i], B <= 1e9
 *
 * input : A = [1, 3, 4, 4, 6] , B = 4
 * output: 4
 *
 * input : A = [1, 2, 5, 5] , B = 3
 * output: 2
 *
 * input : A = [7, 12, 15, 15 , 20, 26] , B = 3
 * output: 0
 *
 */

void solve_problem_3()
{
    vector<int> A = {1, 3, 4, 4, 6};
    int B=4 ;
//  ----------------------- A and B are given in the problem, don't have to define if you are solving in interviewbit.com

    int left=-1 , right= A.size() ;
    while (left<right-1)
    {
        int mid = (left+right)/2 ;
        if(A[mid]>B)
        {
            right=mid ;
        }
        else if(A[mid]<=B)
        {
            left= mid ;
        }
    }
    cout<<left+1<<endl;

}
/* Problem 3
 * try to solve:
 * https://www.interviewbit.com/problems/sorted-insert-position/
 * Given a sorted array A and a target value B
 * return the index if the target is found.
 * If not, return the index where it would be if it were inserted in order.
 * You may assume no duplicates in the array.
 *
 * 1 <= |A| <= 100000
 * 1 <= B <= 1e9
 *
 * input : A = [1, 3, 5, 6] , B = 5
 * output: 2
 *
 * input : A = [1, 3, 5, 6] , B = 2
 * output: 1
 *
 */
void solve_problem_4()
{
    vector<int> A = {1, 3, 5, 6};
    int B=5 ;
//  ----------------------- A and B are given in the problem, don't have to define if you are solving in interviewbit.com

    int left=-1, right=A.size();
    while(left<right-1)
    {
        int mid= (left+right)/2 ;
        if(A[mid]<=B)
        {
            left=mid ;
        }
        else
        {
            right=mid ;
        }
    }

    if(A[left]!=B) left++;

    cout<<left<<endl;
}

/*
 * problem 4
 * try to solve :
 * https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
 * Given an array of n numbers, sorted in non-decreasing order, and k queries.
 * For each query, print the maximum index of an array element not greater than the given one.
 *
 * (0<n,q≤1e5)
 * input:
 * 5 5
 * 3 3 5 8 9
 * 2 4 8 1 10
 * output:
 * 0 2 4 0 5
 *
 * hint :
 * not greater than mean -> smaller than or equal
 * which pointer (left or right) point to the elements smaller than or equal a value x ?
 * it's the left pointer
 *
 */

void solve_problem_5()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n) ;
    for(auto &it:v)
    {
        cin>>it;
    }
    while(q--)
    {
        int target;
        cin >> target;
        int left = -1, right = n;
        while (left < right - 1)
        {
            int mid = (left + right) / 2;
            if (v[mid] > target)
            {
                right = mid;
            }
            else if (v[mid] <= target)
            {
                left = mid;
            }
        }
        cout<<left+1<<endl;
        // why +1 ? because array in our problem is one-based, while we deal with it as zero-based
    }
}
/*
 * problem 6
 * try to solve:
 * https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
 *
 * Given an array of n numbers, sorted in non-decreasing order, and k queries.
 * For each query, print the minimum index of an array element not less than the given one.
 * (0<n,k≤105)
 * input:
 * 5 5
 * 3 3 5 8 9
 * 2 4 8 1 10
 * output:
 * 1 3 4 1 6
 *
 * hint :
 * not less than mean -> greater than or equal
 * which pointer (left or right) point to the elements greater than or equal a value x ?
 * it's the right pointer
 */
void solve_problem_6()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n) ;
    for(auto &it:v)
    {
        cin>>it;
    }
    while(q--)
    {
        int target;
        cin >> target;
        int left = -1, right = n;
        while (left < right - 1)
        {
            int mid = (left + right) / 2;
            if (v[mid] >= target)
            {
                right = mid;
            }
            else if (v[mid] < target)
            {
                left = mid;
            }
        }
        cout<<right+1<<endl;
        // why +1 ? because array in our problem is one-based, while we deal with it as zero-based
    }
}
/*
 * problem 7
 * try to solve:
 * https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
 * You are given an array a of n integers
 * Your task is to response to the queries like "How many numbers' values are between l and r?"
 * 1 ≤ n ≤ 1e5
 * −1e9 ≤ a[i] ≤ 1e9
 * 1 ≤ k ≤ 1e5
 *
 * input:
 * 8
 * 1 2 2 2 9 9 9 10
 * 5
 * 2 2
 * 9 9
 * 2 9
 * 3 8
 * 3 9
 * output:
 * 3 3 6 0 3
 *
 */

void solve_problem_7()
{
    int n;
    cin>>n;
    vector<int> v(n) ;
    for(auto &it:v)
    {
        cin>>it;
    }

    sort(v.begin(),v.end()) ;
    // that's because data isn't sorted

    int queries ;
    cin>>queries ;
    while (queries--)
    {
        int start_of_range , end_of_range ;
        cin>>start_of_range>>end_of_range;

        int left = -1, right = n;
        while (left < right - 1)
        {
            int mid = (left + right) / 2;
            if (v[mid] > end_of_range)
            {
                right = mid;
            }
            else if (v[mid] <= end_of_range)
            {
                left = mid;
            }
        }
        int greatest_index_has_value_less_than_or_equal_to_end_of_range = left ;

        left = -1, right = n;
        while (left < right - 1)
        {
            int mid = (left + right) / 2;
            if (v[mid] >= start_of_range)
            {
                right = mid;
            }
            else if (v[mid] < start_of_range)
            {
                left = mid;
            }
        }
        int least_index_has_value_greater_than_or_equal_to_end_of_range = right ;

        cout<<greatest_index_has_value_less_than_or_equal_to_end_of_range - least_index_has_value_greater_than_or_equal_to_end_of_range + 1<<" ";
    }
}
int main()
{

    // call Example or problem function to display solution

//Example_1() ;
//Example_2();
//Example_3();
//Example_4();
//Example_5();
//solve_problem_1();
//solve_problem_2();
//solve_problem_3();
//solve_problem_4();
//solve_problem_5();
//solve_problem_6();
//solve_problem_7();

    return 0;
}
