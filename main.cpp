#include <iostream>
#include <vector>
#include <ctime>

using namespace std;
int main() {
  int i, numGen, iMin, iMax, N, max, min;
  cout<< "Inserisci il numero di numeri da generare"<< endl;
  cin >> N;
  vector<int> v(N);
  numGen=0;
  for (i = 0; i <= N - 1; i++)
    {
        v[i] = rand() % 1001;
        cout << v[i] << endl;
        if (v[i] % 2 == 0)
        {
            numGen = numGen + 1;
        }
    }
    max = v[0];
    min = v[0];
    iMax = 0;
    iMin = 0;
    for (i = 0; i <= N - 1; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            iMax = i + 1;
        }
        if (v[i] < min)
        {
            min = v[i];
            iMin = i + 1;
        }
    }
    cout << "sono stati generati " << numGen << " numeri pari. Il numero maggiore è " << max << " posizionato nel cassetto n° " << iMax << "Il numero minore è " << min << " posizionato nel cassetto n° " << iMin << endl;
    return 0;
}