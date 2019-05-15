#include <stdio.h>

int string_copy(char *a,char *b){
    int i;
    for(i=0; a[i]!='\0';i++){
        b[i]=a[i];
    }
return i;
}


int main() {
char a[7] = "hello";
char b[7];
int length = string_copy(a, b);
printf("%d %s", length, b);

}



