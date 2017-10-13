function DisplayResult() {
    var value = document.getElementById("extra7").value;
    console.log(value);
    alert(value);
}

function isNumber(evt) {
    evt = (evt) ? evt : window.event;
    var charCode = (evt.which) ? evt.which : evt.keyCode;

    if (charCode > 31 && (charCode < 48 || charCode > 57))
        return false;
    return true;
}

function GetOperation(operator) {
    switch (operator) {
        case '+':
            console.log('Addition');
            break;
        case '-':
            console.log('Substraction');
        break;
        case '*':
            console.log('Multiplication');
        break;
        case '/':
            console.log('Division');
            break;
        default:
            console.log("Undefined symbol");
            break;
    }
    console.log(oper);
    return true;
}

function PutOperand(clicked_id) {
    //debugger;
    switch (clicked_id) {
        case 'btn0th':
            document.getElementById('extra7').value += '0';
            break;
        case 'btn1th':
            document.getElementById('extra7').value += '1';
            break;
        case 'btn2th':
            document.getElementById('extra7').value += '2';
            break;
        case 'btn3th':
            document.getElementById('extra7').value += '3';
            break;
        case 'btn4th':
            document.getElementById('extra7').value += '4';
            break;
        case 'btn5th':
            document.getElementById('extra7').value += '5';
            break;
        case 'btn6th':
            document.getElementById('extra7').value += '6';
            break;
        case 'btn7th':
            document.getElementById('extra7').value += '7';
            break;
        case 'btn8th':
            document.getElementById('extra7').value += '8';
            break;
        case 'btn9th':
            document.getElementById('extra7').value += '9';
            break;
    default:
    }
}