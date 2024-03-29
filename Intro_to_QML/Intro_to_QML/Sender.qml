import QtQuick 2.0

CIrcle {
    id: sendButton

    property int counter: 0
    property Receiver target: null

    signal send(string value)
    onTargetChanged: send.connect(target.receiver)

    MouseArea{
        anchors.fill: parent

        onClicked: {
            counter++
            parent.send(counter)
            phuoc.buffer()
        }

        onPressed: parent.buttonColor = "Green"
        onReleased: parent.buttonColor = "Blue"
    }
}
