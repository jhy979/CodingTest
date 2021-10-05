function solution(participant, completion) {
    let answer = '';
    let m = new Map();
    participant.map((el,idx)=>{
        if(!m.has(el)){
            m.set(el,1);
        }
        else {
            m.set(el,m.get(el)+1);
        }
    })
    
    completion.map((el,idx)=>{
        if(m.has(el)){
            m.set(el,m.get(el)-1);
        }
    })
    
    // m.forEach((value,key)=>{
    //     if(value>=1){
    //         answer += key;
    //     }
    // })
    
    for(const [key ,value] of m){
        if(value >=1){
            answer = key;
        }
    }
    return answer;
}
