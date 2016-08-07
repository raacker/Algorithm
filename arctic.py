from math import sqrt
from math import pow
import operator

class Edge(object):
    def __init__(self, start, end, weight):
        self.start = start
        self.end = end
        self.weight = weight

class Spot(object):
    def __init__(self, x,y):
        self.x = x
        self.y = y

def dist(a1, a2):
    return sqrt(pow((a1.x - a2.x),2) + pow((a1.y - a2.y), 2))

C = input()
for i in range(C):
    N = input()
    spots = [];
    edges = [];
    for j in range(N):
        x = input()
        y = input()
        spots.append(Spot(x,y))

    for j in range(N):
        for k in range(j, N):
            if j != k:
                 edges.append(Edge(spots[j], spots[k], dist(spots[j], spots[k])))

    edges.sort(key=operator.attrgetter('weight'))

    tree = set()

    while True:
        edge_counter = 0
        max_weight = 0
        edge = edges.pop(0)
        print "max_wegiht = ", max_weight
        if edge.start not in tree:
            if edge.end not in tree:
                tree.add(edge.end)
            tree.add(edge.start)
            max_weight = edge.weight

        if edge_counter == N-1:
            print max_weight
            break
