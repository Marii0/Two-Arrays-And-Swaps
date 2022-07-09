#include "bits/stdc++.h"
// assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr << #x << "=" << (x) << endl;
#define RAYA cerr << "======================" << endl;
#define RAYAS cerr << "......................" << endl;
//#define DBG(x) ;
//#define RAYA ;
//#define RAYAS ;
int sumavec(vector<int> vec)
{
    int sumavec = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sumavec += vec[i];
    }
    return sumavec;
}
//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int tC, n, k, num;
    vector<int> vec;
    vector<int> vecc;
    bool bol;

    cin >> tC;
    while (tC--)
    {
        bol = true;
        vec.clear();
        vecc.clear();
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            vecc.push_back(num);
        }
        if (k == 0)
        {
            cout << sumavec(vec) << endl;
        }
        else
        {
            sort(vec.begin(), vec.end());
            sort(vecc.begin(), vecc.end(), greater<int>());

            for (int i = 0; i < n; i++)
            {
                if (vec[i] < vecc[i])
                {
                    swap(vec[i], vecc[i]);
                    k--;
                }
                if (k == 0)
                {
                    cout << sumavec(vec) << endl;
                    bol = false;
                    break;
                }
            }
            if (bol)
            {
                cout << sumavec(vec) << endl;
            }
        }
    }
}
//--------------------EOSOLUTION---------------------------------