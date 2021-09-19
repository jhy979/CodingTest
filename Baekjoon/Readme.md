# Baekjoon
> 출처 : https://covenant.tistory.com/224
## 준비운동 PART1. 튼튼한 기본기

> 알고리즘 공부를 시작하면 만나게되는 약수, N진수, GCD, LCM, 소수 등의 문제는 변형하여 출제 혹은 어려운 문제를 풀이의 중간 단계에 들어가기도 합니다. 화이트보드 면접을 준비한다면 다양한 정렬 주제와 함께 준비해야할 1순위이기도 합니다. 파이썬으로 코테를 준비하는 분들이라면 내장함수를 사용하지말고 직접 구현해보세요.

- [x] [약수 구하기](https://www.acmicpc.net/problem/2501) (🥉 브론즈 3티어) <br>
👉` for문에서 /2를 해버리는 방법도 있음.`<br><br>
- [x] [이진수](https://www.acmicpc.net/problem/3460) (🥉 브론즈 3티어) <br>
👉 `while 반복문 탈출 조건을 웬만해서는 앞에 쓰는 습관을 들여보자!`<br><br>
- [x] [최소, 최대](https://www.acmicpc.net/problem/10818) (🥉 브론즈 3티어) <br>
👉 `vector에서도 arr.front() arr.back()이 가능.`<br><br>
- [x] [지능형 기차 2](https://www.acmicpc.net/problem/2460) (🥉 브론즈 3티어) <br>
👉 `while문 탈출 조건을 웬만해서는 앞에 써보자!`<br><br>
- [x] [피보나치 수 5](https://www.acmicpc.net/problem/10870) (🥉 브론즈 2티어) <br>
👉 `재귀는 항상 base case를 신경 써야함.` <br><br>
- [x] [일곱 난쟁이](https://www.acmicpc.net/problem/2309) (🥉 브론즈 2티어) <br>
👉 `단순 구현 문제..` <br><br>
- [x] [최대공약수와 최소공배수](https://www.acmicpc.net/problem/2609) (🥈실버 5티어) <br>
👉 `a-b b-a 계속하면 됨`<br>
👉 `나보다 더 편하게 재귀 (b, a%b) 를 b==0 까지 계속 반복한 경우도있음. `<br><br>
- [x] [N번째 큰 수](https://www.acmicpc.net/problem/2693) (🥈실버 5티어) <br>
👉 `단순 구현 문제! 단, vector의 재사용을 해야하는 위치를 잘 생각합시다!`<br><br>
- [x] [소수 찾기](https://www.acmicpc.net/problem/1978) (🥈실버 4티어) <br>
👉 `소수는 에라토스테네스의 체` <br><br>
- [x] [쉽게 푸는 문제](https://www.acmicpc.net/problem/1292) (🥈실버 4티어) <br>
👉 `모듈을 분리, 함수를 분리하는 방법을 생각하여 조금 더 코드를 깔끔하게 만들어 봅시다.`<br><br>
- [x] [소수](https://www.acmicpc.net/problem/2581) (🥈실버 4티어) <br>
👉 `소수는 에라토스테네스의 체`<br><br>
## 준비운동 PART2. 약점 체크

문제풀이를 쭉쭉하기 전, 기본 알고리즘을 잘 습득했는지 점검할 수 있는 문제를 소개합니다. 뼈대 문제는 시간을 두고 반복 구현하여 손에 익혀서 응용문제가 나왔을 때 유연하게 대처할 수 있는 생각을 길러야 합니다.

- [x] 재귀 탐색의 기본: [연산자 끼워넣기](https://www.acmicpc.net/problem/14888) (🥈실버 1티어) <br>
👉 `dfs를 사용해서 풀이, min max 비교를 위한 초기화 시 max = -1e9로 아주 큰 값을 집어 넣자.`<br>
👉 `나는 비교를 위한 max=-1을 집어넣는 안 좋은 습관을 가지고 있음. 반드시 -1e9로 넣는 습관을 들이자.`<br><br>
- [ ] 스택의 응용: [괄호의 값](https://www.acmicpc.net/problem/2504) (🥈실버 2티어) <br>
👉 `int형과 char형, ASCII코드에서 엄청난 고생을 했다... 이 부분을 어떻게 구현해야할까 항상 생각하자.`<br>
👉 `stack.top() 연산시에는 반드시 stack.empty()로 스택의 상태를 먼저 체크합시다.`<br><br>
- [x] 시뮬레이션 기본: [빗물](https://www.acmicpc.net/problem/14719) (🥇 골드 5티어) <br>
👉 `vector<int> vec(W); 선언하면 입력도 vec[i]로 받을 수 있습니다.`<br>
👉 `시뮬레이션은 생각의 틀을 넓게 열어두는 것이 포인트!, 아이디어를 찾아봅시다.`<br><br>
- [x] 완전탐색의 유연한 생각: [가르침](https://www.acmicpc.net/problem/1062) (🥇 골드 5티어) <br>
👉 `브루트 포스 느낌이 dfs처럼 visited를 체크하면서 true -> 함수 -> false로 빠져나오면 되겠다!`<br>
👉 `코테에서는 웬만하면 전역으로 선언해서 쉽게 접근해버리자 (대신 전역 변수, 전역 배열 초기화에 대해서는 알아야한다!)`<br><br>
- [ ] 그리디의 기본: [멀티탭 스케줄링](https://www.acmicpc.net/problem/1700) (🥇 골드 2티어) <br>
👉 `시간 복잡도가 어느정도 높더라도 가능한 모든 케이스를 커버할 수 있는 아이디어를 찾아보자!`<br><br>
- [x] 투 포인터의 기본: [부분합](https://www.acmicpc.net/problem/1806) (🥇골드 4티어) <br>
👉 `시간복잡도 낮게, 수열을 탐색하는 문제들에서 주로 `<br>
👉 `마치 pivot을 설정하는 것처럼 아이디어를 생각하자`<br><br>
- [x] 벨만포드 뼈대문제: [최소비용 구하기](https://www.acmicpc.net/problem/1916) (🥇 골드 5티어) <br>
👉 `다익스트라 알고리즘 사용하여 최소 비용 구하기`<br>
👉 `priority_queue를 이용하여 -cost를 사용하면 최소 간선을 찾는 시간을 단축할 수 있다! `<br><br>
- [x] Prime, Kruskal 뼈대문제: [최소 스패닝 트리](https://www.acmicpc.net/problem/1197) (🥇 골드 4티어) <br>
👉 `weight 오름차순으로 정렬하여 사이클 생기지 않는다면 연결하기`<br>
👉 `사이클 생성 여부는 merge, getParent를 통해 확인할 수 있다.`<br><br>
- [ ] KMP 뼈대문제: [부분 문자열](https://www.acmicpc.net/problem/16916) (🥇 골드 4티어) <br>
👉 ``<br><br>
- [ ] 위상정렬: [줄 세우기](https://www.acmicpc.net/problem/2252) (🥇 골드 2티어) <br>
👉 `순서가 정해져있는 작업 (키 순으로 줄 세우기, 졸업 요건)`<br>
👉 `Directed Acyclic Graph이어야 한다.`<br><br>

## 알고리즘 다지기 기초 백준 문제 추천
> 문제풀이 강훈련 전 시간을 재고 빠르게 아이디어를 생각해서 풀 수 있는지 점검할 수 있는 문제를 모아두었습니다.

- [ ] [수들의 합](https://www.acmicpc.net/problem/1789) (🥈실버 5티어)
- [ ] [사탕 게임](https://www.acmicpc.net/problem/3085) (🥈실버 4티어)
- [ ] [동전 1](https://www.acmicpc.net/problem/2293) (🥈실버 1티어)
- [ ] [동전 2](https://www.acmicpc.net/problem/2294) (🥈실버 1티어)
- [ ] [단지번호붙이기](https://www.acmicpc.net/problem/2667) (🥈실버 1티어)
- [ ] [감소하는 수](https://www.acmicpc.net/problem/1038) (🥇골드 5티어)
- [ ] [가르침](https://www.acmicpc.net/problem/1062) (🥇골드 4티어)
- [ ] [파이프 옮기기 1](https://www.acmicpc.net/problem/17070) (🥇골드 5티어)

## 최고빈출 DFS, BFS 기본문제
> 코딩테스트에서 최고 빈출 문제는 완전탐색, DFS, BFS라고 생각합니다. 연습할 수 있는 문제를 소개합니다. 해설은 제 블로그 [🏁 거침없는 코딩테스트 DFS BFS 문제 추천](https://covenant.tistory.com/147)를 참고하세요.

- [ ] [DFS와 BFS](https://www.acmicpc.net/problem/1260)(🥈실버 1티어)
- [ ] [전투](https://www.acmicpc.net/problem/1303) (🥈실버 1티어)
- [ ] [미로 탐색](https://www.acmicpc.net/problem/2178) (🥈실버 1티어)
- [ ] [음식물 피하기](https://www.acmicpc.net/problem/1743) (🥈실버 1티어)
- [ ] [바이러스](https://www.acmicpc.net/problem/2606) (🥈실버 2티어)
- [ ] [A → B](https://www.acmicpc.net/problem/16953) (🥇 골드 5티어)
- [ ] [숨바꼭질 2](https://www.acmicpc.net/problem/12851) (🥇 골드 5티어)
- [ ] [숨바꼭질 3](https://www.acmicpc.net/problem/13549) (🥇 골드 5티어)
- [ ] [숨바꼭질 4](https://www.acmicpc.net/problem/13913) (🥇 골드 4티어)
- [ ] [이모티콘](https://www.acmicpc.net/problem/14226) (🥇 골드 5티어)
- [ ] [아기 상어2](https://www.acmicpc.net/problem/17086) (🥇 골드 5티어)
- [ ] [달리기](https://www.acmicpc.net/problem/16930) (🏅 플래티넘 3티어)

## DP 문제풀이 강훈련 백준 문제 추천
> 예전보다 DP 출제빈도가 떨어진 것 같지만, 여전히 출제되는 DP 문제입니다. 아래의 문제를 풀었을 때 감이 안 온다면 [YES24. 다이나믹 프로그래밍](http://www.yes24.com/Product/Goods/3356129?OzSrank=1) 책을 통해서 DP 문제의 접근방법을 익히는 것을 추천합니다.

- [ ] [퇴사 2](https://www.acmicpc.net/problem/15486) (🥈실버 2티어)
- [ ] [점프](https://www.acmicpc.net/problem/1890) (🥈실버 2티어)
- [ ] [1, 2, 3 더하기 4](https://www.acmicpc.net/problem/15989) (🥈실버 1티어)
- [ ] [기타리스트](https://www.acmicpc.net/problem/1495) (🥈실버 1티어)
- [ ] [크리보드](https://www.acmicpc.net/problem/11058) (🥈실버 1티어)
- [ ] [BOJ 거리](https://www.acmicpc.net/problem/12026) (🥈실버 1티어)
- [ ] [평범한 배낭](https://www.acmicpc.net/problem/12865) (🥇골드 5티어)
- [ ] [1학년](https://www.acmicpc.net/problem/5557) (🥇골드 5티어)
- [ ] [데스노트](https://www.acmicpc.net/problem/2281) (🥇골드 4티어)
- [ ] [소형기관차](https://www.acmicpc.net/problem/2616) (🥇골드 4티어)
- [ ] [괄호](https://www.acmicpc.net/problem/10422) (🥇골드 4티어)
- [ ] [뮤탈리스크](https://www.acmicpc.net/problem/12869) (🥇골드 4티어)
- [ ] [행렬 곱셈 순서](https://www.acmicpc.net/problem/11049) (🥇골드 3티어)
- [ ] [Acka](https://www.acmicpc.net/problem/12996) (🥇골드 3티어)
- [ ] [출근 기록](https://www.acmicpc.net/problem/14238) (🥇골드 3티어)
- [ ] [파일 합치기](https://www.acmicpc.net/problem/11066) (🥇골드 3티어)
- [ ] [팰린드롬?](https://www.acmicpc.net/problem/10942) (🥇골드 2티어)
- [ ] [ABC](https://www.acmicpc.net/problem/12969) (🥇골드 1티어)

## 최근 빈출 유형 백준 문제 추천
> 최근에 자주 출제되는 백트래킹, 트리, DP 문제입니다. 최근 경향의 문제를 맛보고 싶다면 다음 문제들을 추천합니다.

- [ ] [신기한 소수](https://www.acmicpc.net/problem/2023) (🥇골드 5티어)
- [ ] [두 동전](https://www.acmicpc.net/problem/16197) (🥇골드 4티어)
- [ ] [Strahler 순서](https://www.acmicpc.net/problem/9470) (🥇골드 3티어)
- [ ] [ACM Craft](https://www.acmicpc.net/problem/1005) (🥇골드 3티어)
- [ ] [사회망 서비스(SNS)](https://www.acmicpc.net/problem/2533) (🥇골드 3티어)
- [ ] [합리적인 이동경로](https://www.acmicpc.net/problem/2176) (🥇골드 2티어)
- [ ] [우수 마을](https://www.acmicpc.net/problem/1949) (🥇골드 1티어)

## 시뮬레이션 강훈련
> 삼성 취업 단톡방에서 공유하는 시뮬레이션 강훈련 문제입니다. 삼성 스타일이지만 시뮬을 연습하다 보면 속칭 빡구현 문제에 익숙해집니다. 삼성을 노리지 않더라도 시뮬쪽을 소홀히 하지 말고 공부하였으면 합니다! 생각을 조그만 잘못하면 실버 문제더라도 풀리지 않는 세심함이 많이 필요한 시뮬문제들입니다.

- [ ] [iSharp](https://www.acmicpc.net/problem/3568) (🥈실버 5티어)
- [ ] [CPU](https://www.acmicpc.net/problem/16506) (🥈실버 5티어)
- [ ] [LCD Test](https://www.acmicpc.net/problem/2290) (🥈실버 2티어)
- [ ] [시그널](https://www.acmicpc.net/problem/16113) (🥈실버 2티어)
- [ ] [월드컵](https://www.acmicpc.net/problem/6987) (🥈실버 2티어)
- [ ] [거북이](https://www.acmicpc.net/problem/8911) (🥈실버 2티어)
- [ ] [Puyo Puyo](https://www.acmicpc.net/problem/11559) (🥇골드 5티어)
- [ ] [미네랄](https://www.acmicpc.net/problem/2933) (🥇골드 3티어)
- [ ] [백조의 호수](https://www.acmicpc.net/problem/3197) (🥇골드 1티어)
- [ ] [달이 차오른다, 가자.](https://www.acmicpc.net/problem/1194) (🥇골드 1티어)
- [ ] [피아의 아틀리에 신비한 대회의 연금술사](https://www.acmicpc.net/problem/15898) (🥇골드 1티어)
- [ ] [Yut Nori](https://www.acmicpc.net/problem/15778) (🏅 플래티엄 1티어)

## 그래도 아쉽다면?
> 기출 문제와 유사한 백준문제를 끝으로 소개합니다.

- [ ] [접두사](https://www.acmicpc.net/problem/1141) (🥈실버 2티어)
- [ ] [문자열 폭발](https://www.acmicpc.net/problem/9935) (🥇골드 4티어)
- [ ] [2048 (Easy)](https://www.acmicpc.net/problem/12100) (🥇골드 2티어)
- [ ] [앱](https://www.acmicpc.net/problem/7579) (🥇골드 3티어)

