int i=1
double float p=1
int n=10

int main(){

for(i=1; i<n; i+=2){
p=1-(1/i+(1/(i+2)));
}

p=p*4;

printf("%d", p);

return 0;
}
