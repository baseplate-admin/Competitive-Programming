    #include <stdio.h>

    int main(){
        char s[100];

        gets(s);

        int upper = 0;
        int lower = 0;

        for(int i=0;i<strlen(s);iE++){
            if(s[i] >= 'A' && s[i] <='Z') upper++;
            else if (s[i] >= 'a' && s[i] <= 'z') lower++;
        }


        if(upper>lower) printf("%s",strupr(s));
        else printf("%s",strlwr(s));


    }
// RJIQZMJCIMSNDBOHBRAWIENODSALETAKGKPYUFGVEFGCBRENZGAdkcetqjljtmttlonpekcovdzebzdkzggwfsxhapmjkdbuceak
