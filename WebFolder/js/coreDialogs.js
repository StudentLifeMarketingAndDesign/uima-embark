/*
 4D (the "Software") and the corresponding source code remain
 the exclusive property of 4D and/or its licensors and are protected by national
 and/or international legislations.
 This file is part of the source code of the Software provided under the relevant
 4D License Agreement available on http://www.4D.com/license whose compliance
 constitutes a prerequisite to any use of this file and more generally of the
 Software and the corresponding source code.
 */

function close() {

    waMessage('close');

}

function cancel() {

    waMessage('cancel');

}

function validate() {

    waMessage('validate');

}

function waMessage(message) {

    window.location.href = 'wa:' + message;
    return true;

}

function check(checkbox) {

    if (arguments.length == 1) {

        document.getElementById(checkbox).checked = !document.getElementById(checkbox).checked;

    }
}

function setTimer(timer, iddle, toDo) {

    if (iddle == 0) {

        clearTimeout(timer);

    } else {

        timer = setTimeout(toDo, iddle);

    }

}