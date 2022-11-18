    #include <iostream>
    using namespace std ;
    /*                           Free Ice Cream
     * at first we need to in declare four integer variables and one of character type one of the integers to get the number of operations (let's call it op),and another one for counting how many times have the children gone away sad (let's call it sad), and another one for the intial number of packs(let's call it pks) ,and the last on for the next number of packs in the loop(let's call it npks), and the charcter type variable for the sign(let's call it c).
     * get the number of operations and packs.
     * we can implement any type of loops ( while , for , do while ) for the following operation.
     * make a condition for the loop from one to the number of operations( 1 : op ) in the outer loop.
     * in the body of the loop we will get the sign of the operation and the number of the packs.
     * if the sign was '+' we will increas the current number of packs (pks variable).
     * else, it's mean that there are children want ice-cream , if you have enough number of ice-cream of course you will geve them the ice-cream and decreas the total number of paks by thier number (pks variable) ,else all of them wont have anything and they will be sad, so we will increas sad variable by one.
     *at the end of this prosses we should have the remaining number of ice-cream packs in our variable (pks) , and how many times the children went upset in our variable (sad) , so print them.
     * Prepared By: Ahmed Mohsen (group 8).
     */
    int main() {
        long long pks,op,sad=0;
        cin >> op >> pks;
        for (int i = 1; i <= op ; ++i) {
            char s;
            long long num;
            cin >> s >>  num;
            if (s =='+' )
                pks += num;
            else{
                if(num > pks)
                  sad++;
                else
                    pks -= num;
            }
        }
        cout << pks << " " << sad ;
    }
