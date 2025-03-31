int isPrime(int x){
    int count=0;
    for(int i=1;i<=x;i++){
        if(x%i==0)
          count++;
    }
    if(count==2)
       printf("1\n");
    else
       printf("0\n");
    return 0;
}
