
#include<stdio.h>
int main (){

int i,n,anton=0,dankin=0;

scanf("%d",&n);

char game[n];
scanf("%s",game);
for(i=0;i<n;i++){

if(game[i]=='A'){
    anton++;
}else if(game[i]=='D'){
    dankin++;
}

}

// printf("%d",anton);
// printf("%d",dankin);
if(anton>dankin){
    printf("Anton");
}else if(dankin>anton){
    printf("Danik");
}else if(anton==dankin){
    printf("Friendship");
}
return 0;


}

