#include<stdio.h>
#include<string.h>

//int main()
//{ 
   // char s1[]="safikul";
   // char s2[]="alam";
   // strcat(s1,s2);
   //printf("The string after conconation is : %s \n",s1);
   

//}

int main(){
    int l1,l2;
    char s1[] = "safikul";
    char s2[]="alam";
    l1=strlen(s1);
    l2=strlen(s2);
    int i;
    for (i=0;i<=l2;i++){
        s1[l1+i]=s2[i];
    }
    printf("The string after conconation is : %s \n", s1);
}
