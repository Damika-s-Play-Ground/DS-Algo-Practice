import sys
from collections import defaultdict

sys.stdin = open("Practice for codesqud\input.txt")


def input():
    return sys.stdin.readline().strip('\r\n')

class Graph:
    def __init__(self,v):
        self.V = v
        self.graph = defaultdict(list)
    def insertEdge(self,u,v):
            self.graph[u].append(v)
            self.graph[v].append(u)

    def showBridges(self,start):
        visited = set()
        self.DFSUtil(start,visited)
        
    def DFSUtil(self,v,visited):
        visited.add(v)
        print(v, end=" ")
        

def main():
    n = int(input())
    for i in range(n):
        v, e = map(int,input().split())
        g = Graph(v)
        for j in range(e):
            a, b = map(int,input().split())
            g.insertEdge(a,b)
        g.showBridges()    



if __name__ == '__main__':
    main()