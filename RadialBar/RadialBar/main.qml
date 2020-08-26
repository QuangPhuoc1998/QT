import QtQuick 2.12
import QtQuick.Window 2.12
import CustomControls 1.0
import QtQuick.Controls 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    color: "#242424"

    RadialBar {
        id: rb
         width: 300
         height: 300
         fillColor: "#000000"
         backgroundColor: "#000000"
         penStyle: Qt.RoundCap
         dialType: RadialBar.FullDial
         progressColor: "#1dc58f"
         foregroundColor: "#191a2f"
         dialWidth: 30
         startAngle: 180
         spanAngle: 70
         minValue: 0
         maxValue: 100
         value: 10
         textFont {
             family: "Halvetica"
             italic: false
             pointSize: 16
         }
         suffixText: "%"
         textColor: "#FFFFFF"
    }

    Slider {
        id: slider
        x: 108
        y: 398
        stepSize: 1
        to: 100
        value: 0
        onValueChanged:
        {
            //rb.value = value
        }
    }
}
