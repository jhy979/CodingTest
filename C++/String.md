# C++ 문자열
> 다른 언어들과 비교해보면 C++은 문자열 처리가 굉장히 어렵다고 느껴집니다. 많은 언어들이 유용한 string 내장 함수들을 지원하는데 비해 C++은 string 함수들의 한계가 명확한 것 같습니다. 
그래도 가장 익숙한 언어인 만큼 관련된 내용들을 습득하고자 C++ string 관련 메소드들을 정리해보겠습니다.
---
## 문자열 자르기
### substr
```c++
str.substr(2,5) // 인덱스2부터 5개 자르기
str.substr(1) // 인덱스 1부터 끝까지 자르기
```
### erase
```c++
str.erase(s.begin(), s.begin() + 4); // 앞에서 4개 없애기
str.erase(s.end() - 4, s.end()); // 뒤에서 4개 없애기
```
- 자바스크립트는 다음과 같은데 erase가 마치 `str.splice(4,-4)` 과 같은 역할을 합니다. <br>
![image](https://user-images.githubusercontent.com/32920566/132079538-ac2b82c9-1153-4efd-94f0-98ff3ebb2a1a.png)


## 문자열 찾기

### find
```c++
if (str.find("rich") != string::npos) {
  cout << "찾는 문자가 존재합니다";
int index = str.find("rich");   //해당 문자의 시작 인덱스 반환
```
- `string::npos` 는 Not Found를 의미합니다.
- 해당 문자의 시작 인덱스를 반환합니다.
