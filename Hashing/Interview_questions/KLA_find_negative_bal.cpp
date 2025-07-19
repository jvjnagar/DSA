#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*You have a 2 dimensional array arr[i, 3], where as arr[i][0] is a person name, 
arr[i][1] is another person name, arr[1][3] is a value(can be negative also). 
Need to sum the values of arr[i][0] and subtract it with sum of the values of arr[i][1] 
with the condition that person name is same. Find the list of person whose final amount is lesser than .
For eg:
arun balu 3
balu arun 2
gopi arun 3
balu gopi 4
then
arun=(3)-(2+3)=-2
balu=(2+4)-(3)=3
gopi=(3)-(4)=-4
op: "gopi".*/

struct finData
{
    string payer;
    string payee;
    int amount;
};

string find_most_negative_balance_person(vector<finData> arr)
{
    unordered_map<string, int> mp;
    string negative_bal_person = "None";
    int negtive_bal=100;
    for (auto &trxn: arr)
    {
        mp[trxn.payer] += trxn.amount;
        mp[trxn.payee] -= trxn.amount;
    }
    for (auto &prson: mp)
    {
        if (prson.second < 0 && prson.second < negtive_bal)
        {
            negative_bal_person = prson.first;
            negtive_bal = prson.second;
        }
    }
    return negative_bal_person;
}


int main()
{
    vector<finData> arr = {
              {"Arun", "Balu", 3},
              {"Balu", "Arun", 2},
              {"Gopi", "Arun", 3},
              {"Balu", "Gopi", 4}};
    string most_negative_bal_person = find_most_negative_balance_person(arr);
    cout<< most_negative_bal_person;
    return 0;
}
