#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>

#define INF 999999999

using namespace std;

int v, e, k, l;
int* distances;

vector<pair<int, int>> graph[1000001];

void dijkstra(int);

int main(void){
    scanf("%d %d %d %d", &v, &e, &l, &k);

    k -= 1;
    
    for(int i = 0; i < e; i++){
        int a, b, c;
        scanf("%d %d", &a, &b);

        graph[a - 1].push_back({b - 1, 1});
        // graph[b - 1].push_back({a - 1, c});
    }

    distances = (int*)malloc(sizeof(int) * v);

    dijkstra(k);
    
    int count = 0;
    for(int i = 0; i < v; i++){
        if(distances[i] == l){
            printf("%d\n", i + 1);
            count++;
        }
    }

    if(count == 0){
        printf("-1\n");
    }
}

void dijkstra(int start){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    fill(distances, distances + v, INF);
    pq.push({distances[start]=0, start});

        while(!pq.empty()){
            auto now = pq.top();
            pq.pop();

            if(now.first > distances[now.second]) continue;
            for(int i =0; i < graph[now.second].size(); i++){
                int nextDist = now.first + graph[now.second][i].second;
                if(nextDist < distances[graph[now.second][i].first])
                    pq.push({distances[graph[now.second][i].first] = nextDist, graph[now.second][i].first});
            }
        }
}