# Vector

## 요소 찾기

```cpp
find(a.begin(), a.end(), 1) // 1이 없으면 a.end()를 반환, 존재하면 해당 iterator 반환
find(a.begin(), a.end(), 1) -a.begin() // 해당 원소가 존재할 때 그 index를 반환
```
