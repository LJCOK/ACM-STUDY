#include <bits/stdc++.h> 
#define IOS ios::sync_with_stdio(false);

using namespace std;
const int maxn=1e5+100;
string a,b;

void slove(){
	cin >> a >> b;
	int la=a.length(),lb=b.length();
	if(a[0]==b[0]){
		printf("YES\n");
		cout << a[0] << "*\n";
		//printf("%c*\n",&a[0]);
		return;
	}
	else if(a[la-1]==b[lb-1]){
		printf("YES\n");
		printf("*");
		cout << a[la-1] << endl;
		//printf("%c\n",&a[la-1]);
		return;
	}
	else{
		for(int i=0;i<la-1;++i){
			for(int j=0;j<lb-1;++j){
				if(a[i]!=b[j]) continue;
				if(a[i+1]==b[j+1]){
					printf("YES\n");
					cout << "*" << a[i] << a[i+1] << "*" << endl;
//					printf("*");
//					printf("%c%c*\n",&a[i],&a[i+1]);
					return;
				}
			}
		}
		printf("NO\n");
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		slove();
	}
	
	
	return 0;
}
