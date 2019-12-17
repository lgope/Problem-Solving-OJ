#include <iostream>
using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100005
#define mod 10000007
#define Accepted 0

int main()
{
    int sh, eh, sm, em;

    cin >> sh >> sm >> eh >> em;

    if (sh == eh && sm == em) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }

    else if (eh > sh && em > sm) {
        int h = eh - sh;
        int m = em - sm;

        cout << "O JOGO DUROU "<< h <<" HORA(S) E "<< m <<" MINUTO(S)" << endl;
    } else {
        int m = 60 + (em - sm);

        cout << "O JOGO DUROU 0 HORA(S) E "<< m <<" MINUTO(S)" << endl;
    }

    return Accepted;
}
