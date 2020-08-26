import QtQuick 2.4
import QtQuick.Controls 2.2

Page {
    width: 800
    height: 480
    property alias label: label
    property alias dial: dial
    property alias progressBar: progressBar
    property alias button: button
    property alias comboBox: comboBox
    property alias textField: textField

    Rectangle {
        id: rectangle
        color: "#242424"
        rotation: 0
        anchors.fill: parent

        TextField {
            id: textField
            x: 37
            y: 84
            placeholderText: qsTr("Text Field")
        }

        ComboBox {
            id: comboBox
            x: 37
            y: 130
            width: 200
            height: 40
        }

        Button {
            id: button
            x: 37
            y: 176
            width: 200
            height: 40
            text: qsTr("Button")
        }

        ProgressBar {
            id: progressBar
            x: 387
            y: 266
            width: 287
            height: 18
            rotation: 0
            to: 100
            value: 0

            background: Rectangle {
                    implicitWidth: 200
                    implicitHeight: 6
                    color: "#e6e6e6"
                    radius: 3
                }

                contentItem: Item {
                    rotation: 0
                    implicitWidth: 200
                    implicitHeight: 4

                    Rectangle {
                        width: progressBar.visualPosition * parent.width
                        height: parent.height
                        radius: 2
                        rotation: 0
                        color: "#17a81a"
                    }
                }
        }

        Dial {
            id: dial
            x: 439
            y: 51
            stepSize: 1
            to: 100

            background: Rectangle {
                    x: dial.width / 2 - width / 2
                    y: dial.height / 2 - height / 2
                    width: Math.max(64, Math.min(dial.width, dial.height))
                    height: width
                    color: "transparent"
                    radius: width / 2
                    border.color: dial.pressed ? "#17a81a" : "#21be2b"
                    opacity: dial.enabled ? 1 : 0.3
                }

                handle: Rectangle {
                    id: handleItem
                    x: dial.background.x + dial.background.width / 2 - width / 2
                    y: dial.background.y + dial.background.height / 2 - height / 2
                    width: 16
                    height: 16
                    color: dial.pressed ? "#17a81a" : "#21be2b"
                    radius: 8
                    antialiasing: true
                    opacity: dial.enabled ? 1 : 0.3
                    transform: [
                        Translate {
                            y: -Math.min(dial.background.width, dial.background.height) * 0.4 + handleItem.height / 2
                        },
                        Rotation {
                            angle: dial.angle
                            origin.x: handleItem.width / 2
                            origin.y: handleItem.height / 2
                        }
                    ]
                }
        }

        Label {
            id: label
            x: 387
            y: 301
            width: 140
            height: 31
            color: "#ffffff"
            text: qsTr("1 year old")
            font.pointSize: 14
            font.bold: true
        }
    }
}

/*##^##
Designer {
    D{i:1;anchors_height:200;anchors_width:200;anchors_x:130;anchors_y:140}
}
##^##*/
