#include <stdio.h>
#include<math.h>
double s,v,u,a,t,s1,s2,v1,v2,u1,u2,a1,a2,t1,t2;
char want,nowant;
int noS(){
    printf("what variable do you want to find : ");
    want=getchar();
    switch(want){
        case 'v':
            printf("input u,a,t\n");
            scanf("%lf %lf %lf",&u,&a,&t);
            v=u+a*t;
            printf("v is %lf",v);
            break;
        case 'u':
            printf("input v,a,t\n");
            scanf("%lf %lf %lf",&v,&a,&t);
            u=v-a*t;
            printf("u is %lf",u);
            break;
        case 'a':
            printf("input v,u,t\n");
            scanf("%lf %lf %lf",&v,&u,&t);
            a=(v-u)/t;
            printf("a is %lf",a);
            break;
        case 't':
            printf("input v,u,a\n");
            scanf("%lf %lf %lf",&v,&u,&a);
            t=(v-u)/a;
            printf("t is %lf",t);
            break;
        default: printf("please input only v u a t\n"); return 0;
        }
        return 1;
}
int noU(){
    printf("what variable do you want to find : ");
    want=getchar();
    switch(want){
        case 'v':
            printf("input s,a,t\n");
            scanf("%lf %lf %lf",&s,&a,&t);
            v=(s/t)+(0.5)*(a*t);
            printf("v is %lf",v);
            break;
        case 's':
            printf("input v,a,t\n");
            scanf("%lf %lf %lf",&v,&a,&t);
            s=(v*t)-(0.5)*(a*(pow(t,2)));
            printf("s is %lf",s);
            break;
        case 'a':
            printf("input v,s,t\n");
            scanf("%lf %lf %lf",&v,&s,&t);
            a=((2*t*v)-(2*s))/pow(t,2);
            printf("a is %lf",a);
            break;
        case 't':
            printf("input v,s,a\n");
            scanf("%lf %lf %lf",&v,&s,&a);
            t1=(v-pow(pow(v,2)-2*a*s,0.5))/a;
            t2=(v+pow(pow(v,2)-2*a*s,0.5))/a;
            u1=v-a*t1;
            u2=v-a*t2;
            if(u1<0){
                t=t2;
            }else {
                t=t1;
            }
            printf("t is %lf",t);
            break;
        default: printf("please input only v s a t\n"); return 0;
        }
        return 1;
}
int noV(){
    printf("what variable do you want to find : ");
    want=getchar();
    switch(want){
        case 'u':
            printf("input s,a,t\n");
            scanf("%lf %lf %lf",&s,&a,&t);
            u=(s/t)-(0.5)*(a*t);
            printf("u is %lf",u);
            break;
        case 's':
            printf("input u,a,t\n");
            scanf("%lf %lf %lf",&u,&a,&t);
            s=(u*t)+(0.5)*(a*(pow(t,2)));
            printf("s is %lf",s);
            break;
        case 'a':
            printf("input u,s,t\n");
            scanf("%lf %lf %lf",&u,&s,&t);
            a=((2*s)-(2*t*u))/pow(t,2);
            printf("a is %lf",a);
            break;
        case 't':
            printf("input u,s,a\n");
            scanf("%lf %lf %lf",&u,&s,&a);
            t1=(0-u-pow(pow(u,2)+2*a*s,0.5))/a;
            t2=(0-u+pow(pow(u,2)+2*a*s,0.5))/a;
            v1=u+a*t1;
            v2=u+a*t2;
            if(v1<0){
                t=t2;
            }else {
                t=t1;
            }
            printf("t is %lf",t);
            break;
        default: printf("please input only u s a t\n"); return 0;
        }
        return 1;
}
int noA(){
    printf("what variable do you want to find : ");
    want=getchar();
    switch(want){
        case 's':
            printf("input u,v,t\n");
            scanf("%lf %lf %lf",&u,&v,&t);
            s=((v+u)*t)/2;
            printf("s is %lf",s);
            break;
        case 't':
            printf("input v,u,s\n");
            scanf("%lf %lf %lf",&v,&u,&s);
            t=((2*s)/(u+v));
            printf("t is %lf",t);
            break;
        case 'u':
            printf("input v,s,t\n");
            scanf("%lf %lf %lf",&v,&s,&t);
            u=((2*s)-(t*v))/t;
            printf("u is %lf",u);
            break;
        case 'v':
            printf("input s,u,t\n");
            scanf("%lf %lf %lf",&s,&u,&t);
            v=((2*s)-(t*u))/t;
            printf("v is %lf",v);
            break;
        default: printf("please input only v u s t\n"); return 0;
        }
        return 1;
}
int noT(){
    printf("what variable do you want to find : ");
    want=getchar();
    switch(want){
        case 'a':
            printf("input u,s,v\n");
            scanf("%lf %lf %lf",&u,&s,&v);
            a=(pow(v,2)-pow(u,2))/(2*s);
            printf("a is %lf",a);
            break;
        case 's':
            printf("input v,a,u\n");
            scanf("%lf %lf %lf",&v,&a,&u);
            s=(pow(v,2)-pow(u,2))/(2*a);
            printf("s is %lf",s);
            break;
        case 'u':
            printf("input v,a,s\n");
            scanf("%lf %lf %lf",&v,&a,&s);
            u=pow((-2*a*s)+pow(v,2),0.5);
            printf("u is %lf",u);
            break;
        case 'v':
            printf("input s,u,a\n");
            scanf("%lf %lf %lf",&s,&u,&a);
            v=pow(pow(u,2)+(2*a*s),0.5);
            printf("v is %lf",v);
            break;
        default: printf("please input only v u a s\n"); return 0;
        }
        return 1;
}
int main(){
    while(1){
    printf("What variable we don't need : ");
    nowant=getchar();
        getchar();
        switch(nowant){
            case 's': if(noS()) return 0; break;
            case 'u': if(noU()) return 0; break;
            case 'v': if(noV()) return 0; break;
            case 'a': if(noA()) return 0; break;
            case 't': if(noT()) return 0; break;
            default: printf("please input only v u a t s\n");
        }
    }
}
