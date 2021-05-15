



1. //O(1)
int fun(int n){
	cout<<n<<endl;
}










2.O(1)
int fun(int n){
	cout<<n;
	cout<<n;
	cout<<n;
}







3.O(N)
void fun(int n){
	int cnt = 0;
	for(int i=1;i<=n;i++){
		cnt++;
	}
}











4.O(N)
void fun(int n){
	int cnt = 0;
	for(int i=1;i<=n;i+=2){
		cnt++;
	}
}













5. O(LOG2(N))
void fun(int n){
	int cnt = 0;
	for(int i=1;i<=n;i*=2){
		cnt++;
	}
}
















6. O(LOG3N)
void fun(int n){
	int cnt = 0;
	for(int i=1;i<=n;i*=3){
		cnt++;
	}
}







7.O(NLOGN)
void fun(int n){
	int cnt = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j*=2){
			cnt++;
		}
	}
}










8.O(N^2)
void fun(int n){
	int cnt = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cnt++;
		}
	}
}









10.O(N^3)
void fun(int n){
	int cnt = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				cnt++;
			}
		}
	}
}




recursive


11. O(N)
int fun (int n){     5 4 3 2 1
	if(n==1)
		return 1;
	return n+fun(n-1);
}





12.O(LOGN)
int fun(int n){   6 3 1
	if(n==1) 
		return 1;
	return fun(n/2);
}
