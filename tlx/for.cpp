#include <stdio.h>
int main() {
  int masukan;
  int k = 0;
  while(scanf("%d", &masukan) != EOF) {
    k += masukan; 
  }
  printf("%d\n", k);
}
/*#include <stdio.h>
int main () {
	int a;
	int jumlah =0;
	
	while(scanf("%d",&a) != EOF) {
		jumlah= jumlah+a;
		
	}
	printf("%d\n",jumlah);
} */