var person = {
    firstname :'John',
    lastname:'wickhead',
    getFullName:function(){
        var fullname = this.firstname + ' ' + this.lastname;
        return fullname;
    }
}
var logName = function(lang1,lang2){
    console.log('Logged: ' + this.getFullName());
    console.log('Arguments: ' + lang1 + ' ' + lang2);
}
logName.call(person,['Mandarin', 'Alienese']);
//logName.call('Mandarin', 'Alienese');