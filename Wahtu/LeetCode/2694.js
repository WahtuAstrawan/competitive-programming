class EventEmitter {
    constructor(){
        this.events = new Map();
    }

    /**
     * @param {string} eventName
     * @param {Function} callback
     * @return {Object}
     */

    subscribe(eventName, callback) {
        if(!this.events.has(eventName)){
            this.events.set(eventName, []);
        }

        const subscribers = this.events.get(eventName);

        const unsubscribe = () => {
            const idx = subscribers.indexOf(callback);

            if(idx !== -1)subscribers.splice(idx, 1);
        };

        subscribers.push(callback);

        return {unsubscribe};
    }
    
    /**
     * @param {string} eventName
     * @param {Array} args
     * @return {Array}
     */
    emit(eventName, args = []) {
        const subscribers = this.events.get(eventName);

        if(!subscribers){
            return [];
        }

        const res = []

        for(const cb of subscribers){
            res.push(cb(...args));
        }

        return res;
    }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */
