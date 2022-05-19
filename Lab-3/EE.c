#include<stdio.h>
int main()
{

    char s[101];
    int len,i,a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0,k1=0,l1=0,m1=0,n1=0,o1=0,p1=0,q1=0,r1=0,s1=0,t1=0,u1=0,v1=0,w1=0,x1=0,y1=0,z1=0;
    while(scanf("%d",&len)!=EOF)
    {
        scanf("%s",s);
        for(i=0; i<len; i++)
        {
            if(s[i]=='a'||s[i]=='A')
                a1++;
            else  if(s[i]=='b'||s[i]=='B')
                b1++;
            else  if(s[i]=='c'||s[i]=='C')
                c1++;
            else  if(s[i]=='d'||s[i]=='D')
                d1++;
            else  if(s[i]=='e'||s[i]=='E')
                e1++;
            else  if(s[i]=='f'||s[i]=='F')
                f1++;
            else  if(s[i]=='g'||s[i]=='G')
                g1++;
            else  if(s[i]=='h'||s[i]=='H')
                h1++;
            else  if(s[i]=='i'||s[i]=='I')
                i1++;
            else  if(s[i]=='j'||s[i]=='J')
                j1++;
            else  if(s[i]=='k'||s[i]=='K')
                k1++;
            else  if(s[i]=='l'||s[i]=='L')
                l1++;
            else  if(s[i]=='m'||s[i]=='M')
                m1++;
            else  if(s[i]=='n'||s[i]=='N')
                n1++;
            else  if(s[i]=='o'||s[i]=='O')
                o1++;
            else  if(s[i]=='p'||s[i]=='P')
                p1++;
            else  if(s[i]=='q'||s[i]=='Q')
                q1++;

            else  if(s[i]=='r'||s[i]=='R')
                r1++;
            else  if(s[i]=='s'||s[i]=='S')
                s1++;
            else  if(s[i]=='t'||s[i]=='T')
                t1++;
            else  if(s[i]=='u'||s[i]=='U')
                u1++;

            else  if(s[i]=='v'||s[i]=='V')
                v1++;
            else  if(s[i]=='w'||s[i]=='W')
                w1++;
            else  if(s[i]=='x'||s[i]=='X')
                x1++;
            else  if(s[i]=='y'||s[i]=='Y')
                y1++;
            else  if(s[i]=='z'||s[i]=='Z')
                z1++;

        }
        if(a1>=1&&b1>=1&&c1>=1&&d1>=1&&e1>=1&&f1>=1&&g1>=1&&h1>=1&&i1>=1&&j1>=1&&k1>=1&&l1>=1&&m1>=1&&n1>=1&&o1>=1&&p1>=1&&q1>=1&&r1>=1&&s1>=1&&t1>=1&&u1>=1&&v1>=1&&w1>=1&&x1>=1&&y1>=1&&z1>=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
