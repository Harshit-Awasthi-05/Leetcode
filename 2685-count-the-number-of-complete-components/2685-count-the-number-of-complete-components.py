class Solution:
    def countCompleteComponents(self, n: int, edges: List[List[int]]) -> int:
        adj_list = defaultdict(list)
        visited = [False] * n
        ans = 0

        for u, v in edges:
            adj_list[u].append(v)
            adj_list[v].append(u)

        def dfs(node):
            nonlocal v, e
            visited[node] = True
            v += 1
            e += len(adj_list[node])

            for neighbor in adj_list[node]:
                if not visited[neighbor]:
                    dfs(neighbor)

        for i in range(n):
            if not visited[i]:
                v = 0
                e = 0
                dfs(i)

                if e == v * (v - 1):
                    ans += 1

        return ans