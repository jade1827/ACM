#include<stdio.h>
#include<stdbool.h>

const int MAX_N = 50;

int main(int argc, const char *argv[])
{
	int n,m,k[MAX_N];
	//read from input
	printf("please input the counts and the result\n");
	scanf("%d %d",&n,&m);
	
	printf("please input the number\n");
	for(int i=0; i<n; i++){
		scanf("%d",&k[i]);
	}

	//cycle 4 times to find result
	bool f = false;
	for(int a=0; a<n; a++){
		for(int b=0; b<n; b++){
			for(int c=0; c<n; c++){
				for(int d=0; d<n; d++){
					if(k[a]+k[b]+k[c]+k[d] == m){
						f = true;
					}
				}
			}
		}
	}

	//puts result
	if(f)
		puts("Yes");
	else
		puts("NO");
	
	return 0;
}
