#include <stdio.h>

int main(){
int x = 1;
int y = 2;
char lista[5];
for(int i = 0; i < 5; i++){
    printf("Digite: ");
    scanf("%c", &lista[i]);
}

for(int i = 0; i < 5; i++){
    printf("%c", lista[i]);
}

return 0;
}