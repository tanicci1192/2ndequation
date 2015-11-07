#include<stdio.h>
#include<time.h>

int main(void){
///*
	clock_t start, end;
//*/
	int m = 0;
	unsigned long int ans = 0;
	int ret = scanf("%d",&m);

	start = clock();
	
	int b = 1;
	int b2 = 0;
	int b24 = 0;
	
	int a = 1;
	
	for(b = 1; b <= m; ++b){
		b2 += (b<<1)-1;
		b24 = b2 >> 2;
		for(a = 1; a <= b24; a++){
			ans += (int)(b2/(4*a));
		}
	}
///*
	end  = clock();
//*/	
	printf("ans = %lu\ttime = %lfsec\n",ans,(double)(end - start)/CLOCKS_PER_SEC);
//	printf("%lu\n",ans);
	return 0;
}
