import sys
import bisect

input = sys.stdin.readline

n = int(input())
projects = []

for _ in range(n):
    a, b, p = map(int, input().split())
    projects.append((b, a, p))  # sort by end time

# Sort by ending time
projects.sort()

# Extract end times for binary search
ends = [proj[0] for proj in projects]

# dp[i] = max reward using first i projects
dp = [0] * (n + 1)

for i in range(1, n + 1):
    end, start, reward = projects[i - 1]

    # Find last project that ends before current start
    j = bisect.bisect_left(ends, start)

    dp[i] = max(dp[i - 1], dp[j] + reward)

print(dp[n])
