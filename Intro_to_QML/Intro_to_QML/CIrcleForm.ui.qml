import QtQuick 2.4

Item {
    width: 200
    height: 200
    property alias buttonColor: button.color
    property alias displayText: display.text

    Rectangle {
        id: button
        color: "#c02104"
        radius: width*0.5
        anchors.fill: parent

        Text {
            id: display
            x: 30
            y: 84
            width: 62
            height: 33
            color: "#ffffff"
            text: qsTr("Text")
            font.bold: true
            font.family: "Arial"
            font.pixelSize: 30
        }
    }
}
