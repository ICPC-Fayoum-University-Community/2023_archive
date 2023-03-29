    #include <iostream>
    using namespace std ;
    /*                           Shape3
     * in this problem we can divide it into two parts as follows.
     * at first we need to in declare one integer variable to get the number of rows for one of these parts.
     * get the number of rows.
     * we can implement any type of loops ( while , for , do while ) for the following operation.
     * we will need an integer variable and intialize it with one ( let's call it num variable ) , and another one and intialize it with the same number of rows - 1 (let's call it spaces).
     * we will implement nested loop for each part .
     * make a condition for the loop from one to the number of rows( 1 : rows ) in the outer loop in the first part , and at every iteration num variable will be increased by two and spaces variable will be decreased by one .
     * in the first iner loop we will print spaces number of ' ' in a sengle line .
     * in the second iner loop we will print num number of '*' in the same sengle line .
     * So, we are done with the first part.
     * make spaces variable equal to zero.
     * the second and the final part is very similar to the first , but we will count backwords as follows .
     * of course we will implement nested loop for this part too, in the outer loop in the second part , and at every iteration num variable will be decreased by two and spaces variable will be increased by one .
     * in the first iner loop we will print spaces number of ' ' in a sengle line .
     * in the second iner loop we will print num number of '*' in the same sengle line .
     * we are done with this simple problem ;)
     * Prepared By: Ahmed Mohsen (group 8).
     */
    int main () {
        /// first part
        int n , num = 1 , spaces ;
        cin >> n;
        spaces= n-1 ;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= spaces ; ++j) {
                cout<<' ';
            }
            for (int j = 1; j <= num ; ++j) {
                cout <<'*' ;
            }
            num += 2 ;
            spaces -- ;
            cout << endl ;
                }
        spaces = 0 ;
        /// second part
        for (int i = 1; i <= n; ++i) {
            num -= 2 ;
            for (int j = 1; j <= spaces ; ++j) {
                cout<<' ';
            }
            for (int j = 1; j <= num ; ++j) {
                cout <<'*' ;
            }
            ++spaces;
            cout << endl ;
        }
    }
