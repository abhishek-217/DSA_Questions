/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {

    // if(obj.length == 0){
    //     return true;
    // }


    return Object.keys(obj).length ===0;
};