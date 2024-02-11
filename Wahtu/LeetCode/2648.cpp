/**
 * @return {Generator<number>}
 */
function* fibGenerator() {
    let val = [0, 1];

    while (true) {
        yield val[0];
        val = [val[1], val[0] + val[1]];
    }
}

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */
