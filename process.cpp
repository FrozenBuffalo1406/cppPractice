#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, i, j, k, hit = 0;
    // proses input jumlah frame dan process
    cout << "Input Jumlah Frame : ";
    cin >> n;
    cout << "Input Jumlah Process : ";
    cin >> m;
    vector<int> p(m);
    vector<int> hi(m);
    cout << "Input Process : ";
    for (i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    cout << "\n";
    vector<vector<int>> a(n);
    for (i = 0; i < n; i++)
    {
        a[i] = vector<int>(m, -1);
    }
    map<int, int> mp;
    for (i = 0; i < m; i++)
    {
        vector<pair<int, int>> c;
        for (auto q : mp)
        {
            c.push_back({q.second, q.first});
        }
        sort(c.begin(), c.end());
        bool hasrun = false;
        for (j = 0; j < n; j++)
        {
            if (a[j][i] == p[i])
            {
                hit++;
                hi[i] = 1;
                mp[p[i]]++;
                hasrun = true;
                break;
            }
            if (a[j][i] == -1)
            {
                for (k = i; k < m; k++)
                    a[j][k] = p[i];
                mp[p[i]]++;
                hasrun = true;
                break;
            }
        }
        if (j == n || hasrun == false)
        {
            for (j = 0; j < n; j++)
            {
                // jika nilai
                if (a[j][i] == c[c.size() - 1].second)
                {
                    // menghapus nilai a[j][i]
                    mp.erase(a[j][i]);
                    // mengisi/menambahkan nilai a[j][i]
                    for (k = i; k < m; k++)
                        a[j][k] = p[i];
                    mp[p[i]]++;
                    break;
                }
            }
        }
        for (auto q : mp)
        {
            if (q.first != p[i])
            {
                mp[q.first]++;
            }
        }
    }
    // menampilkan output yang sebelumnya telah diinput
    cout << "Process ";
    for (i = 0; i < m; i++)
    {
        cout << p[i] << " ";
    }
    cout << "\n";
    // melakukan process perulangan untuk for sebanyak jumlah frame
    for (i = 0; i < n; i++)
    {
        cout << "Frame " << i << " ";
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == -1)
                // jika memori belum ditempati atau bersifat null maka tampil E
                cout << "E ";
            else
                // jika tidak maka menganti nilai dari frame
                cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "        ";
    // perulangan untuk pengecekan
    for (i = 0; i < m; i++)
    {
        // jika nilai hi[i] bernilai sama dengan 0 maka cetak spasi
        if (hi[i] == 0)
            cout << "  ";
        else
            // jika nilai hi[i] bernilai selain dari 0 maka cetak hi[i]/1
            cout << hi[i] << " ";
    }
    cout << "\n";
    // menampilkan hit atau yang nilai halamannya yang sama
    cout << "Hit " << hit << endl;
    // menampilakn page fault atau yang nilai halamannya tidak sama maka diganti
    cout << "Page Fault " << m - hit << endl;
    return 0;
}