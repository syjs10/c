
#include <stdio.h>
#include <stdlib.h>
int allcount = 0;
int gcd(int x,int y){
    return y ? gcd(y, x % y) : x;
}

int find(int k, int a1, struct Room *room);
struct Room{
    int id;
    int a;
    int crm[500];
};
int n;
int main()
{
    while (~scanf("%d", &n)){
        static struct Room room[500];
        for (int i = 1; i < n + 1; i++) {
            scanf("%d", &room[i].a);
			//room.crm[500] = {0};
            room[i].id = i;
        }
        int x, y;
        for (int i = 1; i < n; i++) {
            scanf("%d%d", &x, &y);
            room[x].crm[0] = -1;
            room[x].crm[i] = y;
        }
        for (int i = 1; i < n + 1; i++) {
            find(i, room[i].a, &room[0]);
        }
        printf("%d\n", allcount);
        allcount = 0;
    }
    return 0;
}
int find(int k, int a1, struct Room *room){
    if (room[k].crm[0] == -1){
        for (int j = 1; j < n; j++) {
            if (room[k].crm[j] = 0) {
                continue;
            }
            if (gcd(room[room[k].crm[j]].a, a1 ) == 1) {
                allcount++;
                find(room[k].crm[j], a1, &room[0]);
            } else {
                find(room[k].crm[j], a1, &room[0]);
            }
        }
    }else {
		return 0;
	}
    
}
