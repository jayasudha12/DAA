#include <iostream>;
#include <cstring>;

using namespace std;
int main(){
char text[] = "Indian Ocean";
char pattern[] = "India";
int M = strlen(pattern);
int N = strlen(text);
int j;

	for (int i = 0; i <= N - M; i++) {

       for (j = 0; j < M; j++)
			if (text[i + j] != pattern[j])
				break;

		if (j== M)
			cout << "Pattern found at index " << i << endl;
	}

}
