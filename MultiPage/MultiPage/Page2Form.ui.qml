import QtQuick 2.4
import QtQuick.Controls 2.2
import QtQuick.Window 2.12

Page {
    width: 800
    height: 480
    property alias sl: sl
    property alias sp: sp

    Rectangle {
        id: rectangle
        color: "#242424"
        anchors.fill: parent
        Speed
        {
            id: sp
            x: 379
            y: 42
            width: 394
            height: 289
            value: 0
        }

        Slider {
            id: sl
            x: 476
            y: 369
            stepSize: 1
            to: 280
            value: 0

            background: Rectangle {
                    x: sl.leftPadding
                    y: sl.topPadding + sl.availableHeight / 2 - height / 2
                    implicitWidth: 200
                    implicitHeight: 4
                    width: sl.availableWidth
                    height: implicitHeight
                    radius: 2
                    color: "#bdbebf"

                    Rectangle {
                        width: sl.visualPosition * parent.width
                        height: parent.height
                        color: "#21be2b"
                        radius: 2
                    }
                }

                handle: Rectangle {
                    x: sl.leftPadding + sl.visualPosition * (sl.availableWidth - width)
                    y: sl.topPadding + sl.availableHeight / 2 - height / 2
                    implicitWidth: 26
                    implicitHeight: 26
                    radius: 13
                    color: sl.pressed ? "#f0f0f0" : "#f6f6f6"
                    border.color: "#bdbebf"
                }
        }
    }


}

