import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
import QtQuick.Controls.Material 2.4
Window {
    visible: true
    width: 800
    height: 480
    title: qsTr("Hello World")

    Background {
        id: background
        anchors.rightMargin: 0
        anchors.bottomMargin: 0
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.fill: parent

        Receiver {
            id: receiver
            x: 541
            y: 140
            anchors.verticalCenterOffset: -77
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: parent.right
            anchors.rightMargin: 59
            displayText: "Receiver"
        }

        Sender {
            id: sender
            y: 63
            anchors.left: parent.left
            anchors.leftMargin: 50
            displayText: "Sender"
            buttonColor: "#0000ff"
            target: receiver
        }
        Row{
            id: tools
            Button{
                id: save
                text: "Save"
                onClicked: {
                    phuoc.buffer()
                }
            }
        }

    }
}



