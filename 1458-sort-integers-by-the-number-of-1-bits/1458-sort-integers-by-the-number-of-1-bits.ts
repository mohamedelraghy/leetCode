function countWeight(num: number): number {
    let weight = 0, mask = 1;
    while(num > 0) {
        if((num & mask) > 0) {
            weight++;
            num ^= mask;
        }
        mask <<= 1;
    }
     return weight;
} 

function compare(a: number,  b: number): number {
    if(countWeight(a) == countWeight(b)) return a - b;

    return countWeight(a) - countWeight(b)
}

function sortByBits(arr: number[]): number[] {
    return arr.sort((a, b) => compare(a, b));
};