import QtQuick 2.0

CIrcle {
    id: receiverButton
    function receiver(value){
        displayText = value
        clicknotify.running = true
    }

    SequentialAnimation on buttonColor {
        id: clicknotify
        running: false


        ColorAnimation {
            from: "red"
            to: "blue"
            duration: 250
        }


        ColorAnimation {
            from: "blue"
            to: "red"
            duration: 250
        }
    }
}
