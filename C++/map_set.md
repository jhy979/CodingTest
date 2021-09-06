# map container

1. Associative - 연관 컨테이너 (associative container) 중 하나입니다.

2. 노드 기반으로 이루어져있고 `균형 이진 트리 구조`입니다.

3. Map - map은 key와 value로 이루어져있으며 이는 `pair 객체 형태`로 저장됩니다.

4. Unique Key - key는 `고유한 값`이므로 중복이 불가능 합니다. (중복 key는 multimap 에서 가능합니다.)

5. Ordered - map도 set과 마찬가지로 `삽입이 되면서 자동으로 정렬`이 됩니다. (default는 less/오름차순 입니다.)

6. Allocator-aware - map container는 저장공간의 필요에 따라서 allocator 객체를 사용합니다. (`동적할당` 합니다.)

## Map vs Set

### Map : key,value 값 쌍으로 이루어져 있어 이진 트리 구조를 이루는데 key값을 기준으로 정렬됩니다.

### Set : 배열인데 중복이 허용안되는 배열이라고 생각하면 편합니다. (key값과 value값이 같습니다.)

## 선언 방법
```c++
map<int, int> m; // 기본 선언 방법

map<int> m(pred); // pred를 통해 정렬 기준을 세웁니다.

map<int> m2(m1); // m1을 복사해서 m2를 만듭니다.

```
- 연산자 ("==", "!=", "<", ">", "<=", ">=") 사용가능합니다.

- 연산자 `m[key] = val;` 을 통해서 원소( key, value ) 를 추가 또는 수정이 가능합니다.

## 멤버 함수
(출처 : https://blockdmask.tistory.com/79)

- m.begin();

- m.end();

- m.rbegin();
  👉 반대로 동작합니다, 거꾸로 탐색하고 싶을 때 주로 사용
- m.rend();
  👉 반대로 동작합니다, 거꾸로 탐색하고 싶을 때 주로 
- m.clear();
  👉 모든 원소 제거

- m.count(k);
  👉 원소 k 개수 반환

- m.empty();
  👉비어있는지

- m.insert(k);     //k는 pair 객체입니다.
  👉 뒤에 삽입

- m.insert(iter, k);
  👉 위치 탐색 후 삽입

- m.erase(start, end);
  👉 원소 제거

- m.find(k);
  👉 k 찾아서 위치 반환, 없으면 end 반환

- m2.swap(m1);
  👉 스왑

- m.upper_bound(k);
  👉 원소 k가 끝나는 구간의 위치

- m.lower_bound(k);
  👉 원소 k가 시작하는 구간의 위치

- m.equal_range(k);    
  👉 위 둘을 합친 객체를 반환 

- m.value_comp();
  👉정렬 기준 조건자 

- m.key_comp();
  👉 정렬 기준 조건자 

- m.size();
  👉 사이즈

- m.max_size();
  👉 남은 메모리 

