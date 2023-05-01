function count(){
    let shopString = localStorage.getItem('shops');
    if(shopString){
        let shopArray = JSON.parse(shopString);
        if(shopArray != 0){
            $('#count_text').text(shopArray.length);
        }
    }
    else{
        $('#count_text').text('0');
    }
}