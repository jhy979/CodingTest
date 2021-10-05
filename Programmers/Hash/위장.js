function solution(clothes) {
    let answer = 1;
    let m = new Map();
    
    clothes.map((el,idx)=>{
        if(m.has(el[1])){
            m.set(el[1],m.get(el[1])+1);
        }
        else {
            m.set(el[1],1);
        }
    })
    // for(const [key, value] of m){
    //     answer *= (value+1);
    // }
    m.forEach((value, key)=>{
        answer *= (value+1)
    })
    return answer-1;
}
