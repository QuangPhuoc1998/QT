import QtQuick 2.12
import QtQuick.Window 2.12
import IVIControls 1.0
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 800
    height: 480
    color: "#242424"
    title: qsTr("Hello World")

    DialItem {
            id: sp
            objectName: "speed"
            width: 350
            height: width
            anchors.centerIn: parent
            startAngle: 30
            spanAngle: 300
            dialWidth: 6
            dialColor: "#4646FF"

            Image {
                id: needle
                source: "needle.png"
                anchors.centerIn: parent
                rotation: 39 + 30 + slider.value
                Behavior on rotation { SpringAnimation { spring: 2; damping: 0.2 } }
            }
        }

        Slider {
            id: slider
            y: 405
            anchors.horizontalCenter: parent.horizontalCenter
            width: 400
            stepSize: 1
            to: 300
            from: 0
            anchors.horizontalCenterOffset: 0
            onValueChanged:
            {

            }
        }
}
