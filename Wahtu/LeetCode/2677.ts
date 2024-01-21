type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };
type Obj = Record<string, JSONValue> | Array<JSONValue>;

function chunk(arr: Obj[], size: number): Obj[][] {
    let res : Obj[][];

    let n: number = arr.length % size > 0 ? arr.length/size + 1 : arr.length/size;

    let last: number = 0;

    for(let i: number = 0; i < n; i++){

        for(let j: number = 0; j < size; j++){
            if(last-1 === size) break;
            res[i][j] = arr[last];
            last++;
        }
    }

    return res;
};
