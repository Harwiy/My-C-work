#include<bits/stdc++.h>
using namespace std;
int n;
int pos[10005];
struct students{
    int Chinese,math,English,id,ranking,cmmax,sum;
}stu[10005];
bool cmp(students a,students b){
    if(a.sum == b.sum){
        if(a.sum-a.English == b.sum-b.English){
            return a.cmmax > b.cmmax;
        }else{
            return a.sum-a.English > b.sum-b.English;
        }
    }else{
        return a.sum > b.sum;
    }
}
int main(){
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        int ch,ma,en;
        scanf("%d%d%d",&ch,&ma,&en);
        stu[i] = {ch,ma,en,i,0,max(ch,ma),ch+ma+en};
    }
    sort(stu+1,stu+1+n,cmp);
    for(int i = 1; i <= n; i++){
        stu[i].ranking = i;
        if(stu[i].cmmax == stu[i-1].cmmax && stu[i].sum == stu[i-1].sum && stu[i].sum-stu[i].English == stu[i-1].sum-stu[i-1].English){
            stu[i].ranking = stu[i-1].ranking;
        }
        pos[stu[i].id] = i;
    }
    for(int i = 1; i <= n; i++){
        printf("%d\n",stu[pos[i]].ranking);
    }
    return 0;
}

